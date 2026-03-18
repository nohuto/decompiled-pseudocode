/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14045BEC8
 * Callers:
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A8DD30 (MiCaptureRetpolineImportInfo.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9400C (MiFreeRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140AA3598 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 *result; // rax
  __int64 *v6; // rbx

  --*(_WORD *)(a1 + 486);
  v2 = (unsigned __int64 *)(a2 + 24);
  result = KeAbPreAcquire(a2 + 24, 0LL);
  v6 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
