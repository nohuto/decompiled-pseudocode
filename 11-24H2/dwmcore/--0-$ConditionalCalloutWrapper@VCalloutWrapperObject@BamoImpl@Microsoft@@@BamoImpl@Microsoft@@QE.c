/*
 * XREFs of ??0?$ConditionalCalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18026D8F8
 * Callers:
 *     ?OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18026F550 (-OnZeroReferenceCount@BaseBamoPeerImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180270BB0 (-OnZeroReferenceCount@BamoStubImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 *     ?OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x18027D240 (-OnZeroReferenceCount@BamoProxyImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801A7DD8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?OnCallProlog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x18026EFEC (-OnCallProlog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

Microsoft::BamoImpl::CalloutWrapperObject *__fastcall Microsoft::BamoImpl::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::ConditionalCalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        Microsoft::BamoImpl::CalloutWrapperObject *a1,
        Microsoft::BamoImpl::BaseBamoConnectionImpl *a2)
{
  *((_QWORD *)a1 + 1) = 0LL;
  *(_QWORD *)a1 = 0LL;
  if ( a2 && Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock(a2) && !*((_DWORD *)a2 + 47) )
  {
    *(_QWORD *)a1 = a2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(a2);
  }
  if ( *((_QWORD *)a1 + 1) )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallProlog(a1);
  return a1;
}
