/*
 * XREFs of FsRtlQueryOpen @ 0x1409C4FF4
 * Callers:
 *     IopQueryInformation @ 0x1409C4DC0 (IopQueryInformation.c)
 * Callees:
 *     FsFilterPerformCallbacks @ 0x14025D040 (FsFilterPerformCallbacks.c)
 *     FsFilterCtrlFree @ 0x14025D404 (FsFilterCtrlFree.c)
 *     FsFilterPerformCompletionCallbacks @ 0x14025D480 (FsFilterPerformCompletionCallbacks.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     IoGetAttachedDevice @ 0x1403B3B80 (IoGetAttachedDevice.c)
 *     FsFilterCtrlInit @ 0x1404215D0 (FsFilterCtrlInit.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall FsRtlQueryOpen(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v10; // r9
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // ebx
  _DWORD v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+70h] [rbp-90h]
  __int16 v23; // [rsp+8Ah] [rbp-76h]

  v17[0] = 0;
  memset_0(v18, 0, 0x238uLL);
  AttachedDevice = IoGetAttachedDevice(DeviceObject);
  result = FsFilterCtrlInit(
             (__int64)v18,
             249,
             (__int64)AttachedDevice,
             v10,
             *(_QWORD *)(*(_QWORD *)(a2 + 184) + 48LL),
             1u);
  if ( (int)result >= 0 )
  {
    v22 = a5;
    v19 = a2;
    v20 = a3;
    v21 = a4;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v13 = FsFilterPerformCallbacks((__int64)v18, 1, 1, v17);
    v16 = v13;
    if ( v23 )
      v16 = FsFilterPerformCompletionCallbacks((__int64)v18, v13, v14, v15);
    KeLeaveCriticalRegion();
    FsFilterCtrlFree((__int64)v18);
    if ( v16 >= 0 && (v17[0] & 2) == 0 )
      return (unsigned int)-1073741822;
    return (unsigned int)v16;
  }
  return result;
}
