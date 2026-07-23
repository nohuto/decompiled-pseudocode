/*
 * XREFs of IoGetRequestorSessionId @ 0x1403C1520
 * Callers:
 *     <none>
 * Callees:
 *     PsGetSessionId @ 0x1403C1560 (PsGetSessionId.c)
 */

NTSTATUS __stdcall IoGetRequestorSessionId(PIRP Irp, PULONG pSessionId)
{
  PETHREAD Thread; // rcx
  int SessionId; // eax
  _DWORD *v4; // r8

  Thread = Irp->Tail.Overlay.Thread;
  if ( Thread )
  {
    SessionId = PsGetSessionId(Thread->Process);
    *v4 = SessionId;
    return 0;
  }
  else
  {
    *pSessionId = -1;
    return -1073741823;
  }
}
