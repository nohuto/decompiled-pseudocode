/*
 * XREFs of DpiIndirectCbDisableRenderD3Requests @ 0x140248780
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z @ 0x1400635A0 (--0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z.c)
 */

__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3, __int64 a4)
{
  _DWORD *DeviceExtension; // rax
  _OWORD *v8; // rax
  _QWORD *v9; // rdi
  struct _IO_WORKITEM *WorkItem; // rax
  _QWORD *v11; // rax
  bool v12; // zf
  _BYTE v14[8]; // [rsp+20h] [rbp-18h] BYREF
  PRKMUTEX Mutex; // [rsp+28h] [rbp-10h]

  if ( !DeviceObject )
    return 3221225485LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension
    || DeviceExtension[4] != 1953656900
    || DeviceExtension[5] != 2
    || !*((_BYTE *)DeviceExtension + 1158) )
  {
    return 3221225485LL;
  }
  v8 = (_OWORD *)operator new(0x20uLL, 0x74727044u, 256LL, a4);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(6LL, -1073741670LL);
    WdLogGlobalForLineNumber = 1031;
    return 3221225626LL;
  }
  *v8 = 0LL;
  v8[1] = 0LL;
  AUTO_MUTEX_LOCK::AUTO_MUTEX_LOCK((AUTO_MUTEX_LOCK *)v14, &stru_14015E318);
  if ( !byte_14015E310 )
  {
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( !WorkItem )
    {
      WdLogSingleEntry1(6LL, -1073741670LL);
      WdLogGlobalForLineNumber = 1045;
      if ( v14[0] )
        KeReleaseMutex(Mutex, 0);
      ExFreePoolWithTag(v9, 0);
      return 3221225626LL;
    }
    byte_14015E310 = 1;
    IoQueueWorkItemEx(
      WorkItem,
      (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
      DelayedWorkQueue,
      0LL);
  }
  *((_DWORD *)v9 + 4) = a2;
  *(_QWORD *)((char *)v9 + 20) = a3;
  v11 = (_QWORD *)qword_14015E358;
  if ( *(void ***)qword_14015E358 != &qword_14015E350 )
    __fastfail(3u);
  v12 = v14[0] == 0;
  *v9 = &qword_14015E350;
  v9[1] = v11;
  *v11 = v9;
  qword_14015E358 = (__int64)v9;
  if ( !v12 )
    KeReleaseMutex(Mutex, 0);
  return 0LL;
}
