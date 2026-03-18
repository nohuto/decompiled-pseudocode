/*
 * XREFs of SmpKeyedStoreCreate @ 0x140A42B64
 * Callers:
 *     SmProcessCreateNotification @ 0x140A42B04 (SmProcessCreateNotification.c)
 * Callees:
 *     SmKmStoreGet @ 0x140245714 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x1402457A0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDereference @ 0x14027A498 (SmKmStoreDereference.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x1404492D0 (SmKmStoreDeleteWhenEmpty.c)
 *     SmAllocEx @ 0x14044AB68 (SmAllocEx.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x140498A6C (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SmpDirtyStoreCreate @ 0x140A42CBC (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR a1, struct _SM_PARTITION *a2, __int64 a3)
{
  __int64 v6; // rdi
  _KPROCESS *v7; // rcx
  int v8; // ebx
  _OWORD v10[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v10, 0, sizeof(v10));
  v6 = 0LL;
  SmpGetProcessPartition(a3);
  KiStackAttachProcess(v7, 0, (__int64)v10);
  v8 = SmpDirtyStoreCreate(a2);
  KiUnstackDetachProcess((__int64)v10, 0);
  if ( v8 >= 0 )
  {
    v6 = SmAllocEx(24LL, 1397779827LL, -1);
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = a3;
      *(_WORD *)(v6 + 16) = -1;
      if ( SmpKeyedStoreEntryGet(a1, (_QWORD *)(v6 + 8), 1, 0) )
      {
        v6 = 0LL;
        v8 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  if ( v6 )
    CmSiFreeMemory((PPRIVILEGE_SET)v6);
  return (unsigned int)v8;
}
