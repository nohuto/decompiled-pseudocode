/*
 * XREFs of xxxGetInputEvent @ 0x140064510
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x14009E630 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserGetInputEvent @ 0x140296340 (NtUserGetInputEvent.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     zzzWakeInputIdle @ 0x1400647B0 (zzzWakeInputIdle.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x140081090 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1401BB8BC (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x140272AEC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

__int64 __fastcall xxxGetInputEvent(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // si
  unsigned int v3; // edi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  __int16 v7; // ax
  __int16 v8; // dx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx

  v2 = a1;
  v3 = WORD1(a1);
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v5 = *CurrentThreadNonPaged;
  else
    v5 = 0LL;
  INTERLOCKEDINT::operator int(*(_QWORD *)(v5 + 488) + 4LL);
  v7 = INTERLOCKEDINT::operator int(v6);
  if ( ((unsigned __int16)(v8 | v7) & v2) != 0 )
    goto LABEL_31;
  v9 = *(_QWORD *)(v5 + 1360);
  if ( ((v9 & 0x400) != 0 || (v3 & 8) != 0) && (v9 & 0x200) != 0 )
    goto LABEL_31;
  v10 = *(_QWORD *)(v5 + 472);
  if ( *(_QWORD *)(v10 + 72) == v5
    && (*(_DWORD *)(v10 + 436) & 0x400) == 0
    && *(_QWORD *)(v10 + 80) == 1LL
    && *(_QWORD *)(v5 + 616) == 1LL
    && (v2 & 0x1C07) != 0 )
  {
    goto LABEL_31;
  }
  if ( v5 == *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18960)
    && ((*(_DWORD *)(v5 + 720) | *(_DWORD *)(**(_QWORD **)(v5 + 504) + 16LL)) & 0x1000) != 0 )
  {
    xxxCallHook(0, 0LL, 0LL, 11);
  }
  if ( (v2 & 0x1C0F) != 0 )
    *(_QWORD *)(*(_QWORD *)(v5 + 464) + 336LL) = v5;
  zzzWakeInputIdle(v5);
  INTERLOCKEDINT::operator int(*(_QWORD *)(v5 + 488) + 4LL);
  v12 = INTERLOCKEDINT::operator int(v11);
  if ( ((unsigned __int16)(v13 | v12) & v2) != 0 )
  {
LABEL_31:
    KeSetEvent(*(PRKEVENT *)(v5 + 768), 2, 0);
  }
  else
  {
    v15 = (__int64 *)W32GetCurrentThreadNonPaged(v14, v13);
    if ( v15 )
      v16 = *v15;
    else
      v16 = 0LL;
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v16 + 488) + 16LL), v2 | 0x2000);
    KeClearEvent(*(PRKEVENT *)(v16 + 768));
    *(_QWORD *)(*(_QWORD *)(v5 + 520) + 8LL) = 0LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0x400) != 0
      && (int)CheckProcessForeground((struct tagTHREADINFO *)v5) < 0 )
    {
      return 0LL;
    }
  }
  v19 = *(_QWORD *)(v5 + 760);
  if ( v19 && ((v2 & 7) == 7 || (v2 & 6) != 0 && *(_QWORD *)(*((_QWORD *)PtiCurrent(v18, v17) + 59) + 112LL)) )
    xxxUpdateInputHangInfo(0LL, 0LL);
  return v19;
}
