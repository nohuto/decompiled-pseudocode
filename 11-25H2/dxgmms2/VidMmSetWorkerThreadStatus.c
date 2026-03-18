/*
 * XREFs of VidMmSetWorkerThreadStatus @ 0x140101A84
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400F23A0 (VidMmWorkerThreadProc.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidMmSetWorkerThreadStatus(__int64 a1, char a2)
{
  *(_BYTE *)(a1 + 212) = a2;
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 24) + 48LL), 0, 0);
}
