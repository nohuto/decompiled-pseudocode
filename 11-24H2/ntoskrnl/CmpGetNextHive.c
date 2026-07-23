/*
 * XREFs of CmpGetNextHive @ 0x14084051C
 * Callers:
 *     CmpDoFlushAll @ 0x14020DA6C (CmpDoFlushAll.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     CmpBlockHiveWrites @ 0x140A1FD70 (CmpBlockHiveWrites.c)
 *     CmpUnblockHiveWrites @ 0x140A4040C (CmpUnblockHiveWrites.c)
 * Callees:
 *     CmpLockHiveListShared @ 0x1408405B8 (CmpLockHiveListShared.c)
 *     CmpUnlockHiveList @ 0x140840614 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x140840940 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x140840A1C (CmpDeleteHive.c)
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
