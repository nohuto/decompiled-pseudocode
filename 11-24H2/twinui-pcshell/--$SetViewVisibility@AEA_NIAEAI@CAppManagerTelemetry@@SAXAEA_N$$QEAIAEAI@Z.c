/*
 * XREFs of ??$SetViewVisibility@AEA_NIAEAI@CAppManagerTelemetry@@SAXAEA_N$$QEAIAEAI@Z @ 0x180306E9C
 * Callers:
 *     ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x1803079CC (-_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032AC4 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

char __fastcall CAppManagerTelemetry::SetViewVisibility<bool &,unsigned int,unsigned int &>(char *a1, int *a2, int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r10
  int v8; // ecx
  char v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  int v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  char *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  int *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v6 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    LOBYTE(v6) = tlgKeywordOn((__int64)v6, 0x200000000000LL);
    if ( (_BYTE)v6 )
    {
      v8 = *a3;
      v12 = *a2;
      v10 = *a1;
      v18 = &v11;
      v16 = &v12;
      v14 = &v10;
      v11 = v8;
      v19 = 4LL;
      v17 = 4LL;
      v15 = 1LL;
      LOBYTE(v6) = tlgWriteTransfer_EventWriteTransfer(v7, byte_1807E39A5, 0LL, 0LL, 5u, &v13);
    }
  }
  return (char)v6;
}
