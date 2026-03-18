/*
 * XREFs of ?CreateInjectionDevice@@YAHXZ @ 0x140218CB0
 * Callers:
 *     SynthesizeMitTouchInput @ 0x140218E34 (SynthesizeMitTouchInput.c)
 *     SynthesizeTouchInputContainer @ 0x1402191B8 (SynthesizeTouchInputContainer.c)
 * Callees:
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1401E864C (RIMIDE_InitializePointerDeviceInjection.c)
 *     ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x140218D70 (-GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall CreateInjectionDevice(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v12; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 57008);
  v2 = *(_QWORD *)(v1 + 104);
  UserSessionState = W32GetUserSessionState(v1);
  v4 = 0;
  if ( (int)RIMIDE_InitializePointerDeviceInjection(
              2,
              10,
              v2,
              3,
              1,
              v12,
              1,
              0,
              0,
              (__int64 *)(UserSessionState + 19344)) >= 0 )
  {
    v6 = W32GetUserSessionState(v5);
    v8 = W32GetUserSessionState(v7);
    v10 = W32GetUserSessionState(v9);
    return GetDeviceRects(*(void **)(v10 + 19344), (struct tagRECT *)(v8 + 19352), (struct tagRECT *)(v6 + 19368));
  }
  return v4;
}
