/*
 * XREFs of ?GetMonitorOrientationFromGdiRotation@@YA_NKAEAW4_D3DKMDT_MONITOR_ORIENTATION@@@Z @ 0x14004F000
 * Callers:
 *     _lambda_f44fa2b0187a36f67bd7075047dd61ad_::operator() @ 0x1401BF5A4 (_lambda_f44fa2b0187a36f67bd7075047dd61ad_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall GetMonitorOrientationFromGdiRotation(int a1, enum _D3DKMDT_MONITOR_ORIENTATION *a2)
{
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    *a2 = D3DKMDT_MO_0DEG;
    return 1;
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    *a2 = D3DKMDT_MO_90DEG;
    return 1;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    *a2 = D3DKMDT_MO_180DEG;
    return 1;
  }
  if ( v4 == 1 )
  {
    *a2 = D3DKMDT_MO_270DEG;
    return 1;
  }
  *a2 = D3DKMDT_MO_UNINITIALIZED;
  return 0;
}
