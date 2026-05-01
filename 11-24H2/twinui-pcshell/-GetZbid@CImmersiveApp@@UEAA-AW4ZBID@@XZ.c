/*
 * XREFs of ?GetZbid@CImmersiveApp@@UEAA?AW4ZBID@@XZ @ 0x180202630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetZbid(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 456);
  result = 0LL;
  if ( (v1 & 1) != 0 || (v1 & 8) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationBand(a1 + 176);
  return result;
}
