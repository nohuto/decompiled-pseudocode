/*
 * XREFs of EmonInitializeProfilingOriginal @ 0x140B51230
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     HalpMmAllocateMemory @ 0x140540604 (HalpMmAllocateMemory.c)
 *     EmonFreeCounterOriginal @ 0x14055948C (EmonFreeCounterOriginal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EmonInitializePebs @ 0x140B50E30 (EmonInitializePebs.c)
 */

__int64 __fastcall EmonInitializeProfilingOriginal()
{
  __int64 v0; // r13
  __int64 Memory; // r15
  char v2; // si
  int v8; // r9d
  unsigned int v9; // edi
  __int64 v10; // r14
  unsigned int MaximumRegisteredProcessorCount; // r12d
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rbp
  __int64 v31; // rdi
  unsigned __int8 *v32; // rbx
  __int64 v33; // rsi
  int v34; // r14d
  __int64 result; // rax
  unsigned int i; // ebx
  unsigned __int64 v37; // rbx
  unsigned int v38; // r9d
  unsigned int v39; // r10d
  int v40; // r9d
  __int64 v41; // rdx
  int v42; // [rsp+20h] [rbp-58h]
  struct _KPRCB *CurrentPrcb; // [rsp+28h] [rbp-50h]
  unsigned int v44; // [rsp+30h] [rbp-48h]

  Memory = 0LL;
  LODWORD(v0) = KeGetPcr()->Prcb.Number;
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  _RAX = 10LL;
  __asm { cpuid }
  v42 = _RBX;
  v8 = _RBX;
  v44 = BYTE3(_RAX);
  if ( !(_DWORD)v0 )
  {
    v9 = 0;
    v10 = BYTE1(_RAX);
    EmonCounterResolution = BYTE2(_RAX);
    EmonPebsAvailable = 0;
    EmonVersion = (unsigned __int8)_RAX;
    if ( (unsigned __int8)_RAX >= 2u )
    {
      v9 = _RDX & 0xF;
      EmonFixedCounterResolution = (unsigned __int8)((unsigned int)_RDX >> 5);
    }
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v12 = 0LL;
    while ( (unsigned int)v12 < MaximumRegisteredProcessorCount )
    {
      v13 = (unsigned int)(4 * v10);
      v14 = CurrentPrcb->HalReserved[2] + 96 * v12;
      if ( (_DWORD)v13 )
        Memory = HalpMmAllocateMemory(v13);
      if ( !Memory )
        goto LABEL_24;
      *(_DWORD *)v14 = 0;
      v15 = (unsigned int)(48 * v10);
      *(_DWORD *)(v14 + 4) = v10;
      if ( (_DWORD)v15 )
        *(_QWORD *)(v14 + 16) = HalpMmAllocateMemory(v15);
      v16 = *(_QWORD *)(v14 + 16);
      if ( !v16 )
        goto LABEL_24;
      if ( (_DWORD)v10 )
      {
        v17 = v16 + 16;
        v18 = Memory;
        v19 = v10;
        do
        {
          *(_DWORD *)(v17 + 12) = 0;
          *(_QWORD *)v17 = v18;
          v18 += 4LL;
          v17 += 48LL;
          --v19;
        }
        while ( v19 );
      }
      v20 = 4 * v9;
      if ( (_DWORD)v20 )
      {
        Memory = HalpMmAllocateMemory(v20);
        if ( !Memory )
          goto LABEL_24;
      }
      *(_DWORD *)(v14 + 24) = 1;
      v21 = 48 * v9;
      *(_DWORD *)(v14 + 28) = v9;
      if ( (_DWORD)v21 )
        *(_QWORD *)(v14 + 40) = HalpMmAllocateMemory(v21);
      v22 = *(_QWORD *)(v14 + 40);
      if ( !v22 )
      {
LABEL_24:
        v2 = 1;
        break;
      }
      if ( v9 )
      {
        v23 = v22 + 16;
        v24 = v9;
        v25 = Memory;
        do
        {
          *(_QWORD *)v23 = v25;
          v25 += 4LL;
          *(_DWORD *)(v23 + 12) = 1;
          v23 += 48LL;
          --v24;
        }
        while ( v24 );
      }
      *(_DWORD *)(v14 + 52) = 0;
      *(_QWORD *)(v14 + 64) = 0LL;
      *(_DWORD *)(v14 + 76) = 0;
      *(_QWORD *)(v14 + 88) = 0LL;
      v12 = (unsigned int)(v12 + 1);
      *(_DWORD *)(v14 + 48) = 100;
      *(_DWORD *)(v14 + 72) = 101;
    }
    HalpProfileSourceDescriptorListLock = 0LL;
    EmonReservedResourcesLock = 0LL;
    HalpProfileIntervalLimits = (__int64)EmonProfileIntervalLimits;
    qword_140F8F228 = (__int64)&EmonReservedResourcesList;
    EmonReservedResourcesList = (__int64)&EmonReservedResourcesList;
    qword_140FC20E8 = (__int64)&HalpProfileSourceDescriptorListHead;
    HalpProfileSourceDescriptorListHead = (__int64)&HalpProfileSourceDescriptorListHead;
    if ( !v2 )
    {
      v26 = 0LL;
      do
      {
        if ( !*((_BYTE *)&unk_140E03C8D + 320 * v26) )
        {
          v27 = (_QWORD *)((char *)&unk_140E03C78 + 320 * v26);
          v28 = (_QWORD *)qword_140FC20E8;
          if ( *(__int64 **)qword_140FC20E8 != &HalpProfileSourceDescriptorListHead )
            __fastfail(3u);
          ++HalpProfileSourceDescriptorCount;
          *v27 = &HalpProfileSourceDescriptorListHead;
          v27[1] = v28;
          *v28 = v27;
          qword_140FC20E8 = (__int64)&unk_140E03C78 + 320 * v26;
        }
        v26 = (unsigned int)(v26 + 1);
      }
      while ( (unsigned int)v26 < 0x12 );
    }
    v8 = v42;
  }
  v29 = KiProcessorBlock[v0];
  v30 = *(_QWORD *)(v29 + 88);
  if ( v30 )
    LODWORD(v30) = *(_DWORD *)(v30 + 4);
  v31 = *(_QWORD *)(v29 + 88) + 24LL;
  if ( v31 )
    LODWORD(v31) = *(_DWORD *)(v31 + 4);
  v32 = (unsigned __int8 *)&unk_140E03DA4;
  v33 = 0LL;
  v34 = 32;
  do
  {
    result = *v32;
    if ( v32[8] )
    {
      if ( (unsigned int)result >= (unsigned int)v31 )
        goto LABEL_48;
LABEL_47:
      result = KeAddProcessorAffinityEx((unsigned __int16 *)&unk_140E03C90 + 160 * v33, v0);
      goto LABEL_48;
    }
    if ( (_BYTE)result != 0xFF && (unsigned int)result < v44 && !_bittest(&v8, result)
      || *((_DWORD *)v32 - 77) == 32 && HalpLbrIsInitialized )
    {
      goto LABEL_47;
    }
LABEL_48:
    v8 = v42;
    v33 = (unsigned int)(v33 + 1);
    v32 += 320;
  }
  while ( (unsigned int)v33 < 0x12 );
  for ( i = 0; i < (unsigned int)v30; ++i )
  {
    __writemsr(i + 390, 0LL);
    result = EmonFreeCounterOriginal(i, 0);
  }
  if ( (_DWORD)v31 )
  {
    __writemsr(0x38Du, 0LL);
    v37 = __readmsr(0x38Fu);
    v38 = 0;
    do
    {
      v37 &= ~(1LL << v34);
      EmonFreeCounterOriginal(v38, 1);
      v38 = v40 + 1;
      ++v34;
    }
    while ( v38 < (unsigned int)v31 );
    result = v37;
    __writemsr(v39, v37);
  }
  if ( !(_DWORD)v0 )
  {
    EmonInitializePebs();
    result = (1LL << v30) - 1;
    v41 = result | (((1LL << v31) - 1) << 32);
    EmonOverflowMask = v41;
    if ( EmonPebsAvailable )
    {
      result = 0x4000000000000000LL;
      EmonOverflowMask = v41 | 0x4000000000000000LL;
    }
  }
  if ( (unsigned int)EmonVersion >= 2 )
  {
    result = EmonOverflowMask;
    __writemsr(0x390u, EmonOverflowMask);
  }
  return result;
}
