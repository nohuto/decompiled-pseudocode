/*
 * XREFs of ExpLockHandleTableExclusive @ 0x1404527A8
 * Callers:
 *     ExDisableHandleTracing @ 0x140653D0C (ExDisableHandleTracing.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x140A52E88 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspApplyMitigationOptions @ 0x140A5333C (PspApplyMitigationOptions.c)
 *     ExEnableHandleExceptions @ 0x140A5D86C (ExEnableHandleExceptions.c)
 *     ExEnableHandleTracing @ 0x140AB9D28 (ExEnableHandleTracing.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExpLockHandleTableExclusive(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v4; // rbx

  --*(_WORD *)(a2 + 484);
  v2 = (unsigned __int64 *)(a1 + 56);
  result = (__int64)KeAbPreAcquire(a1 + 56, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v4 )
    *(_BYTE *)(v4 + 10) = 1;
  return result;
}
