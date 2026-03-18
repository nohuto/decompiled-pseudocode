/*
 * XREFs of HviGetImplementedPhysicalBits @ 0x140663BD0
 * Callers:
 *     RtlGetCpuMaxPhysicalBits @ 0x140B608E0 (RtlGetCpuMaxPhysicalBits.c)
 * Callees:
 *     HviGetEnlightenmentInformation @ 0x140663A68 (HviGetEnlightenmentInformation.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

char __fastcall HviGetImplementedPhysicalBits(int *a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  HviGetEnlightenmentInformation(&v3);
  if ( (BYTE8(v3) & 0x7F) == 0 )
    return 0;
  *a1 = BYTE8(v3) & 0x7F;
  return 1;
}
