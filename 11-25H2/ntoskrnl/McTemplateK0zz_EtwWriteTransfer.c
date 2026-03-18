/*
 * XREFs of McTemplateK0zz_EtwWriteTransfer @ 0x1405A4A98
 * Callers:
 *     PiSwIrpCleanup @ 0x140724800 (PiSwIrpCleanup.c)
 *     PiSwIrpSetAttributes @ 0x140724B34 (PiSwIrpSetAttributes.c)
 *     PiSwIrpInterfacePropertySet @ 0x140835F5C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14095D5E8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x14095DFA4 (PiSwIrpInterfaceSetState.c)
 *     PiSwProcessRemove @ 0x1409A35FC (PiSwProcessRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140A66038 (PiSwIrpPropertySet.c)
 *     PiSwCloseDevice @ 0x140A8F2A4 (PiSwCloseDevice.c)
 *     PiSwIrpSetLifetime @ 0x140AC0768 (PiSwIrpSetLifetime.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1404250D4 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
