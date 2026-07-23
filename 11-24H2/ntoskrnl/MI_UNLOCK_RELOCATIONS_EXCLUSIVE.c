/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x140455510
 * Callers:
 *     MiCaptureRetpolineImportInfo @ 0x140A83CC0 (MiCaptureRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140A8D9F4 (MiCaptureSecureImageBaseAddress.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9495C (MiFreeRetpolineImportInfo.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MI_UNLOCK_RELOCATIONS_EXCLUSIVE(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *result; // rax

  v2 = (volatile signed __int64 *)(a2 + 24);
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
