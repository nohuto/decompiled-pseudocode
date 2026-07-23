/*
 * XREFs of ExpLockHandleTableExclusive @ 0x140447858
 * Callers:
 *     ExDisableHandleTracing @ 0x14065246C (ExDisableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408EB4BC (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspApplyMitigationOptions @ 0x140A4B32C (PspApplyMitigationOptions.c)
 *     ExEnableHandleExceptions @ 0x140A55C8C (ExEnableHandleExceptions.c)
 *     ExEnableHandleTracing @ 0x140AB4D44 (ExEnableHandleTracing.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall ExpLockHandleTableExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 56);
  result = (char *)KeAbPreAcquire(a1 + 56, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    v4[10] = 1;
  return result;
}
