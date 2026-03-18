/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x14033E460
 * Callers:
 *     MiCanBatchHardFaultPages @ 0x14023E1D4 (MiCanBatchHardFaultPages.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14033DFA0 (MiRelockProtoPoolPage.c)
 *     MiDoubleLockMdlPage @ 0x14033E058 (MiDoubleLockMdlPage.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiStoreDiscardPoisonedPage @ 0x1406806F8 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAreChargesNeededToLockPage(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r8
  unsigned int v3; // edx

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
  {
    v1 = *(_DWORD *)(a1 + 32);
    v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v3 = 0;
    if ( !(_WORD)v1 )
      return 1;
    if ( (_WORD)v1 != 1 )
    {
      if ( (_WORD)v1 == 2 && v2 )
        return (*(_BYTE *)(a1 + 34) & 8) != 0;
      return v3;
    }
    if ( v2 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
      return 1;
    return v3;
  }
  return 0LL;
}
