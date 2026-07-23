/*
 * XREFs of MiUpdateBootHpatPagesInUse @ 0x140C45608
 * Callers:
 *     MiHandleBootImage @ 0x140C49B04 (MiHandleBootImage.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402170E0 (MiGetPfnSlabType.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140227668 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiUpdatePageFileHighInPte @ 0x14037C850 (MiUpdatePageFileHighInPte.c)
 *     MiMarkPfnVerified @ 0x1403F4204 (MiMarkPfnVerified.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFindLoaderAppliedHotPatchEntry @ 0x140C454A4 (MiFindLoaderAppliedHotPatchEntry.c)
 */

unsigned __int64 __fastcall MiUpdateBootHpatPagesInUse(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *LoaderAppliedHotPatchEntry; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int8 v9; // cf
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  _QWORD *v15; // r12
  unsigned __int8 CurrentIrql; // bp
  __int64 v17; // rbx
  __int64 v18; // r9
  int IsPfnFromChargedSlabAllocation; // eax
  __int64 v20; // rdx
  PVOID v21; // rcx
  PVOID v22; // rt1
  int v23[14]; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+78h] [rbp+20h]

  if ( !dword_140E3726C )
    return 0LL;
  LoaderAppliedHotPatchEntry = MiFindLoaderAppliedHotPatchEntry(a1, a3);
  if ( !LoaderAppliedHotPatchEntry )
    return 0LL;
  v9 = _bittest16((const signed __int16 *)(v7 + 110), 9u);
  v10 = 0LL;
  if ( v9 )
    v11 = *((unsigned int *)LoaderAppliedHotPatchEntry + 13);
  else
    v11 = *((unsigned int *)LoaderAppliedHotPatchEntry + 12);
  v12 = 8 * v11;
  LOBYTE(v10) = (v12 & 0xFFF) != 0;
  v13 = (v12 >> 12) + v10;
  v8 = 2 * v13;
  if ( 2 * v13 )
  {
    v14 = 0LL;
    v15 = &a2[2 * v13];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    while ( a2 < v15 )
    {
      v17 = 48 * ((*a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v23[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v23);
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      if ( ((*(_QWORD *)(v17 + 40) >> 60) & 7) != 3 )
        MiMarkPfnVerified(v17, 4);
      if ( (unsigned int)MiGetPfnSlabType(v17) == 9 )
      {
        _InterlockedIncrement64(&qword_140E3D680);
        v20 = 1LL;
      }
      else
      {
        IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v17);
        if ( !IsPfnFromChargedSlabAllocation )
          ++v14;
        v20 = v18 + (IsPfnFromChargedSlabAllocation != 0 ? 4 : 0);
      }
      HIWORD(v24) = HIWORD(*(_DWORD *)(v17 + 32));
      LOWORD(v24) = v18;
      *(_DWORD *)(v17 + 32) = v24;
      *(_QWORD *)(v17 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v17 + 16), v20);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++a2;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v14 )
    {
      MiAcquireNonPagedResources(&MiSystemPartition, v14, 0LL, 0LL);
      qword_140E3D6A8 += v14;
    }
    _InterlockedAdd64(&qword_140E2D9A8, v8);
    v21 = *(PVOID *)(a1 + 48);
    v22 = *(PVOID *)&KeNumberProcessorsGroup0[9];
    if ( v21 == v22 || v21 == PsHalImageBase )
      _InterlockedAdd64(&qword_140E37398, v14 - v8);
    else
      _InterlockedExchangeAdd(&dword_140E373B0, v14 - v8);
  }
  return v8;
}
