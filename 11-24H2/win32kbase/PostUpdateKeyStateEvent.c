/*
 * XREFs of PostUpdateKeyStateEvent @ 0x140095730
 * Callers:
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 *     UpdateAsyncKeyState @ 0x140189B10 (UpdateAsyncKeyState.c)
 *     ?ApplyFullKeyboardStates@@YAXPEAX0@Z @ 0x140215E14 (-ApplyFullKeyboardStates@@YAXPEAX0@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ProcessUpdateKeyStateEvent @ 0x140095890 (ProcessUpdateKeyStateEvent.c)
 *     ApiSetEditionPostUpdateKeyStateEvent @ 0x140095BA0 (ApiSetEditionPostUpdateKeyStateEvent.c)
 *     SetWakeBit @ 0x140095C28 (SetWakeBit.c)
 *     CoalesceUpdateKeyStateEventMsg @ 0x140095C70 (CoalesceUpdateKeyStateEventMsg.c)
 */

void __fastcall PostUpdateKeyStateEvent(__int64 a1)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  _OWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  _OWORD *v8; // rax
  __int64 v9; // rax

  if ( (*(_DWORD *)(a1 + 436) & 1) != 0 && *(_QWORD *)(a1 + 104) != *(_QWORD *)(W32GetUserSessionState(a1) + 18704) )
  {
    if ( !*(_QWORD *)(a1 + 24) )
    {
      UserSessionState = W32GetUserSessionState(v2);
      v4 = (_OWORD *)(a1 + 248);
      ProcessUpdateKeyStateEvent(a1, UserSessionState + 14336, a1 + 248);
LABEL_5:
      *v4 = 0LL;
      v4[1] = 0LL;
      *(_DWORD *)(a1 + 436) &= ~1u;
      return;
    }
    v5 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(v5 + 96) == 4 )
    {
      v9 = W32GetUserSessionState(v2);
      v4 = (_OWORD *)(a1 + 248);
      CoalesceUpdateKeyStateEventMsg(v5, v9 + 14336, a1 + 248);
      SetWakeBit(*(_QWORD *)(a1 + 104), 8256LL);
      goto LABEL_5;
    }
    v7 = Win32AllocPoolZInitImpl(256LL, 0x60uLL, 0x736B7355u);
    if ( v7 )
    {
      v8 = (_OWORD *)W32GetUserSessionState(v6);
      v4 = (_OWORD *)(a1 + 248);
      *(_OWORD *)v7 = v8[896];
      *(_OWORD *)(v7 + 16) = v8[897];
      *(_OWORD *)(v7 + 32) = v8[898];
      *(_OWORD *)(v7 + 48) = v8[899];
      *(_OWORD *)(v7 + 64) = *(_OWORD *)(a1 + 248);
      *(_OWORD *)(v7 + 80) = *(_OWORD *)(a1 + 264);
      if ( !(unsigned int)ApiSetEditionPostUpdateKeyStateEvent(a1, v7) )
      {
        GreDeleteFastMutex((char *)v7);
        return;
      }
      goto LABEL_5;
    }
  }
}
