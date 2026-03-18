/*
 * XREFs of SeSetImageBaseAddress @ 0x1408F7330
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1408F642C (MiRelocateImageAgain.c)
 *     MiCaptureSecureImageBaseAddress @ 0x140AA8678 (MiCaptureSecureImageBaseAddress.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeSetImageBaseAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( qword_140F04900 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 3221225659LL;
}
