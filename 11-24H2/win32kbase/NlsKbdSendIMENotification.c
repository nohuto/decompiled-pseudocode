/*
 * XREFs of NlsKbdSendIMENotification @ 0x1401298F0
 * Callers:
 *     NlsKbdSendIMEProc @ 0x140214FB8 (NlsKbdSendIMEProc.c)
 * Callees:
 *     IoControl @ 0x140212EF0 (IoControl.c)
 */

char __fastcall NlsKbdSendIMENotification(__int64 a1, int a2)
{
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v3 = a1;
  v4 = *(_QWORD *)(W32GetUserSessionState(a1) + 14072);
  if ( v4 && (*(_BYTE *)(v4 + 2) & 1) != 0 )
  {
    *(_WORD *)(W32GetUserSessionState(v5) + 14320) = 0;
    *(_DWORD *)(W32GetUserSessionState(v7) + 14324) = v3;
    *(_DWORD *)(W32GetUserSessionState(v8) + 14328) = a2;
    IoControl(4LL);
  }
  return 1;
}
