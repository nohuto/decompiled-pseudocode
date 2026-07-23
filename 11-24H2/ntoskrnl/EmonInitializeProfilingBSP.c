/*
 * XREFs of EmonInitializeProfilingBSP @ 0x140559688
 * Callers:
 *     EmonInitializeProfilingEnhanced @ 0x140B50F20 (EmonInitializeProfilingEnhanced.c)
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     EmonAllocateCounters @ 0x1405588DC (EmonAllocateCounters.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EmonInitializePebs @ 0x140B50E30 (EmonInitializePebs.c)
 */

__int64 __fastcall EmonInitializeProfilingBSP(char a1)
{
  struct _KPRCB *CurrentPrcb; // r15
  __int64 MaximumRegisteredProcessorCount; // r9
  unsigned int v9; // edi
  unsigned int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  EmonPebsAvailable = 0;
  MaximumRegisteredProcessorCount = (unsigned int)HalpQueryMaximumRegisteredProcessorCount();
  _RAX = 10LL;
  __asm { cpuid }
  EmonCounterResolution = BYTE2(_RAX);
  EmonVersion = (unsigned __int8)_RAX;
  if ( (unsigned __int8)_RAX >= 2u )
    EmonFixedCounterResolution = (unsigned __int8)((unsigned int)_RDX >> 5);
  if ( a1 )
  {
    v10 = 32;
    v9 = 32;
  }
  else
  {
    v9 = 0;
    v10 = BYTE1(_RAX);
    if ( (unsigned __int8)_RAX >= 2u )
      v9 = _RDX & 0xF;
  }
  if ( (_DWORD)MaximumRegisteredProcessorCount )
  {
    v11 = 0LL;
    v12 = MaximumRegisteredProcessorCount;
    do
    {
      v13 = v11 + CurrentPrcb->HalReserved[2];
      EmonAllocateCounters(v13, 0, v10);
      EmonAllocateCounters(v13 + 24, 1, v9);
      EmonAllocateCounters(v13 + 48, 100, 0);
      EmonAllocateCounters(v13 + 72, 101, 0);
      v11 += 96LL;
      --v12;
    }
    while ( v12 );
  }
  HalpProfileSourceDescriptorListLock = 0LL;
  EmonReservedResourcesLock = 0LL;
  HalpProfileIntervalLimits = (__int64)EmonProfileIntervalLimits;
  qword_140FC20E8 = (__int64)&HalpProfileSourceDescriptorListHead;
  qword_140F8F228 = (__int64)&EmonReservedResourcesList;
  v14 = 0LL;
  EmonReservedResourcesList = (__int64)&EmonReservedResourcesList;
  HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
  do
  {
    v15 = 320 * v14;
    if ( !*((_BYTE *)&EmonProfileSourceDescriptorTable + 320 * v14 + 29) )
    {
      v16 = (_QWORD *)((char *)&EmonProfileSourceDescriptorTable + v15 + 8);
      v15 = qword_140FC20E8;
      if ( *(__int64 **)qword_140FC20E8 != &HalpProfileSourceDescriptorListHead )
        __fastfail(3u);
      ++HalpProfileSourceDescriptorCount;
      *v16 = &HalpProfileSourceDescriptorListHead;
      v16[1] = v15;
      *(_QWORD *)v15 = v16;
      qword_140FC20E8 = (__int64)v16;
    }
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < 0x12 );
  EmonInitializePebs(v14, v15, &EmonProfileSourceDescriptorTable);
  result = 0x37FFFFFFFFFFFFFLL;
  EmonOverflowMask = 0x37FFFFFFFFFFFFFLL;
  if ( EmonPebsAvailable )
  {
    result = 0x437FFFFFFFFFFFFFLL;
    EmonOverflowMask = 0x437FFFFFFFFFFFFFLL;
  }
  return result;
}
