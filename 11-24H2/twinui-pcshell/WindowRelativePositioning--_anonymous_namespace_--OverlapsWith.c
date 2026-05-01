/*
 * XREFs of WindowRelativePositioning::_anonymous_namespace_::OverlapsWith @ 0x180516C30
 * Callers:
 *     ?GetAdjacentPosition@WindowRelativePositioning@@YA?AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApplicationViewCollection@@0@Z @ 0x180516594 (-GetAdjacentPosition@WindowRelativePositioning@@YA-AUtagRECT@@AEBU2@AEBUtagSIZE@@0_NPEBGPEAUIApp.c)
 * Callees:
 *     <none>
 */

char __fastcall WindowRelativePositioning::_anonymous_namespace_::OverlapsWith(int *a1, _DWORD **a2, int a3)
{
  int v3; // r11d
  int v4; // ebx
  _DWORD *i; // r9
  int v6; // eax
  int v7; // eax

  v3 = *a1;
  v4 = a1[1];
  for ( i = *a2; i != a2[1]; i += 4 )
  {
    v6 = v3 - *i;
    if ( v6 < 0 )
      v6 = *i - v3;
    if ( v6 < a3 )
    {
      v7 = v4 - i[1];
      if ( v7 < 0 )
        v7 = i[1] - v4;
      if ( v7 < a3 )
        return 1;
    }
  }
  return 0;
}
