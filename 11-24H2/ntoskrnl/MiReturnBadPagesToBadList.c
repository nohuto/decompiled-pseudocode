/*
 * XREFs of MiReturnBadPagesToBadList @ 0x140675644
 * Callers:
 *     MiRemoveBadPages @ 0x14067523C (MiRemoveBadPages.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 * Callees:
 *     MiInsertPageInList @ 0x140300420 (MiInsertPageInList.c)
 *     MiSetPfnContainingFrame @ 0x140347E40 (MiSetPfnContainingFrame.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReturnBadPagesToBadList(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 i; // rbp
  int v6; // edx
  unsigned __int8 v7; // cl
  __int64 result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 48 * a1 - 0x220000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  for ( i = 0LL; i < v2; v3 += 48LL )
  {
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    if ( !*(_QWORD *)(v3 + 8) )
      *(_QWORD *)(v3 + 8) = -4LL;
    HIWORD(v9) = HIWORD(*(_DWORD *)(v3 + 32));
    LOWORD(v9) = 0;
    *(_DWORD *)(v3 + 32) = v9;
    MiSetPfnContainingFrame(v3, 0LL);
    MiInsertPageInList(v3, 0x20u);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++i & 0x3F) == 0 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v7 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = 2;
        KiRaiseIrqlProcessIrqlFlags(v7, v6);
      }
    }
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
