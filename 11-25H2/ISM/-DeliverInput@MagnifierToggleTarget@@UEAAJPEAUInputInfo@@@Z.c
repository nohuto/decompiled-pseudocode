/*
 * XREFs of ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801A7440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z @ 0x180156380 (-ToggleDetected@BamoMagnifierControllerProxy@@UEAAJAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801A7168 (-AveragePoint@@YA-AUPoint@Foundation@Windows@@PEBUInputInfo@@V-$ComPtr@VInputSite@@@WRL@Microsof.c)
 *     ?SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z @ 0x1801A76C8 (-SendToggle@Magnifier@InputTraceLogging@@SAXAEBUPoint@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall MagnifierToggleTarget::DeliverInput(MagnifierToggleTarget *this, struct InputInfo *a2)
{
  BamoMagnifierControllerProxy *v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 32) && *((_DWORD *)a2 + 79) == 2 )
  {
    v6 = *((_QWORD *)this + 3);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v6);
    v6 = AveragePoint((__int64)a2, &v6);
    InputTraceLogging::Magnifier::SendToggle((const struct Windows::Foundation::Point *)&v6);
    v4 = (BamoMagnifierControllerProxy *)(*((_QWORD *)this + 2) + 8LL);
    *((_BYTE *)this + 32) = 1;
    BamoMagnifierControllerProxy::ToggleDetected(v4, (const struct Windows::Foundation::Point *)&v6);
  }
  return 0LL;
}
