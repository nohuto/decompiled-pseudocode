/*
 * XREFs of MiStoreModifiedWriteComplete @ 0x14045C418
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14027A7D0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiSetPfnModified @ 0x1402E4730 (MiSetPfnModified.c)
 *     MiStoreModifiedWriteDereference @ 0x1403371B8 (MiStoreModifiedWriteDereference.c)
 *     MiStoreFreeWriteSupport @ 0x14045C4C4 (MiStoreFreeWriteSupport.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14045C510 (MiStoreLogWriteCompleteFailure.c)
 */

__int64 __fastcall MiStoreModifiedWriteComplete(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rbp
  __int64 v3; // r14
  __int64 v5; // rdi
  unsigned __int8 v6; // bl

  Next = ListEntry->Next;
  v3 = *((_QWORD *)&ListEntry->Next[3].Next + 1);
  if ( *((int *)&ListEntry->Next + 2) < 0 )
  {
    MiStoreLogWriteCompleteFailure();
    v5 = 48 * (__int64)ListEntry[5].Next - 0x220000000000LL;
    v6 = MiLockPageInline(v5);
    MiSetPfnModified(v5, 1);
    MiUnlockPage(v5, v6);
    *(_DWORD *)(v3 + 1220) = 32;
  }
  MiStoreFreeWriteSupport(ListEntry);
  return MiStoreModifiedWriteDereference((__int64)Next);
}
