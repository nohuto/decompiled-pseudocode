/*
 * XREFs of McTemplateK0jqxzd_EtwWriteTransfer @ 0x140077980
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x14015FDF0 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400242C0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0jqxzd_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        __int64 a4,
        int a5,
        int a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v11; // eax
  _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+40h] [rbp-68h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  int *v16; // [rsp+50h] [rbp-58h]
  __int64 v17; // [rsp+58h] [rbp-50h]
  int *v18; // [rsp+60h] [rbp-48h]
  __int64 v19; // [rsp+68h] [rbp-40h]
  const wchar_t *v20; // [rsp+70h] [rbp-38h]
  int v21; // [rsp+78h] [rbp-30h]
  int v22; // [rsp+7Ch] [rbp-2Ch]
  char *v23; // [rsp+80h] [rbp-28h]
  __int64 v24; // [rsp+88h] [rbp-20h]

  v8 = a7;
  v14 = a4;
  v16 = &a5;
  v18 = &a6;
  v15 = 16LL;
  v17 = 4LL;
  v19 = 8LL;
  if ( a7 )
  {
    v9 = -1LL;
    while ( a7[++v9] != 0 )
      ;
    v11 = 2 * v9 + 2;
  }
  else
  {
    v11 = 10;
  }
  v21 = v11;
  v22 = 0;
  if ( !a7 )
    v8 = L"NULL";
  v24 = 4LL;
  v20 = v8;
  v23 = &a8;
  return McGenEventWrite_EtwWriteTransfer(NDIS_PROVIDER_ID_Context, &ProtocolBindStatus, a3, 6u, &v13);
}
