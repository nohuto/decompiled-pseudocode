/*
 * XREFs of ?IsOfType@CMagnifierRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18021A850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMagnifierRenderTarget::IsOfType(__int64 a1, int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 104;
  result = 0;
  if ( v2 <= 0x1E )
  {
    v3 = 1073742849;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
