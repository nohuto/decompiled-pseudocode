/*
 * XREFs of McTemplateK0jqxzq_EtwWriteTransfer @ 0x1400377D0
 * Callers:
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1400372C0 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x140076E70 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140038B00 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0jqxzq_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v11; // eax
  _BYTE v13[16]; // [rsp+30h] [rbp-78h] BYREF
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
  v16 = &a5;
  v14 = a4;
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
  return McGenEventWrite_EtwWriteTransfer(&NDIS_PROVIDER_ID_Context, a2, a3, 6LL, v13);
}
