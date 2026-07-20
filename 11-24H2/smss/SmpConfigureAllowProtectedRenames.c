/*
 * XREFs of SmpConfigureAllowProtectedRenames @ 0x140013B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureAllowProtectedRenames(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  bool v4; // al

  v4 = 0;
  if ( a4 == 4 )
    v4 = *a3 != 0;
  SmpAllowProtectedRenames = v4;
  return 0LL;
}
