/*
 * XREFs of RtlpGetStackLimits @ 0x1800DD990
 * Callers:
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180045A60 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpGetStackLimits(_QWORD *a1, void **a2)
{
  struct _TEB *v2; // r8
  _UNKNOWN **StackLimit; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v2 = NtCurrentTeb();
  *a2 = v2->NtTib.StackBase;
  StackLimit = (_UNKNOWN **)v2->NtTib.StackLimit;
  *a1 = StackLimit;
  return StackLimit <= &retaddr && &retaddr < *a2;
}
