/*
 * XREFs of HMValidateHandleNoRip @ 0x14008ED8C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxCreateWindowSmIcon @ 0x14007AC48 (xxxCreateWindowSmIcon.c)
 *     xxxClientCopyImage @ 0x14007ACF4 (xxxClientCopyImage.c)
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     DestroyWindowSmIcon @ 0x14008DCFC (DestroyWindowSmIcon.c)
 *     FindQMsg @ 0x14008E400 (FindQMsg.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x140090378 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     _RegisterClassEx @ 0x1400B4534 (_RegisterClassEx.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140103AA8 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _GetWindowIcon @ 0x14012C2BC (_GetWindowIcon.c)
 *     xxxClientLoadImage @ 0x1401338E8 (xxxClientLoadImage.c)
 *     ?FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z @ 0x14017ACF8 (-FlushThrottledRawMouseInput@@YAXPEAUtagPROCESS_HID_TABLE@@K@Z.c)
 *     xxxClientLoadMenu @ 0x1401A9338 (xxxClientLoadMenu.c)
 *     DWP_GetIcon @ 0x1401BFAEC (DWP_GetIcon.c)
 *     NtUserCsDdeUninitialize @ 0x140217BB0 (NtUserCsDdeUninitialize.c)
 *     xxxSetClassIcon @ 0x14021E780 (xxxSetClassIcon.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140280A70 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     NtUserUpdateInstance @ 0x1402A19E0 (NtUserUpdateInstance.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B24D8 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2678 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B281C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxMNKeyDown @ 0x1402BE09C (xxxMNKeyDown.c)
 *     xxxEventWndProc @ 0x1402DBD80 (xxxEventWndProc.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, __int64 a2)
{
  char v2; // r15
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v21; // rdx
  __int16 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rax

  v2 = a2;
  v3 = 0LL;
  PtiCurrent(a1, a2);
  v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19928);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7);
    v12 = *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19952) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19944);
    v15 = (__int64 *)HMPkheFromPhe(v12);
    v16 = 0x7FFFLL;
    v17 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v12 + 26)
      || v17 == 0x7FFF
      || !v17 && PsGetCurrentProcessWow64Process(0x7FFFLL, v13, v14) )
    {
      if ( (*(_BYTE *)(v12 + 25) & 1) == 0 && *(_BYTE *)(v12 + 24) == v2 )
        v3 = *v15;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v16, v13) + 132, 0, 0) & 0x20000000) != 0 )
      {
        v3 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 3LL) != 0);
      }
      else
      {
        v18 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
        v3 &= v18;
      }
      if ( *(char *)(v12 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v18);
        v21 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v22 = gahti[12 * *(unsigned __int8 *)(v12 + 24) + 6];
            if ( (v22 & 2) != 0 )
            {
              v23 = (_QWORD *)v15[1];
            }
            else
            {
              if ( (v22 & 1) == 0 )
                return v3;
              v24 = v15[1];
              if ( !v24 )
                return v3;
              v23 = *(_QWORD **)(v24 + 464);
            }
            if ( v23 && v23 != v21 )
              return 0LL;
          }
        }
      }
    }
  }
  return v3;
}
