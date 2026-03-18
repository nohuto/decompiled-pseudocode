/*
 * XREFs of ?GetApplyWindowActionErrorString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionError@1@@Z @ 0x1402C99C0
 * Callers:
 *     ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402C9084 (-ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@Advance.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall AdvancedWindowPos::GetApplyWindowActionErrorString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx

  if ( a1 <= 19 )
  {
    if ( a1 == 19 )
      return L"normal rect without placement state";
    if ( a1 > 10 )
    {
      v10 = a1 - 11;
      if ( !v10 )
        return L"display change with wrong topology id";
      v11 = v10 - 1;
      if ( !v11 )
        return L"invalid placement state";
      v12 = v11 - 1;
      if ( !v12 )
        return L"move to monitor with maximize state and position";
      v13 = v12 - 1;
      if ( !v13 )
        return L"move to monitor with arrange state and position";
      v14 = v13 - 1;
      if ( !v14 )
        return L"changing state with size or pos but not both";
      v15 = v14 - 1;
      if ( !v15 )
        return L"arrange without a position or size";
      v16 = v15 - 1;
      if ( !v16 )
        return L"frame bounds without position or size";
      if ( v16 == 1 )
        return L"invalid insert after window";
    }
    else
    {
      if ( a1 == 10 )
        return L"display change without pending state";
      v1 = a1 - 1;
      if ( !v1 )
        return L"current thread is not Per-Monitor DPI aware";
      v2 = v1 - 1;
      if ( !v2 )
        return L"invalid window handle";
      v3 = v2 - 1;
      if ( !v3 )
        return L"window is not a top level window";
      v4 = v3 - 1;
      if ( !v4 )
        return L"LAF check failed (limited access feature)";
      v5 = v4 - 1;
      if ( !v5 )
        return L"off thread without IAM access";
      v6 = v5 - 1;
      if ( !v6 )
        return L"recalc re-run request not supported off thread";
      v7 = v6 - 1;
      if ( !v7 )
        return L"recalc re-run but no pending recalc state";
      v8 = v7 - 1;
      if ( !v8 )
        return L"system operation without pending state";
      if ( v8 == 1 )
        return L"display change and no intercept window property";
    }
    return L"Unknown error reason";
  }
  if ( a1 <= 28 )
  {
    if ( a1 == 28 )
      return L"invalid dpi";
    v17 = a1 - 20;
    if ( !v17 )
      return L"normal rect with normal state and position or size";
    v18 = v17 - 1;
    if ( !v18 )
      return L"monitor scale and monitor move";
    v19 = v18 - 1;
    if ( !v19 )
      return L"monitor scale without position or size";
    v20 = v19 - 1;
    if ( !v20 )
      return L"monitor scale without normal placement state";
    v21 = v20 - 1;
    if ( !v21 )
      return L"monitor scale and fit to monitor";
    v22 = v21 - 1;
    if ( !v22 )
      return L"monitor scale and dpi";
    v23 = v22 - 1;
    if ( !v23 )
      return L"monitor scale and work area";
    if ( v23 == 1 )
      return L"empty work area";
    return L"Unknown error reason";
  }
  v24 = a1 - 29;
  if ( !v24 )
    return L"restore from min flags without min state";
  v25 = v24 - 1;
  if ( !v25 )
    return L"restore to normal and restore to arrange";
  v26 = v25 - 1;
  if ( !v26 )
    return L"restore to arrange without position or size";
  v27 = v26 - 1;
  if ( !v27 )
    return L"restore to max and restore to normal";
  v28 = v27 - 1;
  if ( !v28 )
    return L"restore to max and restore to arrange";
  v29 = v28 - 1;
  if ( !v29 )
    return L"restore to arrange and restore to normal";
  v30 = v29 - 1;
  if ( !v30 )
    return L"restore to max and restore to arrange";
  if ( v30 != 1 )
    return L"Unknown error reason";
  return L"off thread display change but recalc for window is enabled";
}
