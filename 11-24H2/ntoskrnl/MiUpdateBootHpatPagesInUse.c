/*
 * XREFs of MiUpdateBootHpatPagesInUse @ 0x140C58A78
 * Callers:
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 * Callees:
 *     MiIsPfnFromChargedSlabAllocation @ 0x14021D558 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiUpdatePageFileHighInPte @ 0x1402EACE0 (MiUpdatePageFileHighInPte.c)
 *     MiGetPfnSlabType @ 0x140300F20 (MiGetPfnSlabType.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     MiMarkPfnVerified @ 0x1404297A4 (MiMarkPfnVerified.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiFindLoaderAppliedHotPatchEntry @ 0x140C58914 (MiFindLoaderAppliedHotPatchEntry.c)
 */

unsigned __int64 __fastcall MiUpdateBootHpatPagesInUse(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 *LoaderAppliedHotPatchEntry; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // cf
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r12
  unsigned __int8 CurrentIrql; // bp
  __int64 v18; // rbx
  __int64 v19; // r9
  int IsPfnFromChargedSlabAllocation; // eax
  __int64 v21; // rdx
  PVOID v22; // rcx
  unsigned int v23[14]; // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+78h] [rbp+20h]

  if ( !dword_140E375EC )
    return 0LL;
  LoaderAppliedHotPatchEntry = MiFindLoaderAppliedHotPatchEntry(a1, a3);
  if ( !LoaderAppliedHotPatchEntry )
    return 0LL;
  v10 = _bittest16((const signed __int16 *)(v7 + 110), 9u);
  v11 = 0LL;
  if ( v10 )
    v12 = *((unsigned int *)LoaderAppliedHotPatchEntry + 13);
  else
    v12 = *((unsigned int *)LoaderAppliedHotPatchEntry + 12);
  v13 = 8 * v12;
  LOBYTE(v11) = (v13 & 0xFFF) != 0;
  v14 = (v13 >> 12) + v11;
  v9 = 2 * v14;
  if ( 2 * v14 )
  {
    v15 = 0LL;
    v16 = &a2[2 * v14];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    while ( a2 < v16 )
    {
      v18 = 48 * ((*a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v23[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(v23);
        while ( *(__int64 *)(v18 + 24) < 0 );
      }
      if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) != 3 )
        MiMarkPfnVerified(v18, 4LL, v8, 3LL);
      if ( (unsigned int)MiGetPfnSlabType(v18) == 9 )
      {
        _InterlockedIncrement64(&qword_140E3DA00);
        v21 = 1LL;
      }
      else
      {
        IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v18);
        if ( !IsPfnFromChargedSlabAllocation )
          ++v15;
        v21 = v19 + (IsPfnFromChargedSlabAllocation != 0 ? 4 : 0);
      }
      HIWORD(v24) = HIWORD(*(_DWORD *)(v18 + 32));
      LOWORD(v24) = v19;
      *(_DWORD *)(v18 + 32) = v24;
      *(_QWORD *)(v18 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v18 + 16), v21);
      _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      ++a2;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    if ( v15 )
    {
      MiAcquireNonPagedResources(&MiSystemPartition, v15, 0LL, 0LL);
      qword_140E3DA28 += v15;
    }
    _InterlockedAdd64(&qword_140E2DD28, v9);
    v22 = *(PVOID *)(a1 + 48);
    if ( v22 == PsNtosImageBase || v22 == PsHalImageBase )
      _InterlockedAdd64(&qword_140E37718, v15 - v9);
    else
      _InterlockedExchangeAdd(&dword_140E37730, v15 - v9);
  }
  return v9;
}
