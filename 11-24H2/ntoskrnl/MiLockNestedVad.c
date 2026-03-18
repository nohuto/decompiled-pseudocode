/*
 * XREFs of MiLockNestedVad @ 0x140A19DBC
 * Callers:
 *     MiFreeVadRange @ 0x1403CDBD8 (MiFreeVadRange.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiUpControlAreaRefs @ 0x1404172CC (MiUpControlAreaRefs.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLockNestedVad(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)(a1 + 40);
  result = (__int64)KeAbPreAcquire(a1 + 40, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (__int64)v1);
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  return result;
}
