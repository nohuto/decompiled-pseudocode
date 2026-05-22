/*
 * XREFs of ?ComputePnpActionAndInputType@Win32kInterop@@AEBA?AW4PnPHandlingAction@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@PEAW4InputType@@@Z @ 0x180099FE4
 * Callers:
 *     _lambda_2b41a082a50d31d24644deaedcc451d5_::operator() @ 0x1800507DC (_lambda_2b41a082a50d31d24644deaedcc451d5_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::ComputePnpActionAndInputType(__int64 a1, __int64 a2, _DWORD *a3)
{
  if ( *(_DWORD *)a2 )
  {
    switch ( *(_DWORD *)a2 )
    {
      case 1:
        *a3 = 2;
        return 1LL;
      case 2:
        *a3 = 4;
        return 1LL;
      case 4:
        *a3 = 32;
        return 1LL;
    }
  }
  else if ( *(_WORD *)(a2 + 20) == 13 && *(_WORD *)(a2 + 22) == 15 )
  {
    *a3 = 2048;
    return 1LL;
  }
  *a3 = 0;
  return 0LL;
}
