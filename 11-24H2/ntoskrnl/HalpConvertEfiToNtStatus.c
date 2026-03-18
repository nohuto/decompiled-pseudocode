/*
 * XREFs of HalpConvertEfiToNtStatus @ 0x1404443FC
 * Callers:
 *     HalQueryEnvironmentVariableInfoEx @ 0x1404439E0 (HalQueryEnvironmentVariableInfoEx.c)
 *     HalEfiSetEnvironmentVariable @ 0x140443CC8 (HalEfiSetEnvironmentVariable.c)
 *     HalGetEnvironmentVariableEx @ 0x140443D90 (HalGetEnvironmentVariableEx.c)
 *     HalEfiGetTime @ 0x14054C53C (HalEfiGetTime.c)
 *     HalEfiSetTime @ 0x14054C754 (HalEfiSetTime.c)
 *     HalEfiUpdateCapsule @ 0x14054C990 (HalEfiUpdateCapsule.c)
 *     HalpQueryCapsuleCapabilities @ 0x1405626B0 (HalpQueryCapsuleCapabilities.c)
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
