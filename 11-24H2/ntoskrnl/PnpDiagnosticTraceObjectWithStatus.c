/*
 * XREFs of PnpDiagnosticTraceObjectWithStatus @ 0x14049AACC
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1405A6880 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     PnpRebalance @ 0x1407331E8 (PnpRebalance.c)
 *     PiDrvDbLoadNode @ 0x140928080 (PiDrvDbLoadNode.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpInitializeBootStartDriver @ 0x140C68294 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PnpDiagnosticTraceObjectWithStatus(
        PCEVENT_DESCRIPTOR EventDescriptor,
        unsigned __int16 *a2,
        int a3)
{
  int v6; // ecx
  __int16 v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]
  int *v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]
  int v15; // [rsp+A0h] [rbp+20h] BYREF

  v15 = a3;
  if ( !PnpEtwHandle || !EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return 0;
  v6 = *a2;
  UserData.Reserved = 0;
  v11 = 0;
  v14 = 0;
  v7 = (unsigned __int16)v6 >> 1;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = *((_QWORD *)a2 + 1);
  v12 = &v15;
  v10 = v6;
  UserData.Size = 2;
  v13 = 4;
  return EtwWriteEx(PnpEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, 3u, &UserData);
}
