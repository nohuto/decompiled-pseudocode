/*
 * XREFs of AlpcpStartInitialization @ 0x140894E74
 * Callers:
 *     AlpcpCreateSection @ 0x140893594 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x140893C6C (AlpcpCreateReserve.c)
 *     NtAlpcCreateSecurityContext @ 0x14089D0F0 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCreateSecurityContext @ 0x14089E878 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall AlpcpStartInitialization(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *result; // rax
  char *v4; // rbx

  v1 = (unsigned __int64 *)(a1 - 16);
  result = (char *)KeAbPreAcquire(a1 - 16, 0LL);
  v4 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v4 )
    v4[10] = 1;
  *(_BYTE *)(a1 - 32) |= 4u;
  return result;
}
