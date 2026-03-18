/*
 * XREFs of ValidateHbwnd @ 0x14011F5D0
 * Callers:
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1400DA038 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     NtUserConfigureActivationObject @ 0x14013A410 (NtUserConfigureActivationObject.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140184DFC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ValidateHbwndOwnedByCallingThread @ 0x1401A9390 (ValidateHbwndOwnedByCallingThread.c)
 *     NtUserGetInputContainerId @ 0x1401BAB10 (NtUserGetInputContainerId.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1401F359C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F36F0 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1402182E0 (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHbwnd(__int64 a1)
{
  __int16 v1; // edi^2
  int v2; // esi
  __int64 v3; // rcx
  __int64 UserSessionState; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  __int16 v10; // di
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  char v17; // al
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v19; // r8
  __int16 v20; // ax
  _QWORD *v21; // rax
  __int64 v22; // rax

  v1 = WORD1(a1);
  v2 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1) + 19928) + 8LL) )
    goto LABEL_4;
  UserSessionState = W32GetUserSessionState(v3);
  v6 = (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v5) + 19952) * v2);
  v7 = v6 + *(_QWORD *)(UserSessionState + 19944);
  v8 = W32GetUserSessionState(v6);
  v9 = *(_QWORD *)(v8 + 19888);
  v10 = v1 & 0x7FFF;
  v11 = (unsigned int)((v7 - *(_QWORD *)(v8 + 19944)) >> 5);
  v12 = 5 * v11;
  if ( (v1 & 0x7FFF) != *(_WORD *)(v7 + 26) && v10 != 0x7FFF && (v10 || !PsGetCurrentProcessWow64Process()) )
    goto LABEL_4;
  if ( *(_BYTE *)(v7 + 24) != 23 )
    goto LABEL_4;
  v14 = W32GetUserSessionState(v11);
  v15 = (unsigned int)((v7 - *(_QWORD *)(v14 + 19944)) >> 5);
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 19888) + 40 * v15);
  if ( !v16 )
    goto LABEL_4;
  v17 = *(_BYTE *)(v7 + 25);
  if ( (v17 & 1) != 0 )
    goto LABEL_4;
  if ( v17 >= 0 )
    return v16;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v15);
  v19 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    return v16;
  v20 = *((_WORD *)&unk_1402437BC + 12 * *(unsigned __int8 *)(v7 + 24));
  if ( (v20 & 2) != 0 )
  {
    v21 = *(_QWORD **)(v9 + 8 * v12 + 8);
  }
  else
  {
    if ( (v20 & 1) == 0 )
      return v16;
    v22 = *(_QWORD *)(v9 + 8 * v12 + 8);
    if ( !v22 )
      return v16;
    v21 = *(_QWORD **)(v22 + 464);
  }
  if ( v21 && v21 != v19 )
  {
LABEL_4:
    UserSetLastError(1400);
    return 0LL;
  }
  return v16;
}
