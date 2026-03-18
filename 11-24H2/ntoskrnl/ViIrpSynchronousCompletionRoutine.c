/*
 * XREFs of ViIrpSynchronousCompletionRoutine @ 0x140B8E2D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

__int64 __fastcall ViIrpSynchronousCompletionRoutine(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
