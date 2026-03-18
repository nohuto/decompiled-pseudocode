/*
 * XREFs of ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x14030B3B4
 * Callers:
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x14030AC10 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
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
    WdLogGlobalForLineNumber = 10305;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"*low1 < *high1", 10305LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *a3 >= *a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10306;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"*low2 < *high2", 10306LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a5 >= a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10307;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"low < high", 10307LL, 0LL, 0LL, 0LL, 0LL);
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
