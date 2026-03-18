/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x14008BB84
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // r15
  _QWORD *v18; // rbx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  _QWORD *v27; // rax
  __int64 v28; // r9
  char v29; // r10
  __int64 v30; // rax

  v2 = *(_QWORD *)a1;
  W32GetCurrentThreadNonPaged(a1, a2);
  v5 = 0;
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928);
  if ( (unsigned __int64)(unsigned __int16)v2 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19952) * (unsigned int)(unsigned __int16)v2
      + *(_QWORD *)(UserSessionState + 19944);
  v17 = (_QWORD *)HMPkheFromPhe(v13);
  LOWORD(v2) = WORD1(v2) & 0x7FFF;
  if ( (WORD1(v2) & 0x7FFF) != *(_WORD *)(v13 + 26)
    && (_WORD)v2 != 0x7FFF
    && ((_WORD)v2 || !PsGetCurrentProcessWow64Process(v15, v14, v16)) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v13 + 24) != 1 )
    return 0LL;
  v18 = (_QWORD *)*v17;
  if ( !*v17 )
    return 0LL;
  *((_QWORD *)a1 + 13) = v18[2];
  if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 1LL;
  v20 = v18[3];
  v21 = 0LL;
  if ( v20 )
  {
    v22 = *(_QWORD *)(v20 + 8);
    if ( v22 )
      v21 = *(_QWORD *)(v22 + 24);
  }
  v23 = v18[5];
  v24 = v18[13];
  v25 = *(unsigned __int8 *)(v23 + 19);
  if ( (v25 & 0x80u) != 0LL )
    return 0LL;
  v26 = *((_QWORD *)a1 + 1);
  if ( v26 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v24 != v21 )
      return 0LL;
    goto LABEL_36;
  }
  if ( !v26 )
  {
    if ( !a2 )
      return 1LL;
    if ( v24 != v21 || ((v25 & 4 ^ (*(unsigned __int8 *)(v23 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      goto LABEL_37;
    v30 = *((_QWORD *)a2 + 14);
LABEL_25:
    if ( !v30
      || ((*(_BYTE *)(*(_QWORD *)(v30 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v30 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
    {
      goto LABEL_37;
    }
    return 0LL;
  }
  if ( v26 == 1 )
  {
LABEL_36:
    if ( !a2 )
      return 1LL;
    goto LABEL_37;
  }
  LOBYTE(v25) = 1;
  v27 = (_QWORD *)HMValidateHandleNoSecure(v26, v25);
  if ( !v27 || (v28 = v27[5], v29 = *(_BYTE *)(v28 + 19), v29 < 0) )
  {
    UserSetLastError(6);
    return 0LL;
  }
  if ( v18 == v27 || v18[13] != v27[13] )
    return 0LL;
  if ( !a2 )
    return 1LL;
  if ( v24 != v21 )
    goto LABEL_37;
  if ( ((*(_BYTE *)(v18[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v18[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
  {
    v30 = v27[11];
    goto LABEL_25;
  }
  if ( ((v29 & 4 ^ (*(unsigned __int8 *)(v28 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
    return 0LL;
LABEL_37:
  LOBYTE(v5) = a2 == (struct tagWND *)v18[13];
  return v5;
}
