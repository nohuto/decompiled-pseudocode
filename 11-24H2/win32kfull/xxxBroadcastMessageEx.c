/*
 * XREFs of xxxBroadcastMessageEx @ 0x1401177BC
 * Callers:
 *     xxxBroadcastDisplaySettingsChange @ 0x140116AE0 (xxxBroadcastDisplaySettingsChange.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140116FFC (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     xxxBroadcastMessage @ 0x140117780 (xxxBroadcastMessage.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140026B70 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401162C8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_sqd @ 0x140116BC4 (WPP_RECORDER_AND_TRACE_SF_sqd.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x140116FFC (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x140118950 (_PostTransformableMessageIL.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z @ 0x140119210 (-TraceLoggingBroadcastMessage@@YAXPEBUtagWND@@I_KI@Z.c)
 *     xxxSendNotifyMessage @ 0x140119930 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x140119C04 (xxxSendMessageCallback.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z @ 0x1402B153C (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        struct tagWND **a1,
        __int64 a2,
        unsigned __int64 a3,
        ULONG_PTR *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  unsigned __int64 v9; // r12
  unsigned int v10; // r15d
  struct tagWND **v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 i; // rdi
  __int64 UserSessionState; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  ULONG_PTR *v23; // r14
  ULONG_PTR v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  unsigned __int64 v28; // rax
  ULONG_PTR *CurrentThreadNonPaged; // rax
  ULONG_PTR v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rbx
  _WORD *v34; // rcx
  unsigned __int16 v35; // ax
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v37; // r9
  bool v38; // al
  char v39; // r12
  char v41; // al
  char v42; // r12
  unsigned __int64 v43; // r9
  __int64 v44; // rdx
  unsigned __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rax
  char v48; // al
  char v49; // r12
  unsigned __int8 v50; // al
  struct tagTHREADINFO *v51; // rdi
  char v52; // bl
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rax
  int v56; // edx
  const char *v57; // rcx
  int v58; // r8d
  __int64 v59; // rcx
  __int64 v60; // rcx
  unsigned __int8 v61; // al
  struct tagTHREADINFO *v62; // rdi
  char v63; // bl
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  int v67; // edx
  int v68; // r8d
  unsigned __int8 ThreadId; // al
  struct tagTHREADINFO *v70; // rdi
  char v71; // bl
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  int v76; // r8d
  int v77; // [rsp+20h] [rbp-C9h]
  int v78; // [rsp+28h] [rbp-C1h]
  __int64 v79; // [rsp+60h] [rbp-89h]
  unsigned __int64 v80; // [rsp+68h] [rbp-81h]
  __int64 *v81; // [rsp+70h] [rbp-79h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+78h] [rbp-71h] BYREF
  __int64 v83; // [rsp+88h] [rbp-61h]
  struct tagTHREADINFO *v84; // [rsp+90h] [rbp-59h]
  struct tagBWL *v85; // [rsp+98h] [rbp-51h]
  ULONG_PTR v86[2]; // [rsp+A0h] [rbp-49h] BYREF
  __m128i v87; // [rsp+B0h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter3[12]; // [rsp+C0h] [rbp-29h] BYREF
  bool v89; // [rsp+138h] [rbp+4Fh]
  char v90; // [rsp+138h] [rbp+4Fh]
  char v91; // [rsp+138h] [rbp+4Fh]

  v9 = a3;
  v10 = a2;
  v11 = a1;
  v84 = PtiCurrent((__int64)a1, a2);
  if ( v10 - 1024 > 0xBBFF )
  {
    v12 = a7;
    if ( !a7 && (v10 == 21 || v10 == 26 || v10 == 29 || v10 == 295 || v10 == 794 || v10 - 804 <= 1) )
    {
      v12 = 1;
      a7 = 1;
    }
    if ( v11 )
    {
LABEL_4:
      v85 = BuildHwndList(v11[14], 2LL, 0LL, 1);
      if ( v85 )
      {
        TraceLoggingBroadcastMessage((const struct tagWND *)v11, v10, v9, a5);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        v79 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v16 = -*(_QWORD *)CurrentProcessWin32Process;
          v15 = CurrentProcessWin32Process & -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          v79 = v15;
        }
        v81 = (__int64 *)((char *)v85 + 32);
        for ( i = *((_QWORD *)v85 + 4); ; i = *v81 )
        {
          if ( i == 1 )
          {
            FreeHwndList(v85, v15);
            return 1LL;
          }
          W32GetCurrentThreadNonPaged(v16, v15);
          v16 = *(_QWORD *)(W32GetUserSessionState(v32, v31) + 19928);
          if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(v16 + 8) )
          {
            UserSessionState = W32GetUserSessionState(v16, v15);
            v21 = *(_DWORD *)(W32GetUserSessionState(v20, v19) + 19952) * (unsigned int)(unsigned __int16)i
                + *(_QWORD *)(UserSessionState + 19944);
            v23 = (ULONG_PTR *)HMPkheFromPhe(v21);
            LOWORD(i) = WORD1(i) & 0x7FFF;
            if ( ((WORD1(i) & 0x7FFF) == *(_WORD *)(v21 + 26)
               || (_WORD)i == 0x7FFF
               || !(_WORD)i && PsGetCurrentProcessWow64Process(v16, v15, v22))
              && (*(_BYTE *)(v21 + 25) & 1) == 0
              && *(_BYTE *)(v21 + 24) == 1 )
            {
              v24 = *v23;
              if ( v24 )
              {
                v16 = *(_WORD *)(*(_QWORD *)(v24 + 40) + 42LL) & 0x2FFF;
                if ( (_DWORD)v16 != 668 )
                {
                  v15 = *(unsigned __int16 *)(W32GetUserSessionState(v16, v15) + 41394);
                  v16 = *(_QWORD *)(*(_QWORD *)(v24 + 136) + 8LL);
                  if ( (_WORD)v15 != *(_WORD *)v16 )
                  {
                    if ( v10 - 784 > 1
                      || (*(_BYTE *)(*(_QWORD *)(v24 + 40) + 31LL) & 0x10) != 0
                      || (v16 = *(_QWORD *)(v24 + 16),
                          (_InterlockedCompareExchange((volatile signed __int32 *)(v16 + 528), 0, 0) & 0x800) != 0) )
                    {
                      if ( a8 == 1 )
                      {
                        if ( *(_DWORD *)(*(_QWORD *)(v24 + 40) + 236LL) != 1 )
                          goto LABEL_30;
                      }
                      else if ( a8 == 2 )
                      {
                        v47 = *(_QWORD *)(v24 + 40);
                        if ( *(_DWORD *)(v47 + 236) == 1 && (*(_BYTE *)(v47 + 232) & 0x40) == 0 )
                          goto LABEL_30;
                      }
                      if ( (*(_DWORD *)(v24 + 380) & 0x10) == 0
                        || (v10 != 126 || a4 != (ULONG_PTR *)1) && (v10 != 26 || v9 != 47) )
                      {
                        BugCheckParameter3[1] = v24;
                        BugCheckParameter3[0] = *((_QWORD *)v84 + 57);
                        *((_QWORD *)v84 + 57) = BugCheckParameter3;
                        HMLockObject(v24);
                        switch ( a5 )
                        {
                          case 0u:
                            xxxSendTransformableMessageTimeout(
                              (struct tagTHREADINFO **)v24,
                              v10,
                              v9,
                              (struct tagDRAWITEMSTRUCT *)a4,
                              0,
                              0,
                              0LL,
                              a7,
                              1);
                            goto LABEL_27;
                          case 1u:
                            v27 = a7;
                            break;
                          case 2u:
                            if ( !*(_QWORD *)(v24 + 120) )
                              PostTransformableMessageIL((struct tagWND *)v24, v10, v9, (__int64)a4, a7);
                            goto LABEL_27;
                          case 3u:
                            xxxSendMessageCallback(
                              (struct tagWND *)v24,
                              v10,
                              *(_QWORD *)a6,
                              *((_QWORD *)a6 + 1),
                              *((_DWORD *)a6 + 4),
                              a7,
                              1);
                            goto LABEL_27;
                          case 4u:
LABEL_26:
                            v27 = a7;
                            v28 = xxxSendTransformableMessageTimeout(
                                    (struct tagTHREADINFO **)v24,
                                    v10,
                                    v9,
                                    (struct tagDRAWITEMSTRUCT *)a4,
                                    *(_DWORD *)a6,
                                    *((_DWORD *)a6 + 1),
                                    *((unsigned __int64 **)a6 + 1),
                                    a7,
                                    1);
                            v26 = 0LL;
                            if ( v28 || a5 != 6 )
                              goto LABEL_27;
                            break;
                          case 5u:
                            v59 = *(_QWORD *)(v24 + 16);
                            if ( *(_QWORD *)(v59 + 464) == v79
                              && (_InterlockedCompareExchange((volatile signed __int32 *)(v59 + 528), 0, 0) & 8) == 0 )
                            {
                              xxxSendTransformableMessageTimeout(
                                (struct tagTHREADINFO **)v24,
                                v10,
                                v9,
                                (struct tagDRAWITEMSTRUCT *)a4,
                                0,
                                0,
                                0LL,
                                1,
                                1);
                              goto LABEL_27;
                            }
                            v27 = a7;
LABEL_125:
                            v43 = (unsigned __int64)a4;
                            v45 = v9;
                            v44 = v10;
                            goto LABEL_78;
                          case 6u:
                            goto LABEL_26;
                          default:
LABEL_27:
                            CurrentThreadNonPaged = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v26, v25);
                            if ( CurrentThreadNonPaged )
                              v30 = *CurrentThreadNonPaged;
                            else
                              v30 = 0LL;
                            Win32HM_UnlockFromThread<0>(v30, BugCheckParameter3);
                            goto LABEL_30;
                        }
                        v33 = 0LL;
                        if ( v10 == 26 || v10 == 27 )
                        {
                          if ( a4 )
                          {
                            v34 = (_WORD *)a4[1];
                            if ( *v34 )
                            {
                              v35 = UserAddAtomEx(v34, 0LL, 2LL);
                              v33 = v35;
                              if ( !v35 )
                                goto LABEL_27;
                            }
                            else
                            {
                              v33 = -1LL;
                            }
                          }
                          if ( !(unsigned int)PostEventMessageEx(
                                                *(struct tagTHREADINFO **)(v24 + 16),
                                                *(struct tagQ **)(*(_QWORD *)(v24 + 16) + 472LL),
                                                9u,
                                                (struct tagWND *)v24,
                                                v10,
                                                v9,
                                                v33,
                                                0LL)
                            && (unsigned __int64)(v33 + 1) > 1 )
                          {
                            UserDeleteAtom((unsigned __int16)v33);
                          }
                          goto LABEL_27;
                        }
                        if ( v10 != 126 )
                          goto LABEL_125;
                        GetDispInfo(0LL, v25);
                        WindowCompositedDpiContext = GetWindowCompositedDpiContext((const struct tagWND *)v24);
                        GetMonitorRectForDpi(&v87, v37, (WindowCompositedDpiContext >> 8) & 0x1FF);
                        v80 = (unsigned __int16)(v87.m128i_i16[4] - v87.m128i_i16[0]) | (unsigned __int64)((v87.m128i_i32[3] << 16) - (v87.m128i_i32[1] << 16));
                        if ( a4 )
                        {
                          v38 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) != 0
                             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
                          v89 = v38;
                          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                            || (v39 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                          {
                            v39 = 0;
                          }
                          if ( v38 || v39 )
                          {
                            ThreadId = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v24 + 16));
                            v70 = *(struct tagTHREADINFO **)v24;
                            v71 = ThreadId;
                            v74 = W32GetUserSessionState(v73, v72);
                            LOBYTE(v75) = v89;
                            LOBYTE(v76) = v39;
                            WPP_RECORDER_AND_TRACE_SF_qd(
                              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                              v75,
                              v76,
                              *(_QWORD *)(v74 + 69416),
                              5,
                              7,
                              15,
                              (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                              (char)v70,
                              v71);
                          }
                          PostEventMessageEx(
                            *(struct tagTHREADINFO **)(v24 + 16),
                            *(struct tagQ **)(*(_QWORD *)(v24 + 16) + 472LL),
                            9u,
                            (struct tagWND *)v24,
                            0x7Eu,
                            a3,
                            v80,
                            0LL);
                          goto LABEL_27;
                        }
                        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                          || (v41 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                        {
                          v41 = 0;
                        }
                        v90 = v41;
                        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                          || (v42 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                        {
                          v42 = 0;
                        }
                        if ( v41 || v42 )
                        {
                          v61 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v24 + 16));
                          v62 = *(struct tagTHREADINFO **)v24;
                          v63 = v61;
                          v66 = W32GetUserSessionState(v65, v64);
                          LOBYTE(v67) = v90;
                          LOBYTE(v68) = v42;
                          WPP_RECORDER_AND_TRACE_SF_qd(
                            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                            v67,
                            v68,
                            *(_QWORD *)(v66 + 69416),
                            5,
                            7,
                            14,
                            (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                            (char)v62,
                            v63);
                          v27 = a7;
                        }
                        v43 = v80;
                        v44 = 126LL;
                        v45 = a3;
LABEL_78:
                        xxxSendNotifyMessage(v24, v44, v45, v43, v27);
                        goto LABEL_27;
                      }
                      v16 = *(_QWORD *)&WPP_GLOBAL_Control;
                      if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
                        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x40) == 0
                        || (v48 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
                      {
                        v48 = 0;
                      }
                      v15 = (__int64)&WPP_RECORDER_INITIALIZED;
                      v91 = v48;
                      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
                        || (v49 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
                      {
                        v49 = 0;
                      }
                      if ( v48 || v49 )
                      {
                        v50 = (unsigned __int8)PsGetThreadId(**(PETHREAD **)(v24 + 16));
                        v51 = *(struct tagTHREADINFO **)v24;
                        v52 = v50;
                        v55 = W32GetUserSessionState(v54, v53);
                        LOBYTE(v56) = v91;
                        v57 = "WM_DISPLAYCHANGE";
                        LOBYTE(v58) = v49;
                        if ( v10 != 126 )
                          v57 = "WM_SETTINGCHANGE (for SPI_SETWORKAREA)";
                        WPP_RECORDER_AND_TRACE_SF_sqd(
                          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                          v56,
                          v58,
                          *(_QWORD *)(v55 + 69416),
                          v77,
                          v78,
                          13,
                          (__int64)&WPP_45eb214c783f3d45e2f167060f0951f6_Traceguids,
                          (__int64)v57,
                          (char)v51,
                          v52);
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_30:
          v9 = a3;
          ++v81;
        }
      }
      return 0LL;
    }
    *(_OWORD *)v86 = 0LL;
    if ( v10 == 26 || v10 == 27 )
    {
      BugCheckParameter3[4] = 0LL;
      *(_OWORD *)BugCheckParameter2 = 0LL;
      v83 = -1LL;
      if ( a4 )
      {
        if ( !(unsigned int)CaptureBroadcastString(
                              (struct _LARGE_UNICODE_STRING *)v86,
                              (struct _LARGE_STRING *volatile)a4) )
          return 0LL;
        Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
          BugCheckParameter2,
          v86[1],
          (__int64)Win32FreePool);
        a4 = v86;
      }
      xxxSystemBroadcastMessage(v10, v9, (__int64)a4, a5, a6, v12, a8);
      if ( v83 != -1 )
        PopAndFreeW32ThreadLock((__int64)BugCheckParameter2, v46);
    }
    else
    {
      if ( v10 == 30 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)v84 + 132, 0, 0) & 4) == 0 )
          return 0LL;
        goto LABEL_86;
      }
      if ( v10 == 42 )
      {
        v60 = 42LL;
      }
      else
      {
        if ( v10 - 712 >= 2 )
        {
LABEL_86:
          v11 = *(struct tagWND ***)(*(_QWORD *)(*((_QWORD *)v84 + 62) + 8LL) + 24LL);
          if ( v11 )
            goto LABEL_4;
          UserSetLastError(5);
          return 0LL;
        }
        v60 = v10;
      }
      xxxSystemBroadcastMessage(v60, v9, (__int64)a4, a5, a6, v12, a8);
    }
    return 1LL;
  }
  UserSetLastError(87);
  return 1LL;
}
