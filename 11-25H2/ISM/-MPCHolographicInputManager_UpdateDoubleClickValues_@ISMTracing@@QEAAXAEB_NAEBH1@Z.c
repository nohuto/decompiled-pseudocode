/*
 * XREFs of ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x1800BD0E4
 * Callers:
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x18009943C (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
        ISMTracing *this,
        const bool *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  char v11; // [rsp+38h] [rbp-19h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  int v13; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-9h] BYREF
  char *v15; // [rsp+68h] [rbp+17h]
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  int *v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  int *v19; // [rsp+88h] [rbp+37h]
  __int64 v20; // [rsp+90h] [rbp+3Fh]

  v7 = ISMTracing::Provider();
  if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 1LL) )
  {
    v12 = *a4;
    v13 = *a3;
    v11 = *a2;
    v19 = &v12;
    v17 = &v13;
    v15 = &v11;
    v20 = v10;
    v18 = v10;
    v16 = v8;
    tlgWriteTransfer_EventWriteTransfer(v9, byte_180206EDB, 0LL, 0LL, 5u, &v14);
  }
}
