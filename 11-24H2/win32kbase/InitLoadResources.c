/*
 * XREFs of InitLoadResources @ 0x14005548C
 * Callers:
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 * Callees:
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     GetCursorSizeFromDpi @ 0x140055928 (GetCursorSizeFromDpi.c)
 *     SetDpiDepSysMet @ 0x140055970 (SetDpiDepSysMet.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ClearLogicalCursorPos @ 0x1402125E0 (ClearLogicalCursorPos.c)
 */

__int64 __fastcall InitLoadResources(__int64 a1)
{
  int v1; // esi
  bool v2; // bl
  bool v3; // di
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int CursorSizeFromDpi; // eax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  INT v21; // ebx
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  INT v26; // ebx
  __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  INT v31; // ebx
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  INT v36; // ebx
  __int64 v37; // rax
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 result; // rax
  __int64 v47; // rcx
  __int64 UserSessionState; // rax
  int v49; // r8d
  int v50; // edx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __m128i v53; // xmm6
  int v54; // ebx
  __int64 v55; // rcx

  v1 = a1;
  v2 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1);
    LOBYTE(v49) = v3;
    LOBYTE(v50) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v50,
      v49,
      *(_QWORD *)(UserSessionState + 69400),
      4,
      14,
      22,
      (__int64)&WPP_c6ad2250ef6e3ae3eb9ff75238ab5e56_Traceguids);
  }
  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 19928);
  *(_DWORD *)(v4 + 2432) = 32;
  v5 = *(_QWORD *)(W32GetUserSessionState(v4) + 19928);
  *(_DWORD *)(v5 + 2436) = 32;
  v6 = W32GetUserSessionState(v5);
  CursorSizeFromDpi = GetCursorSizeFromDpi(*(unsigned __int16 *)(*(_QWORD *)(v6 + 19928) + 6998LL));
  SetDpiDepSysMet(7LL, CursorSizeFromDpi);
  v9 = W32GetUserSessionState(v8);
  v10 = GetCursorSizeFromDpi(*(unsigned __int16 *)(*(_QWORD *)(v9 + 19928) + 6998LL));
  SetDpiDepSysMet(8LL, v10);
  v12 = *(_QWORD *)(W32GetUserSessionState(v11) + 19928);
  *(_DWORD *)(v12 + 2424) = 32;
  v13 = *(_QWORD *)(W32GetUserSessionState(v12) + 19928);
  *(_DWORD *)(v13 + 2428) = 32;
  v14 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v13) + 19928) + 2424LL) / 2;
  v16 = *(_QWORD *)(W32GetUserSessionState(v15) + 19928);
  *(_DWORD *)(v16 + 2484) = v14;
  v17 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v16) + 19928) + 2428LL) / 2;
  v19 = *(_QWORD *)(W32GetUserSessionState(v18) + 19928);
  *(_DWORD *)(v19 + 2488) = v17;
  v20 = *(_QWORD *)(W32GetUserSessionState(v19) + 19928);
  v21 = *(unsigned __int16 *)(v20 + 6998);
  v22 = W32GetUserSessionState(v20);
  v23 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v22 + 19928) + 2424LL), v21, 96);
  SetDpiDepSysMet(5LL, v23);
  v25 = *(_QWORD *)(W32GetUserSessionState(v24) + 19928);
  v26 = *(unsigned __int16 *)(v25 + 6998);
  v27 = W32GetUserSessionState(v25);
  v28 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v27 + 19928) + 2428LL), v26, 96);
  SetDpiDepSysMet(6LL, v28);
  v30 = *(_QWORD *)(W32GetUserSessionState(v29) + 19928);
  v31 = *(unsigned __int16 *)(v30 + 6998);
  v32 = W32GetUserSessionState(v30);
  v33 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v32 + 19928) + 2484LL), v31, 96);
  SetDpiDepSysMet(20LL, v33);
  v35 = *(_QWORD *)(W32GetUserSessionState(v34) + 19928);
  v36 = *(unsigned __int16 *)(v35 + 6998);
  v37 = W32GetUserSessionState(v35);
  v38 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v37 + 19928) + 2488LL), v36, 96);
  SetDpiDepSysMet(21LL, v38);
  v40 = *(_QWORD *)(W32GetUserSessionState(v39) + 19928);
  *(_DWORD *)(v40 + 1968) = 0;
  v41 = *(_QWORD *)(W32GetUserSessionState(v40) + 19928);
  *(_DWORD *)(v41 + 1916) = 1;
  v42 = *(_QWORD *)(W32GetUserSessionState(v41) + 19928);
  *(_DWORD *)(v42 + 1920) = 1;
  v43 = *(_QWORD *)(W32GetUserSessionState(v42) + 19928);
  *(_DWORD *)(v43 + 2076) = 2;
  v44 = *(_QWORD *)(W32GetUserSessionState(v43) + 19928);
  *(_DWORD *)(v44 + 2080) = 2;
  v45 = *(_QWORD *)(W32GetUserSessionState(v44) + 19928);
  *(_DWORD *)(v45 + 1924) = 3;
  result = W32GetUserSessionState(v45);
  v47 = *(_QWORD *)(result + 19928);
  *(_DWORD *)(v47 + 1928) = 3;
  if ( !v1 )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v47) + 68868)
      || (result = W32GetUserSessionState(v51), *(_DWORD *)(result + 68876)) )
    {
      v52 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v51) + 57008) + 104LL) + 40LL);
      v53 = *(__m128i *)(v52 + 28);
      v54 = *(_DWORD *)(v52 + 36) / 2;
      v55 = *(_QWORD *)(W32GetUserSessionState(v52) + 19928);
      *(_DWORD *)(v55 + 4960) = v54;
      *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v55) + 19928) + 4964LL) = _mm_cvtsi128_si32(_mm_srli_si128(v53, 12))
                                                                             / 2;
      return ClearLogicalCursorPos();
    }
  }
  return result;
}
