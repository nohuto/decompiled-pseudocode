/*
 * XREFs of IsGetClassPtrSupported @ 0x1C00A21B4
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00A1CD8 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C0295C28 )
    return qword_1C0295C28();
  else
    return 3221225659LL;
}
