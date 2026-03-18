/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x140442E7C
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x140442460 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalEfiSetEnvironmentVariable @ 0x140442748 (HalEfiSetEnvironmentVariable.c)
 *     HalGetEnvironmentVariableEx @ 0x140442810 (HalGetEnvironmentVariableEx.c)
 *     HalEfiGetTime @ 0x140549C4C (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x140549E64 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054A0A0 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x14055FDB0 (HalpQueryCapsuleCapabilities.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpConvertEfiToNtStatus(__int64 a1)
{
  unsigned int i; // eax

  for ( i = 0; i < 0x20; ++i )
  {
    if ( HalEfiToNtStatusMappings[2 * i] == a1 )
      return LODWORD(HalEfiToNtStatusMappings[2 * i + 1]);
  }
  return 3221225473LL;
}
