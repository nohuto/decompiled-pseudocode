/*
 * XREFs of ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x140328D04
 * Callers:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x140328560 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPRESENT::ClipIntervals(int *a1, int *a2, int *a3, int *a4, int a5, int a6)
{
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  int v14; // r11d
  int v15; // r9d

  if ( *a1 >= *a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10255;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"*low1 < *high1", 10255LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *a3 >= *a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10256;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"*low2 < *high2", 10256LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 >= a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10257;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"low < high", 10257LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 > *a1 )
    *a1 = a5;
  v10 = *a2;
  if ( a6 < *a2 )
  {
    *a2 = a6;
    v10 = a6;
  }
  v11 = *a1;
  v12 = a6 - a5;
  if ( v10 - *a1 != a6 - a5 )
  {
    v13 = *a4;
    v14 = *a4;
    v15 = *a4 - *a3;
    if ( a5 < v11 )
    {
      *a3 += (v15 * (v11 - a5) + v12 - 1) / v12;
      v13 = *a4;
      v14 = *a4;
    }
    if ( a6 > *a2 )
    {
      v13 = v14 - v15 * (a6 - *a2) / v12;
      *a4 = v13;
    }
    if ( *a3 == v13 )
    {
      if ( *a1 - a5 < a6 - *a2 )
        *a4 = v13 + 1;
      else
        --*a3;
    }
  }
}
