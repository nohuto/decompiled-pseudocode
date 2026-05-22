/*
 * XREFs of ?MPCHolographicInputManager_RequestForegroundChange_@ISMTracing@@QEAAX_K0KK_N@Z @ 0x1800BCF0C
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800BD4BC (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_RequestForegroundChange_(
        ISMTracing *this,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        bool a6)
{
  const struct _tlgProvider_t *v9; // rax
  int v10; // edx
  int v11; // r8d
  __int64 v12; // r10
  bool v13; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-55h] BYREF
  int v15; // [rsp+40h] [rbp-51h] BYREF
  __int64 v16; // [rsp+48h] [rbp-49h] BYREF
  __int64 v17; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+58h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+78h] [rbp-19h]
  int v20; // [rsp+80h] [rbp-11h]
  int v21; // [rsp+84h] [rbp-Dh]
  __int64 *v22; // [rsp+88h] [rbp-9h]
  int v23; // [rsp+90h] [rbp-1h]
  int v24; // [rsp+94h] [rbp+3h]
  int *v25; // [rsp+98h] [rbp+7h]
  int v26; // [rsp+A0h] [rbp+Fh]
  int v27; // [rsp+A4h] [rbp+13h]
  unsigned int *v28; // [rsp+A8h] [rbp+17h]
  int v29; // [rsp+B0h] [rbp+1Fh]
  int v30; // [rsp+B4h] [rbp+23h]
  bool *v31; // [rsp+B8h] [rbp+27h]
  int v32; // [rsp+C0h] [rbp+2Fh]
  int v33; // [rsp+C4h] [rbp+33h]

  if ( ISMTracing::IsEnabled() )
  {
    v9 = ISMTracing::Provider();
    if ( *(_DWORD *)v9 > 4u && tlgKeywordOn((__int64)v9, 1LL) )
    {
      v33 = 0;
      v30 = 0;
      v27 = 0;
      v24 = 0;
      v21 = 0;
      v14 = a5;
      v31 = &v13;
      v28 = &v14;
      v25 = &v15;
      v22 = &v16;
      v13 = a6;
      v19 = &v17;
      v32 = v10;
      v29 = v11;
      v26 = v11;
      v23 = v10 + 7;
      v20 = v10 + 7;
      v15 = a4;
      v16 = a3;
      v17 = a2;
      tlgWriteTransfer_EventWriteTransfer(v12, byte_18020702C, 0LL, 0LL, 7u, &v18);
    }
  }
}
