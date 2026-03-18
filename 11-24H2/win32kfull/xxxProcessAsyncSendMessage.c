/*
 * XREFs of xxxProcessAsyncSendMessage @ 0x140041D5C
 * Callers:
 *     xxxProcessEventMessage @ 0x14023DDAC (xxxProcessEventMessage.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140061734 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1402DE010 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxProcessAsyncSendMessage(__int64 a1, __int64 a2, __int64 a3, __int128 **a4)
{
  __int128 *v4; // r14
  unsigned int v6; // r12d
  int v7; // esi
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct tagWND **v21; // r15
  struct tagWND *v22; // rsi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  ULONG_PTR *v27; // rax
  __int64 v28; // rbx
  unsigned __int16 v29; // r15
  __int128 v30; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-D0h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+38h] [rbp-C8h] BYREF
  _WORD v33[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *a4;
  v30 = 0LL;
  v31 = a3;
  v6 = a2;
  v7 = a1;
  W32GetCurrentThreadNonPaged(a1, a2);
  v8 = 0LL;
  result = W32GetUserSessionState(v10, v9);
  v13 = *(_QWORD *)(result + 19928);
  if ( (unsigned __int64)(unsigned __int16)v7 < *(_QWORD *)(v13 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v13, v12);
    v17 = *(_DWORD *)(W32GetUserSessionState(v16, v15) + 19952) * (unsigned int)(unsigned __int16)v7
        + *(_QWORD *)(UserSessionState + 19944);
    v21 = (struct tagWND **)HMPkheFromPhe(v17);
    result = 0x7FFFLL;
    LOWORD(v7) = HIWORD(v7) & 0x7FFF;
    if ( ((HIWORD(v7) & 0x7FFF) == *(_WORD *)(v17 + 26)
       || (_WORD)v7 == 0x7FFF
       || !(_WORD)v7 && (result = PsGetCurrentProcessWow64Process(v19, v18, v20)) != 0)
      && (*(_BYTE *)(v17 + 25) & 1) == 0
      && *(_BYTE *)(v17 + 24) == 1 )
    {
      v22 = *v21;
      if ( *v21 )
      {
        CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v19, v18);
        if ( CurrentThreadNonPaged )
          v24 = *CurrentThreadNonPaged;
        else
          v24 = 0LL;
        BugCheckParameter3[0] = *(_QWORD *)(v24 + 456);
        *(_QWORD *)(v24 + 456) = BugCheckParameter3;
        BugCheckParameter3[1] = (ULONG_PTR)v22;
        HMLockObject(v22);
        if ( v6 == 26 || v6 == 27 )
        {
          if ( v4 )
          {
            v28 = -1LL;
            if ( v4 == (__int128 *)-1LL )
            {
              v33[0] = 0;
              *((_QWORD *)&v30 + 1) = v33;
              do
                ++v28;
              while ( v33[v28] );
              LODWORD(v30) = 2 * v28;
              v4 = &v30;
              DWORD1(v30) = (2 * v28 + 2) & 0x7FFFFFFF;
            }
            else
            {
              v29 = (unsigned __int16)v4;
              if ( (unsigned int)UserGetAtomName((unsigned __int16)v4, v33, 260LL) )
              {
                *((_QWORD *)&v30 + 1) = v33;
                do
                  ++v28;
                while ( v33[v28] );
                LODWORD(v30) = 2 * v28;
                v4 = &v30;
                DWORD1(v30) = (2 * v28 + 2) & 0x7FFFFFFF;
              }
              else
              {
                v4 = 0LL;
              }
              UserDeleteAtom(v29);
            }
          }
          *a4 = 0LL;
        }
        else if ( v6 == 834 )
        {
          xxxEndGetWidnowTrackInfoAsync(v22);
          goto LABEL_12;
        }
        xxxSendMessage(v22, v6, v31, v4);
LABEL_12:
        v27 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v26, v25);
        if ( v27 )
          v8 = *v27;
        return Win32HM_UnlockFromThread<0>(v8, (ULONG_PTR)BugCheckParameter3);
      }
    }
  }
  return result;
}
