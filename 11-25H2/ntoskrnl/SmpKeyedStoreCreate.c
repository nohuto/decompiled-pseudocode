/*
 * XREFs of SmpKeyedStoreCreate @ 0x1409C1434
 * Callers:
 *     SmProcessCreateNotification @ 0x1409C13D4 (SmProcessCreateNotification.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     SmKmStoreGet @ 0x140324324 (SmKmStoreGet.c)
 *     SmpKeyedStoreEntryGet @ 0x1403243B0 (SmpKeyedStoreEntryGet.c)
 *     SmKmStoreDereference @ 0x14034AECC (SmKmStoreDereference.c)
 *     SmAllocEx @ 0x14039350C (SmAllocEx.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14044B4F0 (SmKmStoreDeleteWhenEmpty.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SmpGetProcessPartition @ 0x140498E1C (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     SmpDirtyStoreCreate @ 0x1409C158C (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpKeyedStoreCreate(ULONG_PTR BugCheckParameter2, struct _SM_PARTITION *a2, __int64 a3)
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
  KiUnstackDetachProcess((__int64)v10, 0LL);
  if ( v8 >= 0 )
  {
    v6 = SmAllocEx(24LL, 1397779827LL, -1);
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      *(_QWORD *)(v6 + 8) = a3;
      *(_WORD *)(v6 + 16) = -1;
      if ( SmpKeyedStoreEntryGet(BugCheckParameter2, (_QWORD *)(v6 + 8), 1, 0) )
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
