/*
 * XREFs of CmpGetNextHive @ 0x14084425C
 * Callers:
 *     CmpDoFlushAll @ 0x14024528C (CmpDoFlushAll.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14090B474 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadAppKey @ 0x14092DB9C (CmLoadAppKey.c)
 *     CmpBlockHiveWrites @ 0x140A2BEB0 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A496EC (CmpUnblockHiveWrites.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x1408442F8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140844354 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x140844680 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x14084475C (CmpDeleteHive.c)
 */

__int64 *__fastcall CmpGetNextHive(volatile signed __int32 *P)
{
  __int64 *v1; // rdi
  __int64 **v3; // rsi
  __int64 *v4; // r8
  __int64 **v5; // r8

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( P )
    v3 = (__int64 **)(P + 402);
  CmpLockHiveListShared();
  v4 = *v3;
  while ( v4 != &CmpHiveListHead )
  {
    v1 = v4 - 201;
    if ( (unsigned __int8)CmpReferenceHive(v4 - 201) )
      break;
    v4 = *v5;
    v1 = 0LL;
  }
  CmpUnlockHiveList();
  if ( P && _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)P);
  return v1;
}
