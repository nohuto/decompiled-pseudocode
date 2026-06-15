/*
 * XREFs of ??1?$CAutoPtr@UPropertyChangedContext@@@ATL@@QEAA@XZ @ 0x180073490
 * Callers:
 *     _CMonitorManager::OnPropertyValueChanged_::_1_::dtor$1 @ 0x1801698CF (_CMonitorManager--OnPropertyValueChanged_--_1_--dtor$1.c)
 * Callees:
 *     ??_GPropertyChangedContext@@QEAAPEAXI@Z @ 0x18005FF44 (--_GPropertyChangedContext@@QEAAPEAXI@Z.c)
 */

PropertyChangedContext *__fastcall ATL::CAutoPtr<PropertyChangedContext>::~CAutoPtr<PropertyChangedContext>(
        PropertyChangedContext **a1)
{
  PropertyChangedContext *v2; // rcx
  PropertyChangedContext *result; // rax

  v2 = *a1;
  if ( v2 )
    result = PropertyChangedContext::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
