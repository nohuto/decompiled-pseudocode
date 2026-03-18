/*
 * XREFs of ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x14003FCA8
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003F550 (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14003F8E0 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsCodePointTypeNoisy(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  if ( a1 <= 42 )
  {
    if ( a1 == 42 )
      return 1LL;
    v9 = a1 - 17;
    if ( !v9 )
      return 1LL;
    v10 = v9 - 8;
    if ( !v10 )
      return 1LL;
    v11 = v10 - 3;
    if ( !v11 )
      return 1LL;
    v12 = v11 - 4;
    if ( !v12 )
      return 1LL;
    v13 = v12 - 1;
    if ( !v13 )
      return 1LL;
    v14 = v13 - 4;
    if ( !v14 )
      return 1LL;
    v15 = v14 - 1;
    if ( !v15 )
      return 1LL;
    return v15 == 1;
  }
  else
  {
    v1 = a1 - 60;
    if ( !v1 )
      return 1LL;
    v2 = v1 - 17;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 40;
    if ( !v3 )
      return 1LL;
    v4 = v3 - 1;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 12;
    if ( !v5 )
      return 1LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 1LL;
    return v6 == 2;
  }
}
