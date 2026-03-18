/*
 * XREFs of FsRtlStackOverflowRead @ 0x140582090
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall FsRtlStackOverflowRead(_QWORD *P, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *result; // rax

  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  guard_dispatch_icall_no_overrides(P[5], P[6], a3, a4);
  if ( P == (_QWORD *)&StackOverflowFallback )
    KeSetEvent(&StackOverflowFallbackSerialEvent, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  result[1].TrapFrame = 0LL;
  return result;
}
