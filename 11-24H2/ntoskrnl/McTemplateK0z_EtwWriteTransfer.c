/*
 * XREFs of McTemplateK0z_EtwWriteTransfer @ 0x1404D4ED8
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14046D43C (PnpLogActionQueueEvent.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409ED604 (PnpProcessTargetDeviceEvent.c)
 *     PiUEventNotifyUserMode @ 0x1409EEFC4 (PiUEventNotifyUserMode.c)
 *     PiUpdateGuestAssignedState @ 0x140A63048 (PiUpdateGuestAssignedState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A6B488 (PnpDeleteLockedDeviceNodes.c)
 *     PiSwCloseDescendants @ 0x140A86B50 (PiSwCloseDescendants.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403305B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0z_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // eax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &v7);
}
