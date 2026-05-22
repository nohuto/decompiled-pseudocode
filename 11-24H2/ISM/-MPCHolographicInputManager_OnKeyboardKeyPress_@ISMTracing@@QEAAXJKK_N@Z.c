/*
 * XREFs of ?MPCHolographicInputManager_OnKeyboardKeyPress_@ISMTracing@@QEAAXJKK_N@Z @ 0x1800BAC38
 * Callers:
 *     ?OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z @ 0x1800BB03C (-OnKeyboardKeyPress@MPCHolographicInputManager@@QEAAXK@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180011720 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_OnKeyboardKeyPress_(
        ISMTracing *this,
        int a2,
        int a3,
        int a4,
        bool a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r10
  bool v11; // [rsp+38h] [rbp-31h] BYREF
  int v12; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v13; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+44h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-21h] BYREF
  int *v16; // [rsp+68h] [rbp-1h]
  __int64 v17; // [rsp+70h] [rbp+7h]
  int *v18; // [rsp+78h] [rbp+Fh]
  __int64 v19; // [rsp+80h] [rbp+17h]
  int *v20; // [rsp+88h] [rbp+1Fh]
  __int64 v21; // [rsp+90h] [rbp+27h]
  bool *v22; // [rsp+98h] [rbp+2Fh]
  __int64 v23; // [rsp+A0h] [rbp+37h]

  v8 = ISMTracing::Provider();
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
  {
    v22 = &v11;
    v11 = a5;
    v20 = &v12;
    v23 = v9;
    v18 = &v13;
    v12 = a4;
    v16 = &v14;
    v13 = a3;
    v14 = a2;
    v21 = 4LL;
    v19 = 4LL;
    v17 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v10, byte_18021024F, 0LL, 0LL, 6u, &v15);
  }
}
