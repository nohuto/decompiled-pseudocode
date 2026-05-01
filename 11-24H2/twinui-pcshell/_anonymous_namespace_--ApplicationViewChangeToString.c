/*
 * XREFs of _anonymous_namespace_::ApplicationViewChangeToString @ 0x1804FA53C
 * Callers:
 *     ?OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1805032C0 (-OnApplicationViewChanged@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall anonymous_namespace_::ApplicationViewChangeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 10 )
  {
    if ( a1 == 10 )
      return L"AVC_SHOW_IN_SWITCHERS";
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return L"AVC_NEEDINESS";
      v6 = v5 - 1;
      if ( !v6 )
        return L"AVC_FOCUS";
      v7 = v6 - 1;
      if ( !v7 )
        return L"AVC_PENDING_FOCUS";
      if ( v7 == 1 )
        return L"AVC_UNFOCUS";
    }
    else
    {
      if ( a1 == 5 )
        return L"AVC_HIDDEN";
      if ( !a1 )
        return L"AVC_ADDED";
      v1 = a1 - 1;
      if ( !v1 )
        return L"AVC_REMOVED";
      v2 = v1 - 1;
      if ( !v2 )
        return L"AVC_FORGOTTEN";
      v3 = v2 - 1;
      if ( !v3 )
        return L"AVC_VISIBLE";
      if ( v3 == 1 )
        return L"AVC_HIDDEN";
    }
    return 0LL;
  }
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      return L"AVC_TRAY_CHANGED";
    v8 = a1 - 11;
    if ( !v8 )
      return L"AVC_REMOVED_FROM_SWITCHERS";
    v9 = v8 - 1;
    if ( !v9 )
      return L"AVC_THUMBNAIL_WINDOW";
    v10 = v9 - 1;
    if ( !v10 )
      return L"AVC_MONITOR_CHANGED";
    v11 = v10 - 1;
    if ( !v11 )
      return L"AVC_WINDOW_CHANGED";
    if ( v11 == 1 )
      return L"AVC_SIZE_CONSTRAINTS";
    return 0LL;
  }
  v12 = a1 - 17;
  if ( !v12 )
    return L"AVC_OWNER_CHANGED";
  v13 = v12 - 1;
  if ( !v13 )
    return L"AVC_ENTERPRISEID_CHANGED";
  v14 = v13 - 1;
  if ( !v14 )
    return L"AVC_ENTERPRISE_CHROME_PREFERENCE_CHANGED";
  if ( v14 != 1 )
    return 0LL;
  return L"AVC_CANTAB";
}
