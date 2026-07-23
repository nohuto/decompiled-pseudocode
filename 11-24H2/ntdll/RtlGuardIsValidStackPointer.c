/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x180035C40
 * Callers:
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1)
{
  struct _TEB *v1; // rdx
  void *StackBase; // [rsp+10h] [rbp+10h]
  char *StackLimit; // [rsp+18h] [rbp+18h]

  v1 = NtCurrentTeb();
  StackBase = v1->NtTib.StackBase;
  StackLimit = (char *)v1->NtTib.StackLimit;
  if ( a1 >= (unsigned __int64)StackLimit && a1 <= (unsigned __int64)StackBase )
    return 1LL;
  return StackLimit != v1->DeallocationStack
      && a1 >= (unsigned __int64)(StackLimit - 4096)
      && a1 <= (unsigned __int64)StackBase;
}
