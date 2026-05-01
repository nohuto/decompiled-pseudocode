/*
 * XREFs of ?get_BoundsPreference@WindowingEnvironmentSettings@@UEAAJPEAI@Z @ 0x180425F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_BoundsPreference(
        WindowingEnvironmentSettings *this,
        unsigned int *a2)
{
  *a2 = 0;
  if ( !*((_BYTE *)this + 92) )
    return 2147943568LL;
  *a2 = *((_DWORD *)this + 29);
  return 0LL;
}
