/*
 * XREFs of MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1403D7814
 * Callers:
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A8DD30 (MiCaptureRetpolineImportInfo.c)
 *     MiFreeRetpolineImportInfo @ 0x140A9400C (MiFreeRetpolineImportInfo.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140AA3598 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
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
