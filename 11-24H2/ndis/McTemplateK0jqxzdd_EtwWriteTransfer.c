/*
 * XREFs of McTemplateK0jqxzdd_EtwWriteTransfer @ 0x14006D180
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x140172FB0 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzdd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        int a5,
        int a6,
        const wchar_t *a7,
        char a8,
        char a9)
{
  const wchar_t *v9; // rcx
  __int64 v10; // rax
  int v12; // eax
  _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-88h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]
  int *v17; // [rsp+50h] [rbp-68h]
  __int64 v18; // [rsp+58h] [rbp-60h]
  int *v19; // [rsp+60h] [rbp-58h]
  __int64 v20; // [rsp+68h] [rbp-50h]
  const wchar_t *v21; // [rsp+70h] [rbp-48h]
  int v22; // [rsp+78h] [rbp-40h]
  int v23; // [rsp+7Ch] [rbp-3Ch]
  char *v24; // [rsp+80h] [rbp-38h]
  __int64 v25; // [rsp+88h] [rbp-30h]
  char *v26; // [rsp+90h] [rbp-28h]
  __int64 v27; // [rsp+98h] [rbp-20h]

  v9 = a7;
  v15 = a4;
  v17 = &a5;
  v19 = &a6;
  v16 = 16LL;
  v18 = 4LL;
  v20 = 8LL;
  if ( a7 )
  {
    v10 = -1LL;
    while ( a7[++v10] != 0 )
      ;
    v12 = 2 * v10 + 2;
  }
  else
  {
    v12 = 10;
  }
  v22 = v12;
  v23 = 0;
  v25 = 4LL;
  if ( !a7 )
    v9 = L"NULL";
  v24 = &a8;
  v21 = v9;
  v26 = &a9;
  v27 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, (const EVENT_DESCRIPTOR *)"h'", a3, 7u, &v14);
}
