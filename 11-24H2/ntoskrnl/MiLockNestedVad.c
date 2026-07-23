/*
 * XREFs of MiLockNestedVad @ 0x140A12F2C
 * Callers:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x1404B355C (MiUpControlAreaRefs.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall MiLockNestedVad(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  char *result; // rax
  char *v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 40);
  result = (char *)KeAbPreAcquire(a1 + 40, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    v3[10] = 1;
  return result;
}
