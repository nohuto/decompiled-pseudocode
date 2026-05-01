/*
 * XREFs of ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x180322550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutParser::SetCurrentRegion(__int64 a1, __int64 *a2)
{
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
           (LPVOID *)(a1 + 168),
           a2);
}
