/*
 * XREFs of ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x1805B4D98
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18016F840 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 *     _anonymous_namespace_::CreateDefaultLayout @ 0x1805B54A0 (_anonymous_namespace_--CreateDefaultLayout.c)
 * Callees:
 *     ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x180224EA0 (--_ESnapLayoutBase@@UEAAPEAXI@Z.c)
 */

SnapLayoutBase *__fastcall std::unique_ptr<DefaultSnapLayout>::~unique_ptr<DefaultSnapLayout>(SnapLayoutBase **a1)
{
  SnapLayoutBase *v1; // rcx
  SnapLayoutBase *result; // rax

  v1 = *a1;
  if ( v1 )
    return SnapLayoutBase::`vector deleting destructor'(v1, 1);
  return result;
}
