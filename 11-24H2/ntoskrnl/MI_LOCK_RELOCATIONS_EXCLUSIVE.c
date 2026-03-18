/*
 * XREFs of MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14045B1E0
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1408F642C (MiRelocateImageAgain.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A877D0 (MiCaptureRetpolineImportInfo.c)
 *     MiFreeRetpolineImportInfo @ 0x140A981A0 (MiFreeRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140AA8678 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall MI_LOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v6; // rbx

  --*(_WORD *)(a1 + 486);
  v2 = (unsigned __int64 *)(a2 + 24);
  result = (__int64)KeAbPreAcquire(a2 + 24, 0LL);
  v6 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v2, result, (__int64)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 10) = 1;
  *(_QWORD *)(a2 + 8) = a1;
  return result;
}
