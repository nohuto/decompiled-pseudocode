/*
 * XREFs of CmpGetNextHive @ 0x1408484DC
 * Callers:
 *     CmpDoFlushAll @ 0x14032401C (CmpDoFlushAll.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x14083F4D0 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadAppKey @ 0x1409122B0 (CmLoadAppKey.c)
 *     CmpBlockHiveWrites @ 0x140A2224C (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A445B0 (CmpUnblockHiveWrites.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x140848578 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x1408485D4 (CmpUnlockHiveList.c)
 *     CmpDeleteHive @ 0x1408488CC (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x140848B50 (CmpReferenceHive.c)
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
