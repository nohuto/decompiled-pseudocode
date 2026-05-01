/*
 * XREFs of ?TryGetCustomDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@PEBGV234@@Z @ 0x1801D9AE0
 * Callers:
 *     ?GetInvokeDuration@SnapFlyoutHost@@CA?AV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@XZ @ 0x1801D9A5C (-GetInvokeDuration@SnapFlyoutHost@@CA-AV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@@XZ.c)
 *     ?StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B4230 (-StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SnapFlyoutHost::TryGetCustomDuration(_QWORD *a1, const WCHAR *a2, __int64 a3)
{
  DWORD v6[6]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0;
  v6[0] = 4;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
         a2,
         0x10u,
         0LL,
         &v7,
         v6)
    || !v7 )
  {
    *a1 = a3;
  }
  else
  {
    *a1 = v7;
  }
  return a1;
}
