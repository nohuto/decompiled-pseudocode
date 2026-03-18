/*
 * XREFs of MiRotateComplete @ 0x1404A62D4
 * Callers:
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiRotateComplete(unsigned __int64 *a1)
{
  _KPROCESS *Process; // rdx
  __int64 p_Blink; // rsi
  unsigned __int64 *v4; // rbx
  unsigned __int8 v5; // al
  unsigned __int64 *i; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v4 = &Process[1].ActiveGroupsMask.Masks[1];
  v5 = MiLockWorkingSetExclusive((__int64)&Process[2].ReadyListHead.Blink);
  for ( i = (unsigned __int64 *)*v4; i != a1; i = (unsigned __int64 *)*i )
    v4 = i;
  *v4 = *i;
  MiUnlockWorkingSetExclusive(p_Blink, v5);
}
