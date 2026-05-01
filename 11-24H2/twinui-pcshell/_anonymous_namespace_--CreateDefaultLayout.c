/*
 * XREFs of _anonymous_namespace_::CreateDefaultLayout @ 0x1805B54A0
 * Callers:
 *     ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18016F840 (-CalculateSnapRegion@SnapLayoutProvider@@QEAA-AUCalculatedSnapRegion@@AEBUSnapRegionCalculationA.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x1805B4D98 (--1-$unique_ptr@VDefaultSnapLayout@@U-$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall anonymous_namespace_::CreateDefaultLayout(_QWORD *a1, char a2)
{
  _QWORD *v4; // rax
  SnapLayoutBase *v6; // [rsp+50h] [rbp+18h] BYREF

  v4 = operator new(8uLL);
  v6 = 0LL;
  if ( a2 )
    *v4 = &TopBottomSnapLayout::`vftable';
  else
    *v4 = &DefaultSnapLayout::`vftable';
  *a1 = v4;
  std::unique_ptr<DefaultSnapLayout>::~unique_ptr<DefaultSnapLayout>(&v6);
  return a1;
}
