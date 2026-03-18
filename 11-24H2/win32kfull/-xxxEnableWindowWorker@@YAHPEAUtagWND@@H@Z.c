/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14014E68C
 * Callers:
 *     xxxEnableWindow @ 0x14014E5C0 (xxxEnableWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x140293A90 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     xxxWindowEvent @ 0x1400408B0 (xxxWindowEvent.c)
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x140183378 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v3; // rbp
  struct tagWND *v4; // rdi
  char v5; // si
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax

  v2 = 0;
  v3 = (int)a2;
  v4 = a1;
  v5 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8;
  if ( (_DWORD)a2 )
  {
    *((_DWORD *)a1 + 95) &= ~0x100u;
  }
  else
  {
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 31LL, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    a1 = (struct tagWND *)*((_QWORD *)PtiCurrent(v7, v6) + 59);
    if ( v4 == *((struct tagWND **)a1 + 15) )
      xxxSetFocus(0LL);
  }
  UserSessionState = W32GetUserSessionState(a1, a2);
  SetOrClrWF(v3 == 0, v4, 0xF08u, (*(_DWORD *)(*(_QWORD *)(UserSessionState + 19200) + 48LL) >> 10) & 1);
  if ( (v5 == 0) != (_DWORD)v3 )
  {
    xxxWindowEvent(0x800Au, v4, 0, 0, 0);
    xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)v4, 10LL, v3, 0LL, 0, 0, 0LL, 1, 1);
  }
  LOBYTE(v2) = v5 != 0;
  return v2;
}
