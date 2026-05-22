/*
 * XREFs of ?MPCHandProcessor_UseGazeForTargetingChange_@ISMTracing@@QEAAXPEBULegacyInputInfo@@_N@Z @ 0x1800C24A8
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3000 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHandProcessor_UseGazeForTargetingChange_(
        ISMTracing *this,
        const struct LegacyInputInfo *a2,
        char a3)
{
  const struct _tlgProvider_t *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  char v9; // [rsp+30h] [rbp-49h] BYREF
  char v10; // [rsp+31h] [rbp-48h] BYREF
  char v11; // [rsp+32h] [rbp-47h] BYREF
  char v12; // [rsp+33h] [rbp-46h] BYREF
  int v13; // [rsp+34h] [rbp-45h] BYREF
  int v14; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-39h] BYREF
  int *v16; // [rsp+60h] [rbp-19h]
  __int64 v17; // [rsp+68h] [rbp-11h]
  int *v18; // [rsp+70h] [rbp-9h]
  __int64 v19; // [rsp+78h] [rbp-1h]
  char *v20; // [rsp+80h] [rbp+7h]
  __int64 v21; // [rsp+88h] [rbp+Fh]
  char *v22; // [rsp+90h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+1Fh]
  char *v24; // [rsp+A0h] [rbp+27h]
  __int64 v25; // [rsp+A8h] [rbp+2Fh]
  char *v26; // [rsp+B0h] [rbp+37h]
  __int64 v27; // [rsp+B8h] [rbp+3Fh]

  v5 = ISMTracing::Provider();
  if ( *(_DWORD *)v5 > 4u && tlgKeywordOn((__int64)v5, 1LL) )
  {
    v9 = *((_BYTE *)a2 + 997);
    v10 = *((_BYTE *)a2 + 996);
    v11 = *((_BYTE *)a2 + 1204);
    v13 = *((_DWORD *)a2 + 265);
    v14 = *((_DWORD *)a2 + 20);
    v26 = &v9;
    v24 = &v10;
    v22 = &v11;
    v20 = &v12;
    v18 = &v13;
    v16 = &v14;
    v27 = v6;
    v25 = v6;
    v23 = v6;
    v21 = v6;
    v19 = v8;
    v17 = v8;
    v12 = a3;
    tlgWriteTransfer_EventWriteTransfer(v7, byte_180207A31, 0LL, 0LL, 8u, &v15);
  }
}
