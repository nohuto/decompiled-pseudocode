/*
 * XREFs of HMValidateHandleNoRip @ 0x1C00DEAEC
 * Callers:
 *     EditionGetKeyStateUpdateParamsForRawInput @ 0x1C0012210 (EditionGetKeyStateUpdateParamsForRawInput.c)
 *     DWP_GetIcon @ 0x1C008B77C (DWP_GetIcon.c)
 *     xxxSetClassData @ 0x1C008C668 (xxxSetClassData.c)
 *     xxxCreateWindowSmIcon @ 0x1C00924C8 (xxxCreateWindowSmIcon.c)
 *     xxxSetWindowData @ 0x1C00A8300 (xxxSetWindowData.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00DE154 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxEventWndProc @ 0x1C00DE640 (xxxEventWndProc.c)
 *     xxxClientCopyImage @ 0x1C00DE700 (xxxClientCopyImage.c)
 *     xxxClientLoadImage @ 0x1C00DE800 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00E0A48 (xxxClientLoadMenu.c)
 *     xxxRealInternalGetMessage @ 0x1C01287E0 (xxxRealInternalGetMessage.c)
 *     FindQMsg @ 0x1C012B670 (FindQMsg.c)
 *     _RegisterClassEx @ 0x1C013A408 (_RegisterClassEx.c)
 *     DestroyWindowSmIcon @ 0x1C013C988 (DestroyWindowSmIcon.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01B7FA0 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01C8620 (-DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01C8F9C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 *     NtUserCsDdeUninitialize @ 0x1C01CD8F0 (NtUserCsDdeUninitialize.c)
 *     NtUserUpdateInstance @ 0x1C01DED10 (NtUserUpdateInstance.c)
 *     _GetWindowIcon @ 0x1C01E2F5C (_GetWindowIcon.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01FBAAC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FC5DC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FC768 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01FC900 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     xxxMNKeyDown @ 0x1C0217788 (xxxMNKeyDown.c)
 *     xxxSetClassIcon @ 0x1C021FDA0 (xxxSetClassIcon.c)
 *     xxxRealDrawMenuItem @ 0x1C0236080 (xxxRealDrawMenuItem.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall HMValidateHandleNoRip(__int64 a1, char a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // r8
  __int16 v9; // ax
  __int64 v10; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v13; // rdx
  __int16 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rax

  v3 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v5 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)a1;
    v7 = (__int64 *)HMPkheFromPhe(v5);
    v9 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v5 + 26)
      || v9 == 0x7FFF
      || !v9 && PsGetCurrentProcessWow64Process(0x7FFFLL, v6, v8) )
    {
      if ( (*(_BYTE *)(v5 + 25) & 1) == 0 && *(_BYTE *)(v5 + 24) == a2 )
        v3 = *v7;
      if ( (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 488) & 0x20000000) != 0 )
      {
        if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
          v3 = 0LL;
      }
      else
      {
        v10 = -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
        v3 &= v10;
      }
      if ( *(char *)(v5 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v10);
        v13 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v14 = gahti[12 * *(unsigned __int8 *)(v5 + 24) + 6];
            if ( (v14 & 2) != 0 )
            {
              v15 = (_QWORD *)v7[1];
            }
            else
            {
              if ( (v14 & 1) == 0 )
                return v3;
              v16 = v7[1];
              if ( !v16 )
                return v3;
              v15 = *(_QWORD **)(v16 + 424);
            }
            if ( v15 && v15 != v13 )
              return 0LL;
          }
        }
      }
    }
  }
  return v3;
}
