/*
 * XREFs of SmpKeyedStoreCreate @ 0x140A383F4
 * Callers:
 *     SmProcessCreateNotification @ 0x140A38394 (SmProcessCreateNotification.c)
 * Callees:
 *     SmKmStoreGet @ 0x14020DEF4 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x14020DF80 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     SmAllocEx @ 0x1402F5228 (SmAllocEx.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140441A20 (SmKmStoreDeleteWhenEmpty.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x1404933CC (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SmpDirtyStoreCreate @ 0x140A3854C (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR a1, struct _SM_PARTITION *a2, __int64 a3)
{
  __int64 v6; // rdi
  _KPROCESS *v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  _OWORD v12[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v12, 0, sizeof(v12));
  v6 = 0LL;
  SmpGetProcessPartition(a3);
  KiStackAttachProcess(v7, 0, (__int64)v12);
  v8 = SmpDirtyStoreCreate(a2);
  KiUnstackDetachProcess((__int64)v12, 0, v9, v10);
  if ( v8 >= 0 )
  {
    v6 = SmAllocEx(0x18uLL, 0x53506D73u, -1);
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
