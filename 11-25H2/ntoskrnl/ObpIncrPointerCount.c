/*
 * XREFs of ObpIncrPointerCount @ 0x140431ED0
 * Callers:
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x140431D24 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     ObDuplicateObject @ 0x140843A40 (ObDuplicateObject.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1408ADCB0 (ObpReferenceProcessObjectByHandle.c)
 *     ObInheritObjectHandle @ 0x140972284 (ObInheritObjectHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
