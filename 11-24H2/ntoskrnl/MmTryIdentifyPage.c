/*
 * XREFs of MmTryIdentifyPage @ 0x140673A4C
 * Callers:
 *     IopLiveDumpMirrorPhysicalMemoryCallback @ 0x140599120 (IopLiveDumpMirrorPhysicalMemoryCallback.c)
 * Callees:
 *     MiIsPageOnBadList @ 0x14030E80C (MiIsPageOnBadList.c)
 *     MiIdentifyPfn @ 0x1403113F0 (MiIdentifyPfn.c)
 *     MiIsPageSecured @ 0x1403F4404 (MiIsPageSecured.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MmTryIdentifyPage(unsigned __int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rdx
  __int64 v9; // r8

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  v4 = 1;
  v5 = 6 * a1;
  v6 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( a1 > qword_140E2DD20
    || ((*(_QWORD *)(8 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0
    || _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    v4 = 0;
  }
  else
  {
    if ( (*(_DWORD *)(v6 + 32) & 0x40000000) != 0 || MiIsPageOnBadList(v6) || (unsigned int)MiIsPageSecured(v6, v8, v9) )
      v4 = 0;
    else
      MiIdentifyPfn(a1, a2);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v4;
}
