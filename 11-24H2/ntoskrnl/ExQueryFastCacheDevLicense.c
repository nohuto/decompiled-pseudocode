/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x140A51520
 * Callers:
 *     SepIsLockedDown @ 0x14078E558 (SepIsLockedDown.c)
 * Callees:
 *     KIsDeveloperModeEnabled @ 0x140A51554 (KIsDeveloperModeEnabled.c)
 */

bool ExQueryFastCacheDevLicense()
{
  char v0; // bl
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = 0;
  if ( (int)KIsDeveloperModeEnabled(&v2) >= 0 )
    return v2 != 0;
  return v0;
}
