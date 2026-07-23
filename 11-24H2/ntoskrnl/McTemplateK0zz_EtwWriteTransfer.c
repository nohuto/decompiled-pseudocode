/*
 * XREFs of McTemplateK0zz_EtwWriteTransfer @ 0x1405A5298
 * Callers:
 *     PiSwIrpCleanup @ 0x14072E8F0 (PiSwIrpCleanup.c)
 *     PiSwIrpSetAttributes @ 0x14072EC24 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x14072ED60 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceSetState @ 0x1408AF56C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x1408AF734 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408AFE78 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1408B69EC (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 *     PiSwProcessRemove @ 0x1409F3978 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x140A90544 (PiSwCloseDevice.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1402B8E28 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zz_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4,
        const wchar_t *a5)
{
  __int64 v5; // rax
  const wchar_t *v7; // rdx
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // ecx
  bool v11; // zf
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v14; // [rsp+40h] [rbp-38h]
  int v15; // [rsp+48h] [rbp-30h]
  int v16; // [rsp+4Ch] [rbp-2Ch]
  const wchar_t *v17; // [rsp+50h] [rbp-28h]
  int v18; // [rsp+58h] [rbp-20h]
  int v19; // [rsp+5Ch] [rbp-1Ch]

  v5 = -1LL;
  v7 = a5;
  v8 = 10;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a4[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10;
  }
  v15 = v10;
  v16 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v14 = a4;
  v11 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v5;
    while ( a5[v5] );
    v8 = 2 * v5 + 2;
    v11 = a5 == 0LL;
  }
  if ( v11 )
    v7 = L"NULL";
  v18 = v8;
  v17 = v7;
  v19 = 0;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 3u, &v13);
}
