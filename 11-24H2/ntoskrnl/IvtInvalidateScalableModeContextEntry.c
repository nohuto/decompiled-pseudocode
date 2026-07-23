/*
 * XREFs of IvtInvalidateScalableModeContextEntry @ 0x14056CA50
 * Callers:
 *     IvtUpdateScalableModeContextEntry @ 0x1404C4D8C (IvtUpdateScalableModeContextEntry.c)
 *     IvtLegacyUpdateScalableModeContextEntry @ 0x14056E2C8 (IvtLegacyUpdateScalableModeContextEntry.c)
 * Callees:
 *     Feature_Test57481295__private_IsEnabledDeviceUsageNoInline @ 0x140539A0C (Feature_Test57481295__private_IsEnabledDeviceUsageNoInline.c)
 *     IvtInvalidateContextEntry @ 0x14056C9C4 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14056CAC8 (IvtInvalidateScalableModePasidCache.c)
 */

__int64 __fastcall IvtInvalidateScalableModeContextEntry(__int64 a1, int *a2, int a3, __int64 a4, char a5)
{
  __int64 v8; // r9
  unsigned __int16 v9; // r8

  if ( (unsigned int)Feature_Test57481295__private_IsEnabledDeviceUsageNoInline() )
    v9 = a3;
  else
    v9 = 0;
  IvtInvalidateContextEntry(a1, a2, v9, v8, 0);
  return IvtInvalidateScalableModePasidCache(a1, *a2, a3, -1, 1, 1, a5);
}
