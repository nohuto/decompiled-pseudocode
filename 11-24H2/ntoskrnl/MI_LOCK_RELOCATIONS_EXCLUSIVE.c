/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x1404505E0
 * Callers:
 *     MiCaptureRetpolineImportInfo @ 0x140A83CC0 (MiCaptureRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140A8D9F4 (MiCaptureSecureImageBaseAddress.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9495C (MiFreeRetpolineImportInfo.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  char *result; // rax
  char *v6; // rbx

  --*(_WORD *)(a1 + 486);
  v2 = (unsigned __int64 *)(a2 + 24);
  result = (char *)KeAbPreAcquire(a2 + 24, 0LL);
  v6 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v6 )
    v6[10] = 1;
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
