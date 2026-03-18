/*
 * XREFs of PnpHandleProcessWalkWorker @ 0x1408EFCA0
 * Callers:
 *     ExEnumHandleTable @ 0x1408EF990 (ExEnumHandleTable.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140372F00 (IoGetBaseFileSystemDeviceObject.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PnpHandleProcessWalkWorker(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 HandlePointer; // rax
  char v9; // bl
  struct _DEVICE_OBJECT *v11; // rbp
  unsigned __int64 v12; // rsi
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+20h] [rbp-28h]

  HandlePointer = ExGetHandlePointer(a2);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] == IoFileObjectType
    && (v11 = *(struct _DEVICE_OBJECT **)a4,
        v12 = HandlePointer + 48,
        IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)(HandlePointer + 48)) == v11) )
  {
    v14 = *(_QWORD *)(a4 + 24);
    v9 = guard_dispatch_icall_no_overrides(v11, *(_QWORD *)(a4 + 8), v12, a3);
  }
  else
  {
    v9 = 0;
  }
  _InterlockedIncrement64(a2);
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock(a1 + 48, 0LL);
  return v9;
}
