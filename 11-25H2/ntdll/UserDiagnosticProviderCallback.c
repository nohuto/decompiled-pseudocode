/*
 * XREFs of UserDiagnosticProviderCallback @ 0x180147BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UserDiagnosticProviderCallback(LPCGUID a1, int a2)
{
  if ( a2 == 1 )
  {
    g_isErrorOriginProviderEnabled = 1;
  }
  else if ( !a2 )
  {
    g_isErrorOriginProviderEnabled = 0;
  }
}
