/*
 * XREFs of HalpInterruptUpdateLocalUnitIdentifier @ 0x140B5038C
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B500C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140352BB0 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptUpdateLocalUnitIdentifier(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int i; // r9d
  ULONG_PTR v9; // rax
  char v10; // cl
  __int64 v11; // r9
  __int64 ProcessorIndexFromNumber; // r15
  __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // r8d
  __int64 v17; // rcx
  unsigned int j; // eax
  _DWORD *v19; // rcx
  int v20; // r11d
  int v21; // r10d
  unsigned __int64 k; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 m; // r8
  __int64 v26; // rax
  int v27; // [rsp+58h] [rbp+10h] BYREF

  v27 = a2;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)HalpInterruptProcessorCount )
    {
      HalpInterruptSetProblemEx(0LL, 21, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x3F1u);
      return 3221226021LL;
    }
    v9 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
    if ( *(_DWORD *)v9 == a1 )
      break;
  }
  v10 = *(_BYTE *)(v9 + 13);
  *(_DWORD *)v9 = a2;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)((v9 + 16) & -(__int64)(v10 != 0)));
  *(_DWORD *)(HalpInterruptLocalIds + 4 * ProcessorIndexFromNumber) = a2;
  v13 = HalpInterruptTargets;
  *(_OWORD *)a3 = *(_OWORD *)(HalpInterruptTargets + 24 * ProcessorIndexFromNumber);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v13 + 24 * ProcessorIndexFromNumber + 16);
  if ( *(_DWORD *)(v13 + 24 * ProcessorIndexFromNumber) == 4 )
    *(_DWORD *)(v13 + 24 * ProcessorIndexFromNumber + 8) = v27;
  if ( *(_QWORD *)(HalpInterruptController + 144) )
  {
    LOBYTE(v11) = 1;
    v14 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), &v27, a4, v11);
    if ( v14 < 0 )
    {
      HalpInterruptSetProblemEx(
        HalpInterruptController,
        9,
        v14,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
        0x415u);
      return v15;
    }
    v17 = HalpInterruptTargets;
    *(_OWORD *)(HalpInterruptTargets + 24 * ProcessorIndexFromNumber) = *(_OWORD *)a4;
    *(_QWORD *)(v17 + 24 * ProcessorIndexFromNumber + 16) = *(_QWORD *)(a4 + 16);
  }
  for ( j = 0; j < HalpInterruptDynamicProcessorCount; ++j )
  {
    v19 = (_DWORD *)(HalpInterruptDynamicProcessorState + ((unsigned __int64)j << 6));
    if ( *v19 == a1 )
    {
      *v19 = v27;
      break;
    }
  }
  v20 = -1;
  v21 = 29;
  if ( *(_DWORD *)a3 == 6 )
  {
    for ( k = HalpInterruptClusterData; ; k += 24LL )
    {
      if ( k >= HalpInterruptClusterDataEnd )
      {
        HalpInterruptSetProblemEx(0LL, 29, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x44Cu);
        goto LABEL_24;
      }
      if ( *(_DWORD *)k == *(_DWORD *)(a3 + 8) )
        break;
    }
    v23 = *(_QWORD *)(k + 8) & ~(1LL << (*((_BYTE *)KiGlobalState + 4 * ProcessorIndexFromNumber) & 0x3F));
    *(_QWORD *)(k + 8) = v23;
    if ( !v23 )
      *(_DWORD *)k = -1;
  }
LABEL_24:
  v24 = HalpInterruptTargets;
  *(_OWORD *)a4 = *(_OWORD *)(HalpInterruptTargets + 24 * ProcessorIndexFromNumber);
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v24 + 24 * ProcessorIndexFromNumber + 16);
  if ( *(_DWORD *)a4 == 6 )
  {
    for ( m = HalpInterruptClusterData; m < HalpInterruptClusterDataEnd; m += 24LL )
    {
      if ( *(_DWORD *)m == v20 || *(_DWORD *)m == *(_DWORD *)(a4 + 8) )
      {
        *(_DWORD *)m = *(_DWORD *)(a4 + 8);
        v26 = *(_QWORD *)(m + 8);
        _bittestandset64(&v26, *((_DWORD *)KiGlobalState + ProcessorIndexFromNumber) & 0x3F);
        *(_QWORD *)(m + 8) = v26;
        return 0LL;
      }
    }
    HalpInterruptSetProblemEx(0LL, v21, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x46Fu);
  }
  return 0LL;
}
