/*
 * XREFs of SeSetImageBaseAddress @ 0x140A8DA70
 * Callers:
 *     MiCaptureSecureImageBaseAddress @ 0x140A8D9F4 (MiCaptureSecureImageBaseAddress.c)
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SeSetImageBaseAddress(__int64 a1, __int64 a2)
{
  if ( qword_140F04BA0 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 3221225659LL;
}
