/*
 * XREFs of MiStoreModifiedWriteComplete @ 0x1402DD72C
 * Callers:
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14022FD60 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 * Callees:
 *     MiSetPfnModified @ 0x140215EC0 (MiSetPfnModified.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiStoreFreeWriteSupport @ 0x1402DD6E0 (MiStoreFreeWriteSupport.c)
 *     MiStoreModifiedWriteDereference @ 0x1402DF2DC (MiStoreModifiedWriteDereference.c)
 *     MiStoreLogWriteCompleteFailure @ 0x140493904 (MiStoreLogWriteCompleteFailure.c)
 */

__int64 __fastcall MiStoreModifiedWriteComplete(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rbp
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // bl

  Next = ListEntry->Next;
  v3 = *((_QWORD *)&ListEntry->Next[3].Next + 1);
  if ( *((int *)&ListEntry->Next + 2) < 0 )
  {
    MiStoreLogWriteCompleteFailure();
    v5 = 48 * (__int64)ListEntry[5].Next - 0x220000000000LL;
    v9 = MiLockPageInline(v5, v6, v7, v8);
    MiSetPfnModified(v5, 1);
    MiUnlockPage(v5, v9);
    *(_DWORD *)(v3 + 1220) = 32;
  }
  MiStoreFreeWriteSupport(ListEntry, (_SLIST_HEADER *)v3);
  return MiStoreModifiedWriteDereference(Next);
}
