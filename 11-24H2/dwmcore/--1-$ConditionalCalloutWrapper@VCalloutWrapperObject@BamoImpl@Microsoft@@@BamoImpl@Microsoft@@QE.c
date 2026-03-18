/*
 * XREFs of ??1?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18026DA24
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18026F550 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180270BB0 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18027D240 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7E04 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x18026EFC8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

void __fastcall Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  _QWORD *v4; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rcx

  v4 = a1 + 1;
  if ( a1[1] )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog((Microsoft::BamoImpl::CalloutWrapperObject *)a1);
  v5 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)*a1;
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    v4,
    a2,
    a3,
    a4);
}
