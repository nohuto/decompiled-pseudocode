/*
 * XREFs of ??$Resolve@VIOverlayMonitorTarget@@@IUnknownWeakRef@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x1801C5984
 * Callers:
 *     ?GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z @ 0x1801C5270 (-GetOverlayMonitorTarget@CComputeScribbleRenderer@@QEAAJPEAPEAVIOverlayMonitorTarget@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IUnknownWeakRef::Resolve<IOverlayMonitorTarget>(CMILCOMWeakRef *a1, void **a2)
{
  __int64 (__fastcall *v2)(CMILCOMWeakRef *__hidden, const struct _GUID *, void **); // rax

  v2 = *(__int64 (__fastcall **)(CMILCOMWeakRef *__hidden, const struct _GUID *, void **))(*(_QWORD *)a1 + 24LL);
  if ( v2 == CMILCOMWeakRef::Resolve )
    return CMILCOMWeakRef::Resolve(a1, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, a2);
  else
    return v2(a1, &GUID_8ddf9ce7_e3f9_4bcf_983c_9c1b1b407c97, a2);
}
