/*
 * XREFs of xxxShowOwnedWindows @ 0x140182F28
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     NtUserShowOwnedPopups @ 0x140247780 (NtUserShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x14026994C (xxxMinimizeHungWindow.c)
 * Callees:
 *     ?SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z @ 0x14002F994 (-SetVisible@@YA_NPEAUtagWND@@W4SetVisibleOptions@@@Z.c)
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14006F8FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 DesktopWindow; // rax
  struct tagBWL *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r12
  _QWORD *v10; // r13
  __int64 v11; // rdi
  struct tagWND *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 UserSessionState; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  struct tagWND **v20; // r14
  __int64 i; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct tagTHREADINFO *v26; // rax
  __int64 RectRgnIndirect; // rbx
  ULONG_PTR BugCheckParameter3[9]; // [rsp+20h] [rbp-48h] BYREF
  struct tagBWL *v29; // [rsp+70h] [rbp+8h]

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v6 = BuildHwndList(*(struct tagWND **)(DesktopWindow + 112), 2LL, 0LL, 1);
    v29 = v6;
    if ( v6 )
    {
      v9 = 4LL;
      v10 = (_QWORD *)((char *)v6 + 32);
      v11 = *((_QWORD *)v6 + 4);
      if ( a2 != 2 )
        v9 = 0LL;
      if ( a2 == 4 )
        v9 = 3LL;
      if ( v11 != 1 )
      {
        while ( 1 )
        {
          v12 = 0LL;
          W32GetCurrentThreadNonPaged(v8, v7);
          v8 = *(_QWORD **)(W32GetUserSessionState(v14, v13) + 19928);
          if ( (unsigned __int64)(unsigned __int16)v11 < v8[1] )
          {
            UserSessionState = W32GetUserSessionState(v8, v7);
            v19 = *(_DWORD *)(W32GetUserSessionState(v18, v17) + 19952) * (unsigned int)(unsigned __int16)v11
                + *(_QWORD *)(UserSessionState + 19944);
            v20 = (struct tagWND **)HMPkheFromPhe(v19);
            LOWORD(v11) = WORD1(v11) & 0x7FFF;
            if ( ((WORD1(v11) & 0x7FFF) == *(_WORD *)(v19 + 26)
               || (_WORD)v11 == 0x7FFF
               || !(_WORD)v11 && PsGetCurrentProcessWow64Process(v8, v7, v15))
              && (*(_BYTE *)(v19 + 25) & 1) == 0
              && *(_BYTE *)(v19 + 24) == 1 )
            {
              v12 = *v20;
            }
          }
          if ( !v12 )
            goto LABEL_19;
          v8 = *(_QWORD **)(*((_QWORD *)v12 + 17) + 8LL);
          if ( (v8[1] & 4) != 0 || v12 == (struct tagWND *)a1 )
            goto LABEL_19;
          v8 = (_QWORD *)*((_QWORD *)v12 + 15);
          if ( v8 )
          {
            for ( i = v8[5]; ; i = *(_QWORD *)(v22 + 40) )
            {
              LOBYTE(v7) = *(_BYTE *)(i + 31) & 0xC0;
              if ( !(_BYTE)v7 )
                break;
              if ( (_BYTE)v7 == 0xC0 )
                break;
              if ( v8 == (_QWORD *)a1 )
                break;
              v22 = v8[15];
              if ( !v22 )
                break;
              v8 = (_QWORD *)v8[15];
            }
          }
          if ( v9 )
          {
            if ( !v8 )
              goto LABEL_19;
            if ( v8 == (_QWORD *)a1 )
              goto LABEL_19;
            if ( a2 == 4 )
            {
              LOBYTE(v8) = *(_BYTE *)(v8[5] + 31LL);
              if ( ((unsigned __int8)v8 & 0x20) != 0 && ((unsigned __int8)v8 & 8) == 0 )
                goto LABEL_19;
            }
          }
          else if ( v8 != (_QWORD *)a1 )
          {
            goto LABEL_19;
          }
          v23 = *((_QWORD *)v12 + 5);
          v8 = (_QWORD *)v23;
          if ( a2 >= 3 )
          {
            if ( (*(_BYTE *)(v23 + 17) & 0x40) != 0 )
            {
LABEL_41:
              if ( a3 )
              {
                RectRgnIndirect = GreCreateRectRgnIndirect(v23 + 88, v7, v15);
                GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
                GreDeleteObject(RectRgnIndirect);
                SetOrClrWF(1, v12, 0x140u, 1);
                SetVisible((__int64)v12, 0);
              }
              else
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v12);
                xxxSendMessage(v12, 0x18u);
                v26 = PtiCurrent(v25, v24);
                Win32HM_UnlockFromThread<0>((ULONG_PTR)v26, BugCheckParameter3);
              }
            }
          }
          else if ( (*(_BYTE *)(v23 + 31) & 0x10) != 0 )
          {
            goto LABEL_41;
          }
LABEL_19:
          v11 = *++v10;
          if ( *v10 == 1LL )
          {
            v6 = v29;
            break;
          }
        }
      }
      FreeHwndList(v6, v7);
    }
  }
}
