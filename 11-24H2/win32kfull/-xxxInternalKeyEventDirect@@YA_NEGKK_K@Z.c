/*
 * XREFs of ?xxxInternalKeyEventDirect@@YA_NEGKK_K@Z @ 0x140273C6C
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140274038 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x140274624 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140094230 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1400942AC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?InjectInput@Keyboard@InputTraceLogging@@SAXW4InjectionSource@12@@Z @ 0x140210DE4 (-InjectInput@Keyboard@InputTraceLogging@@SAXW4InjectionSource@12@@Z.c)
 *     Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline @ 0x140274D7C (Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

char __fastcall xxxInternalKeyEventDirect(__int64 a1, __int64 a2, char a3, int a4, unsigned __int64 a5)
{
  __int16 v6; // r12
  unsigned __int8 v7; // di
  struct tagTHREADINFO *v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // si
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // di
  bool v20; // r14
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  __int64 v30; // rdx
  int v31; // r15d
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // r8
  __int128 v39; // [rsp+48h] [rbp-28h] BYREF
  __int128 v40; // [rsp+58h] [rbp-18h]

  v6 = a2;
  v7 = a1;
  v8 = PtiCurrent(a1, a2);
  v39 = 0LL;
  v40 = 0LL;
  v11 = 1;
  if ( (unsigned int)Feature_InputInjectionDoInputCheck__private_IsEnabledDeviceUsageNoInline() )
    goto LABEL_21;
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 19200);
  if ( *((_QWORD *)v8 + 62) == v12 )
  {
    v13 = *(_QWORD *)(W32GetUserGdiSessionState(v12) + 40);
    if ( PsGetCurrentProcess(v14) == v13 || RtlAreAllAccessesGranted(*((_DWORD *)v8 + 234), 0x20u) )
    {
      if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1LL, v15) )
      {
        MSGLUA_GPQFOREGROUND(v17, v16);
        if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
          || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
          || (v19 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u) )
        {
          v19 = 0;
        }
        v20 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v19 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v18);
          LOBYTE(v22) = v20;
          LOBYTE(v23) = v19;
          WPP_RECORDER_AND_TRACE_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
            v23,
            v22,
            *(_QWORD *)(UserSessionState + 69416),
            2,
            20,
            30,
            (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
        }
        return 1;
      }
LABEL_21:
      InputTraceLogging::Keyboard::InjectInput();
      LOBYTE(v39) = v6;
      *((_QWORD *)&v39 + 1) = 0LL;
      if ( (a3 & 8) != 0 )
      {
        v31 = a3 & 1;
        LOBYTE(v30) = v31 != 0 ? 0xE0 : 0;
        v7 = VKFromVSC(&v39, v30);
        v32 = v7;
      }
      else
      {
        switch ( v7 )
        {
          case 0x10u:
            v7 = ((v6 & 0x7F) == 54) - 96;
            break;
          case 0x11u:
            v7 = ((a3 & 1) != 0) - 94;
            break;
          case 0x12u:
            v7 = ((a3 & 1) != 0) - 92;
            break;
        }
        v32 = v7;
        LOWORD(v32) = v7 | 0x2000;
        v31 = a3 & 1;
      }
      WORD1(v39) = v32;
      v33 = 256LL;
      if ( v7 == 0xA1 )
      {
        LOWORD(v32) = v32 | 0x100;
        WORD1(v39) = v32;
      }
      if ( (a3 & 2) != 0 )
      {
        LOWORD(v32) = v32 | 0x8000;
        WORD1(v39) = v32;
      }
      if ( (a3 & 4) != 0 )
      {
        LOWORD(v39) = v6;
        LOWORD(v32) = v32 | 0x1000;
      }
      else if ( v31 )
      {
        LOWORD(v32) = v32 | 0x100;
      }
      else
      {
        if ( (unsigned __int8)(v7 - 96) > 9u && v7 != 110 )
        {
          if ( !ausNumPadCvt )
          {
LABEL_47:
            WORD1(v40) = (unsigned __int8)v6;
            WORD2(v40) = (a3 & 2) != 0;
            if ( v31 )
              WORD2(v40) = ((a3 & 2) != 0) | 2;
            LOWORD(v40) = -2;
            DWORD2(v40) = a5;
            WORD3(v40) = 0;
            v35 = *((_QWORD *)v8 + 58);
            v36 = W32GetUserSessionState(v32, v33);
            LOBYTE(v37) = 1;
            *(_QWORD *)(v36 + 18888) = v35;
            DWORD1(v39) = a4;
            xxxProcessKeyEvent(&v39, a5, v37, 0LL, 0LL, 0LL);
            return 1;
          }
          v34 = 0LL;
          v33 = ausNumPadCvt;
          while ( v7 != *(_BYTE *)v33 )
          {
            ++v34;
            v33 = (__int64)&ausNumPadCvt + 2 * v34;
            if ( !*(_WORD *)v33 )
              goto LABEL_47;
          }
        }
        LOWORD(v32) = v32 | 0x800;
      }
      WORD1(v39) = v32;
      goto LABEL_47;
    }
  }
  SetLastNtError(-1073741790);
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80000) == 0
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 2u )
  {
    v11 = 0;
  }
  v25 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v11 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v26 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v24);
    LOBYTE(v27) = v25;
    LOBYTE(v28) = v11;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v28,
      v27,
      *(_QWORD *)(v26 + 69416),
      2,
      20,
      29,
      (__int64)&WPP_e0459cb741f4390c8587a8e170778c8c_Traceguids);
  }
  return 0;
}
