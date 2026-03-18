/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x14008BE10
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x140076014 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall ValidateSmwp(struct tagSMWP *a1, int *a2)
{
  __int64 *v2; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // r13
  __int64 *v19; // rdi
  int v20; // r14d
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // r8
  _QWORD *v29; // r15
  _QWORD *v30; // rbx
  __int64 v32; // rax
  __int64 v33; // rax

  v2 = (__int64 *)*((_QWORD *)a1 + 5);
  *a2 = 1;
  v5 = *v2;
  W32GetCurrentThreadNonPaged(a1, a2);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19928);
  if ( (unsigned __int64)(unsigned __int16)v5 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19952) * (unsigned int)(unsigned __int16)v5
      + *(_QWORD *)(UserSessionState + 19944);
  v17 = HMPkheFromPhe(v13);
  LOWORD(v5) = WORD1(v5) & 0x7FFF;
  if ( (WORD1(v5) & 0x7FFF) != *(_WORD *)(v13 + 26)
    && (_WORD)v5 != 0x7FFF
    && ((_WORD)v5 || !PsGetCurrentProcessWow64Process(v15, v14, v16)) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v13 + 25) & 1) != 0 || *(_BYTE *)(v13 + 24) != 1 || !*(_QWORD *)v17 )
    return 0LL;
  v18 = *(_QWORD *)(*(_QWORD *)v17 + 104LL);
  v19 = (__int64 *)*((_QWORD *)a1 + 5);
  v20 = *((_DWORD *)a1 + 7);
  while ( 1 )
  {
    if ( --v20 < 0 )
      return 1LL;
    v21 = *v19;
    W32GetCurrentThreadNonPaged(v15, v14);
    v15 = *(_QWORD *)(W32GetUserSessionState(v23, v22) + 19928);
    if ( (unsigned __int64)(unsigned __int16)v21 >= *(_QWORD *)(v15 + 8) )
      goto LABEL_17;
    v24 = W32GetUserSessionState(v15, v14);
    v27 = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 19952) * (unsigned int)(unsigned __int16)v21
        + *(_QWORD *)(v24 + 19944);
    v29 = (_QWORD *)HMPkheFromPhe(v27);
    LOWORD(v21) = WORD1(v21) & 0x7FFF;
    if ( (WORD1(v21) & 0x7FFF) != *(_WORD *)(v27 + 26)
      && (_WORD)v21 != 0x7FFF
      && ((_WORD)v21 || !PsGetCurrentProcessWow64Process(v15, v14, v28)) )
    {
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(v27 + 25) & 1) != 0 )
      goto LABEL_17;
    if ( *(_BYTE *)(v27 + 24) != 1 )
      goto LABEL_17;
    v30 = (_QWORD *)*v29;
    if ( !*v29 )
      goto LABEL_17;
    v19[13] = v30[2];
    if ( (v19[4] & 4) == 0 )
    {
      v32 = v30[3];
      v14 = 0LL;
      if ( v32 )
      {
        v15 = *(_QWORD *)(v32 + 8);
        if ( v15 )
          v14 = *(_QWORD *)(v15 + 24);
      }
      if ( *(char *)(v30[5] + 19LL) < 0 )
        goto LABEL_17;
      v15 = v19[1];
      if ( v15 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( v30[13] != v14 )
          goto LABEL_17;
      }
      else if ( v15 >= 2 )
      {
        LOBYTE(v14) = 1;
        v33 = HMValidateHandleNoSecure(v15, v14);
        v15 = v33;
        if ( !v33 || *(char *)(*(_QWORD *)(v33 + 40) + 19LL) < 0 )
        {
          UserSetLastError(6);
LABEL_17:
          *v19 = 0LL;
          goto LABEL_18;
        }
        if ( v30 == (_QWORD *)v33 || v30[13] != *(_QWORD *)(v33 + 104) )
          goto LABEL_17;
      }
    }
    if ( *(_QWORD *)(_HMObjectFromHandle(*v19) + 104) != v18 )
      break;
    if ( (v19[4] & 0x2000) != 0 )
      *a2 = 0;
LABEL_18:
    v19 += 21;
  }
  UserSetLastError(1441);
  return 0LL;
}
