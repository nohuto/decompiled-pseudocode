/*
 * XREFs of IoCreateController @ 0x140711950
 * Callers:
 *     DifIoCreateControllerWrapper @ 0x1406250A0 (DifIoCreateControllerWrapper.c)
 * Callees:
 *     KeInitializeDeviceQueue @ 0x1404A8610 (KeInitializeDeviceQueue.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

PCONTROLLER_OBJECT __stdcall IoCreateController(ULONG Size)
{
  struct _CONTROLLER_OBJECT *v1; // rbx
  __int64 v2; // rdi
  _QWORD v4[3]; // [rsp+50h] [rbp-30h] BYREF
  int v5; // [rsp+68h] [rbp-18h]
  int v6; // [rsp+6Ch] [rbp-14h]
  __int128 v7; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+98h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF

  v1 = 0LL;
  v2 = Size;
  v4[0] = 48LL;
  v6 = 0;
  v5 = IopCaseInsensitive != 0 ? 576 : 512;
  Object = 0LL;
  Handle = 0LL;
  v4[1] = 0LL;
  v4[2] = 0LL;
  v7 = 0LL;
  if ( (int)ObCreateObjectEx(0, IoControllerObjectType, (unsigned int)v4, 0) >= 0
    && (int)ObInsertObjectEx(Object, 0, (__int64)&Object, (__int64)&Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    memset_0(Object, 0, v2 + 72);
    *(_WORD *)Object = 2;
    *((_WORD *)Object + 1) = v2 + 72;
    *((_QWORD *)Object + 1) = (char *)Object + 72;
    KeInitializeDeviceQueue((PKDEVICE_QUEUE)((char *)Object + 16));
    return (PCONTROLLER_OBJECT)Object;
  }
  return v1;
}
