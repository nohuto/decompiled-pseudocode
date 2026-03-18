/*
 * XREFs of SeSetImageBaseAddress @ 0x140941BC0
 * Callers:
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140AA3598 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeSetImageBaseAddress(__int64 a1)
{
  if ( qword_140F04520 )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 3221225659LL;
}
