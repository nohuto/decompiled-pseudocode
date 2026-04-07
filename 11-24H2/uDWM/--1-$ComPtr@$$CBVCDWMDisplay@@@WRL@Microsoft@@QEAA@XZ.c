/*
 * XREFs of ??1?$ComPtr@$$CBVCDWMDisplay@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B8478
 * Callers:
 *     _CDesktopManager::GetDisplaySDRWhiteLevel_::_1_::dtor$1 @ 0x1800F8537 (_CDesktopManager--GetDisplaySDRWhiteLevel_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18005825C (-Release@CDWMDisplay@@QEBAKXZ.c)
 */

CDWMDisplay *__fastcall Microsoft::WRL::ComPtr<CDWMDisplay const>::~ComPtr<CDWMDisplay const>(CDWMDisplay **a1)
{
  CDWMDisplay *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CDWMDisplay *)CDWMDisplay::Release(result);
  }
  return result;
}
