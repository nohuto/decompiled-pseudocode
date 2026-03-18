/*
 * XREFs of EditionKeyEventLLHook @ 0x1402487E0
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x140080F00 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140094E38 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     PtiKbdFromQ @ 0x1401534FC (PtiKbdFromQ.c)
 *     HasHidTable @ 0x140172640 (HasHidTable.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsSAS@@YA_NEPEAI@Z @ 0x1401AA118 (-IsSAS@@YA_NEPEAI@Z.c)
 *     ?IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z @ 0x1401C7EFC (-IsUninterceptable@@YAPEAUtagHOTKEY@@E@Z.c)
 *     ?HandleLowLevelHooks@Keyboard@InputTraceLogging@@SAXK_K@Z @ 0x1401D59A0 (-HandleLowLevelHooks@Keyboard@InputTraceLogging@@SAXK_K@Z.c)
 *     ?CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z @ 0x1401DE0F4 (-CallLowLevelHooks@Keyboard@InputTraceLogging@@SAXK@Z.c)
 *     ?ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z @ 0x14028880C (-ResetWindowKeyProcessing@@YAXPEAUtagDESKTOP@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall EditionKeyEventLLHook(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int8 a5,
        unsigned __int16 a6,
        int a7,
        unsigned int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 v13; // rbx
  unsigned int v15; // r14d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 Valid; // r13
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // xmm0_8
  unsigned __int16 v30; // ax
  int v31; // edx
  int v32; // eax
  __int64 v33; // rax
  int v34; // esi
  __int64 v35; // rdi
  char v36; // r12
  __int64 v37; // rbx
  int v38; // r8d
  __int64 v39; // rcx
  int v40; // edi
  __int64 v41; // rdx
  __int64 v42; // rcx
  bool v43; // bl
  __int64 UserSessionState; // rax
  int v45; // r8d
  int v46; // edx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // xmm0_8
  __int64 v51; // rdx
  bool v52; // bl
  __int64 v53; // rax
  int v54; // r8d
  int v55; // edx
  unsigned int v57[3]; // [rsp+54h] [rbp-55h] BYREF
  __int64 v58; // [rsp+60h] [rbp-49h] BYREF
  int v59; // [rsp+68h] [rbp-41h]
  __int64 v60; // [rsp+70h] [rbp-39h]
  int v61; // [rsp+78h] [rbp-31h]
  __int64 v62; // [rsp+80h] [rbp-29h]
  _DWORD v63[4]; // [rsp+88h] [rbp-21h] BYREF
  __int64 v64; // [rsp+98h] [rbp-11h]

  v13 = a12;
  v60 = a12;
  v57[0] = a4;
  v15 = 0;
  Valid = PhkFirstValid(a1, 13LL);
  if ( !Valid )
    return 0LL;
  v19 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18944);
  if ( !v19 )
    goto LABEL_9;
  v22 = PtiKbdFromQ(v19);
  v23 = v22;
  if ( !v22 )
    goto LABEL_9;
  v24 = *(_QWORD *)(Valid + 16);
  v25 = *(_QWORD *)(v24 + 464);
  if ( *(_QWORD *)(v22 + 464) != v25 )
    goto LABEL_9;
  v26 = *(_QWORD *)(W32GetUserSessionState(v24, v25) + 19200);
  if ( v26 != *(_QWORD *)(W32GetUserSessionState(v28, v27) + 63016)
    && (unsigned int)HasHidTable(v23)
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 464) + 832LL) + 100LL) & 0x10) != 0 )
  {
    return 0LL;
  }
  v13 = v60;
LABEL_9:
  v29 = *(_QWORD *)(a1 + 1544);
  v61 = a5;
  v63[0] = a5;
  v63[1] = a6;
  v30 = a2 | 0x2000;
  v58 = v29;
  if ( a3 == v57[0] )
    v30 = a2;
  v63[3] = a9;
  v31 = (a8 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x80 : 0) | HIBYTE(v30);
  v64 = a10;
  v32 = *(_DWORD *)(a1 + 1552);
  v63[2] = v31;
  v59 = v32;
  if ( !a8 || a11 )
  {
    *(_DWORD *)(a1 + 1544) = -1;
    *(_DWORD *)(a1 + 1548) = -1;
  }
  else
  {
    *(_QWORD *)(a1 + 1544) = *(_QWORD *)v13;
    *(_DWORD *)(a1 + 1552) = *(_DWORD *)(v13 + 8);
  }
  v33 = *(_QWORD *)(a1 + 1568);
  *(_QWORD *)(a1 + 1568) = v63;
  v62 = v33;
  v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(Valid + 16) + 464LL) + 56LL);
  v35 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  InputTraceLogging::Keyboard::CallLowLevelHooks(v34, v35, v20, v21);
  v36 = 1;
  v37 = xxxCallHook2(Valid, 0LL, v57[0], (__int64)v63, 1u);
  InputTraceLogging::Keyboard::HandleLowLevelHooks(v34, v35, v38);
  v40 = v59;
  if ( !v37 )
    goto LABEL_24;
  *(_QWORD *)(a1 + 1544) = v58;
  LOBYTE(v39) = a5;
  *(_DWORD *)(a1 + 1552) = v40;
  if ( IsSAS(v39, v57) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v36 = 0;
    }
    v43 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v36 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v41);
      LOBYTE(v45) = v43;
      LOBYTE(v46) = v36;
      WPP_RECORDER_AND_TRACE_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v46,
        v45,
        *(_QWORD *)(UserSessionState + 69416),
        3,
        6,
        10,
        (__int64)&WPP_7bcc8e7bb1623d655735815619c5a158_Traceguids);
    }
LABEL_24:
    v47 = v60;
    v48 = v62;
    *(_QWORD *)(a1 + 1544) = v58;
    *(_DWORD *)(a1 + 1552) = v40;
    *(_QWORD *)(a1 + 1568) = v48;
    v49 = *(_QWORD *)v47;
    v59 = *(_DWORD *)(v47 + 8);
    v58 = v49;
    LOBYTE(v15) = (unsigned int)IsGpqForegroundAccessibleExplicit(a8, a1, (UIPrivilegeIsolation *)&v58, a11) == 0;
    return v15;
  }
  LOBYTE(v42) = a5;
  if ( IsUninterceptable(v42, v41) )
  {
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x20) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 3u )
    {
      v36 = 0;
    }
    v52 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v36 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v53 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v51);
      LOBYTE(v54) = v52;
      LOBYTE(v55) = v36;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v55,
        v54,
        *(_QWORD *)(v53 + 69416),
        3,
        6,
        11,
        (__int64)&WPP_7bcc8e7bb1623d655735815619c5a158_Traceguids,
        v61);
    }
    goto LABEL_24;
  }
  if ( !a7 )
    ResetWindowKeyProcessing(0LL);
  *(_QWORD *)(a1 + 1568) = v62;
  return 1LL;
}
