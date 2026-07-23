/*
 * XREFs of EmonInitializeProfilingEnhanced @ 0x140B50F20
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     EmonFreeCounterEnhanced @ 0x14055941C (EmonFreeCounterEnhanced.c)
 *     EmonInitializeProfilingBSP @ 0x140559688 (EmonInitializeProfilingBSP.c)
 *     EmonSetAllocatedCounters @ 0x14055C314 (EmonSetAllocatedCounters.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 EmonInitializeProfilingEnhanced()
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned int Number; // r13d
  char v7; // si
  __int64 v13; // r15
  __int64 i; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // edi
  unsigned int v17; // r12d
  int v18; // r14d
  char v24; // r9
  int v30; // r10d
  unsigned __int64 v41; // rsi
  unsigned __int16 *v42; // rbx
  __int64 result; // rax
  unsigned int v44; // r9d
  int v45; // edx
  __int64 j; // rbx
  int v47; // r9d
  unsigned int v48; // r11d
  unsigned __int64 v49; // r10
  unsigned int k; // r9d
  int v51; // edx
  __int64 m; // rbx
  int v53; // r9d
  struct _KPRCB *v54; // [rsp+20h] [rbp-20h]
  int v55; // [rsp+20h] [rbp-20h]
  unsigned __int64 v56; // [rsp+28h] [rbp-18h]

  CurrentPrcb = KeGetCurrentPrcb();
  Number = KeGetPcr()->Prcb.Number;
  _RAX = 7LL;
  v54 = CurrentPrcb;
  __asm { cpuid }
  v7 = 0;
  if ( (_DWORD)_RAX )
  {
    _RAX = 7LL;
    __asm { cpuid }
    v7 = (_RAX & 0x100) != 0;
  }
  v13 = 18LL;
  if ( !Number )
  {
    for ( i = 0LL; (unsigned int)i < 0x12; i = (unsigned int)(i + 1) )
    {
      if ( *((_DWORD *)&EmonProfileSourceDescriptorTable + 80 * i) == 32 )
      {
        *((_BYTE *)&EmonProfileSourceDescriptorTable + 320 * i + 308) = 12;
        break;
      }
    }
    EmonInitializeProfilingBSP(v7);
    CurrentPrcb = v54;
  }
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  if ( v7 )
  {
    _RAX = 35LL;
    __asm { cpuid }
    v24 = _RAX;
    if ( (_RAX & 2) != 0 )
    {
      _RAX = 35LL;
      __asm { cpuid }
      v16 = _RBX;
      v15 = _RAX;
    }
    v30 = __popcnt(v15);
    v17 = __popcnt(v16);
    v55 = v30;
    if ( (v24 & 8) != 0 )
    {
      _RAX = 35LL;
      __asm { cpuid }
      v18 = _RAX;
    }
  }
  else
  {
    _RAX = 10LL;
    __asm { cpuid }
    LODWORD(_RAX) = (unsigned int)_RAX >> 8;
    v30 = (unsigned __int8)_RAX;
    v55 = (unsigned __int8)_RAX;
    v15 = (1 << _RAX) - 1;
    if ( (unsigned int)EmonVersion >= 2 )
    {
      v17 = _RDX & 0xF;
      v16 = (1 << (_RDX & 0xF)) - 1;
    }
    v18 = ~(_DWORD)_RBX;
  }
  v41 = CurrentPrcb->HalReserved[2];
  *(_DWORD *)(v41 + 4) = v30;
  v56 = v15 | ((unsigned __int64)v16 << 32);
  *(_DWORD *)(v41 + 28) = v17;
  EmonSetAllocatedCounters((int *)v41, v15);
  EmonSetAllocatedCounters((int *)(v41 + 24), v16);
  v42 = (unsigned __int16 *)&unk_140E03DA4;
  do
  {
    result = *(unsigned __int8 *)v42;
    if ( *((_BYTE *)v42 + 8) )
    {
      if ( !_bittest((const int *)&v16, result) )
        goto LABEL_27;
LABEL_26:
      result = KeAddProcessorAffinityEx(v42 - 138, Number);
      goto LABEL_27;
    }
    if ( (_BYTE)result != 0xFF && _bittest(&v18, result) || *((_DWORD *)v42 - 77) == 32 && HalpLbrIsInitialized )
      goto LABEL_26;
LABEL_27:
    v42 += 160;
    --v13;
  }
  while ( v13 );
  v44 = 0;
  if ( v55 )
  {
    do
    {
      if ( v44 < *(_DWORD *)(v41 + 4) )
      {
        v45 = 0;
        for ( j = 0LL; (unsigned int)j <= *(_DWORD *)(v41 + 8); j = (unsigned int)(j + 1) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v41 + 16) + 48 * j + 28) != 3 && ++v45 > v44 )
            goto LABEL_36;
        }
      }
      LODWORD(j) = -1;
LABEL_36:
      __writemsr(j + 390, 0LL);
      result = EmonFreeCounterEnhanced(j, 0);
      v44 = v47 + 1;
    }
    while ( v44 < v48 );
  }
  if ( v17 )
  {
    __writemsr(0x38Du, 0LL);
    v49 = __readmsr(0x38Fu);
    for ( k = 0; k < v17; k = v53 + 1 )
    {
      if ( k < *(_DWORD *)(v41 + 28) )
      {
        v51 = 0;
        for ( m = 0LL; (unsigned int)m <= *(_DWORD *)(v41 + 32); m = (unsigned int)(m + 1) )
        {
          if ( *(_DWORD *)(*(_QWORD *)(v41 + 40) + 48 * m + 28) != 3 && ++v51 > k )
            goto LABEL_46;
        }
      }
      LODWORD(m) = -1;
LABEL_46:
      _bittestandreset64((__int64 *)&v49, (unsigned int)(m + 32));
      EmonFreeCounterEnhanced(m, 1);
    }
    result = v49;
    __writemsr(0x38Fu, v49);
  }
  if ( (unsigned int)EmonVersion >= 2 )
  {
    result = v56;
    __writemsr(0x390u, v56);
  }
  return result;
}
