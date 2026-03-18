/*
 * XREFs of AcquireMagInputLock @ 0x1C01F6280
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C0020390 (_SetMagnificationInputTransform.c)
 *     TransformForInputMagnification @ 0x1C014DFC0 (TransformForInputMagnification.c)
 *     ApplyMagInputTransform @ 0x1C01A4C70 (ApplyMagInputTransform.c)
 *     EditionMagnificationMousePosition @ 0x1C01F62C0 (EditionMagnificationMousePosition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcquireMagInputLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    result = _InterlockedCompareExchange64(&gpMagInputLock, (signed __int64)CurrentThread, 0LL);
    if ( !result )
      break;
    UserSleep(1LL);
  }
  return result;
}
