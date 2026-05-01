/*
 * XREFs of ?GetAppChromePolicy@ApplicationViewOperation@@UEAAJPEAW4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x18021DE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetAppChromePolicy(
        ApplicationViewOperation *this,
        enum APP_CHROME_CONFIGURATION_POLICY *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 29);
  return 0LL;
}
