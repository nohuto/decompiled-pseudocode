/*
 * XREFs of MiAreChargesNeededToLockPage @ 0x140345EF0
 * Callers:
 *     MiCanBatchHardFaultPages @ 0x140258170 (MiCanBatchHardFaultPages.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x140345A40 (MiRelockProtoPoolPage.c)
 *     MiDoubleLockMdlPage @ 0x140345AF8 (MiDoubleLockMdlPage.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiStoreDiscardPoisonedPage @ 0x14068D0B8 (MiStoreDiscardPoisonedPage.c)
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
