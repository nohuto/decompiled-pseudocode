/*
 * XREFs of ?RequestUIAHitTest@UIAHitTest@InputETW@@SAXII_NU_GUID@@@Z @ 0x18019FA54
 * Callers:
 *     ?RequestUIAHitTest@DWMInputRouter@@QEAA?AU_GUID@@II@Z @ 0x18019F8EC (-RequestUIAHitTest@DWMInputRouter@@QEAA-AU_GUID@@II@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017640 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x1800316D8 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall InputETW::UIAHitTest::RequestUIAHitTest(int a1, int a2, unsigned __int8 a3, struct _GUID *a4)
{
  int v5; // edi
  const struct _tlgProvider_t *v8; // rax
  int v9; // edx
  __int64 v10; // r10
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-19h] BYREF
  int *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  int *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  int *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  struct _GUID *v24; // [rsp+98h] [rbp+37h]
  int v25; // [rsp+A0h] [rbp+3Fh]
  int v26; // [rsp+A4h] [rbp+43h]

  v5 = a3;
  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v8 = InputETW::Provider();
    if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      v26 = 0;
      v23 = 0;
      v20 = 0;
      v17 = 0;
      v21 = &v11;
      v22 = v9 + 3;
      v18 = &v12;
      v15 = &v13;
      v19 = v9 + 3;
      v16 = v9 + 3;
      v11 = v5;
      v12 = a2;
      v13 = a1;
      v24 = a4;
      v25 = 16;
      tlgWriteTransfer_EventWriteTransfer(v10, byte_18022660B, 0LL, 0LL, 6u, &v14);
    }
  }
}
