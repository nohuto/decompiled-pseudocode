/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x140439E9C
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x140439480 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalEfiSetEnvironmentVariable @ 0x140439768 (HalEfiSetEnvironmentVariable.c)
 *     HalGetEnvironmentVariableEx @ 0x140439830 (HalGetEnvironmentVariableEx.c)
 *     HalEfiGetTime @ 0x140549DFC (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x14054A014 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054A250 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405602E0 (HalpQueryCapsuleCapabilities.c)
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
