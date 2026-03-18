/*
 * XREFs of xxxWindowFromPoint @ 0x140040384
 * Callers:
 *     NtUserWindowFromPoint @ 0x14003F170 (NtUserWindowFromPoint.c)
 * Callees:
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14003F498 (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?WindowFromPoint@Win32k@InputTraceLogging@@SAXAEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1400405F0 (-WindowFromPoint@Win32k@InputTraceLogging@@SAXAEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1400416B0 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x1400678B8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

struct tagWND *__fastcall xxxWindowFromPoint(struct tagPOINT a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rsi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  ULONG_PTR v13; // rbp
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR *v19; // rax
  ULONG_PTR v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  ULONG_PTR *v23; // rax
  ULONG_PTR v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  struct tagWND **v35; // r14
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-38h] BYREF
  ULONG_PTR v38[2]; // [rsp+50h] [rbp-28h] BYREF
  struct tagPOINT v39; // [rsp+80h] [rbp+8h] BYREF

  v39 = a1;
  v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetCurrentThreadNonPaged)(a1, a2);
  v6 = 0LL;
  if ( !v3 )
    return 0LL;
  if ( !*(_QWORD *)v3 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)v3 + 504LL);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 24);
  if ( !v8 )
    return 0LL;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v5, v4);
  if ( CurrentThreadNonPaged )
    v10 = *CurrentThreadNonPaged;
  else
    v10 = 0LL;
  v38[0] = *(_QWORD *)(v10 + 456);
  *(_QWORD *)(v10 + 456) = v38;
  v38[1] = v8;
  HMLockObject(v8);
  if ( (unsigned int)IsWindowDesktopComposed(v8) )
  {
    v13 = *(_QWORD *)(v8 + 112);
    v14 = (__int64 *)W32GetCurrentThreadNonPaged(v12, v11);
    if ( v14 )
      v15 = *v14;
    else
      v15 = 0LL;
    BugCheckParameter3[0] = *(_QWORD *)(v15 + 456);
    *(_QWORD *)(v15 + 456) = BugCheckParameter3;
    BugCheckParameter3[1] = v13;
    if ( v13 )
      HMLockObject(v13);
    v16 = (unsigned int)xxxDCEWindowHitTest(*(struct tagWND **)(v8 + 112), 0, 0LL, 0LL, a1, 0LL, 3);
    v19 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v18, v17);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    Win32HM_UnlockFromThread<1>(v20, (ULONG_PTR)BugCheckParameter3);
  }
  else
  {
    v16 = xxxWindowHitTest2(v8, a1, 0LL, 1LL);
  }
  v23 = (ULONG_PTR *)W32GetCurrentThreadNonPaged(v22, v21);
  if ( v23 )
    v24 = *v23;
  else
    v24 = 0LL;
  Win32HM_UnlockFromThread<1>(v24, (ULONG_PTR)v38);
  W32GetCurrentThreadNonPaged(v26, v25);
  v30 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 19928);
  if ( (unsigned __int64)(unsigned __int16)v16 < *(_QWORD *)(v30 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v30, v29);
    v34 = *(_DWORD *)(W32GetUserSessionState(v33, v32) + 19952) * (unsigned int)(unsigned __int16)v16
        + *(_QWORD *)(UserSessionState + 19944);
    v35 = (struct tagWND **)HMPkheFromPhe(v34);
    LOWORD(v16) = HIWORD(v16) & 0x7FFF;
    if ( ((HIWORD(v16) & 0x7FFF) == *(_WORD *)(v34 + 26)
       || (_WORD)v16 == 0x7FFF
       || !(_WORD)v16 && PsGetCurrentProcessWow64Process())
      && (*(_BYTE *)(v34 + 25) & 1) == 0
      && *(_BYTE *)(v34 + 24) == 1 )
    {
      v6 = *v35;
    }
  }
  InputTraceLogging::Win32k::WindowFromPoint(&v39, v6);
  return v6;
}
