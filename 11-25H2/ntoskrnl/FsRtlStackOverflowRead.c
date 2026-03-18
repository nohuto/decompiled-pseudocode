/*
 * XREFs of FsRtlStackOverflowRead @ 0x14057E8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

struct _KTHREAD *__fastcall FsRtlStackOverflowRead(_QWORD *P)
{
  struct _KTHREAD *result; // rax

  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)1;
  guard_dispatch_icall_no_overrides(P[5]);
  if ( P == (_QWORD *)&StackOverflowFallback )
    KeSetEvent(&StackOverflowFallbackSerialEvent, 0, 0);
  else
    ExFreePoolWithTag(P, 0);
  result = KeGetCurrentThread();
  result[1].TrapFrame = 0LL;
  return result;
}
