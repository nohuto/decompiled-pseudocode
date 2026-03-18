/*
 * XREFs of ExpLockHandleTableExclusive @ 0x140454230
 * Callers:
 *     ExDisableHandleTracing @ 0x140647E0C (ExDisableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x1408BA0E4 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspApplyMitigationOptions @ 0x140A521AC (PspApplyMitigationOptions.c)
 *     ExEnableHandleExceptions @ 0x140A5BB80 (ExEnableHandleExceptions.c)
 *     ExEnableHandleTracing @ 0x140AB59E8 (ExEnableHandleTracing.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall ExpLockHandleTableExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 56);
  result = KeAbPreAcquire(a1 + 56, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return result;
}
