/*
 * XREFs of AcquireMagInputLock @ 0x140163598
 * Callers:
 *     ApplyMagInputTransform @ 0x140163270 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1401633F0 (EditionMagnificationMousePosition.c)
 *     TransformForInputMagnification @ 0x140163440 (TransformForInputMagnification.c)
 *     _SetMagnificationInputTransform @ 0x1401FCC98 (_SetMagnificationInputTransform.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall AcquireMagInputLock(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)(W32GetUserSessionState(a1, a2) + 66096),
               (signed __int64)CurrentThread,
               0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
