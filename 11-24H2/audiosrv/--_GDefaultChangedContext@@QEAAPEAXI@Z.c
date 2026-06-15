/*
 * XREFs of ??_GDefaultChangedContext@@QEAAPEAXI@Z @ 0x180117914
 * Callers:
 *     ?OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180063E60 (-OnDefaultDeviceChanged@CMonitorManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4.c)
 *     ??1?$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ @ 0x1800734B8 (--1-$CAutoPtr@UDefaultChangedContext@@@ATL@@QEAA@XZ.c)
 *     ?HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801190F0 (-HandleDefaultDeviceChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DefaultChangedContext@@QEAA@XZ @ 0x1801176BC (--1DefaultChangedContext@@QEAA@XZ.c)
 */

DefaultChangedContext *__fastcall DefaultChangedContext::`scalar deleting destructor'(DefaultChangedContext *this)
{
  DefaultChangedContext::~DefaultChangedContext(this);
  operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
