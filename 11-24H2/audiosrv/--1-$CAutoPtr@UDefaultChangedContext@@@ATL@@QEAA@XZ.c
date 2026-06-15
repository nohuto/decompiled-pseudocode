/*
 * XREFs of ??1?$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ @ 0x1800734B8
 * Callers:
 *     _CMonitorManager::OnDefaultDeviceChanged_::_1_::dtor$1 @ 0x18016BE1A (_CMonitorManager--OnDefaultDeviceChanged_--_1_--dtor$1.c)
 * Callees:
 *     ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180117914 (--_GDefaultChangedContext@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<DefaultChangedContext>::~CAutoPtr<DefaultChangedContext>(
        DefaultChangedContext **a1,
        unsigned int a2)
{
  DefaultChangedContext *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = DefaultChangedContext::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
