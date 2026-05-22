/*
 * XREFs of ?CreateDataProviderRegistrarProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18008CB60
 * Callers:
 *     ?Materialize_BamoDataProviderRegistrarProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18008CAB8 (-Materialize_BamoDataProviderRegistrarProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180045AEC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046AC0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800AC3E8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BamoImpl::CreateDataProviderRegistrarProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct dataprovider_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  __int64 v5; // rdx
  Microsoft::BamoImpl::CalloutWrapperObject *v6; // rcx
  _OWORD *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)&v10,
    this);
  v7 = operator new(0x30uLL);
  *v7 = 0LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  *((_QWORD *)v7 + 1) = &DataProviderRegistrarProxy::`vftable'{for `IDataProviderRegistrarProxy'};
  *((_DWORD *)v7 + 6) = 0;
  *((_QWORD *)v7 + 4) = 0LL;
  *((_DWORD *)v7 + 10) = 0;
  *((_DWORD *)v7 + 11) = 0;
  *((_QWORD *)v7 + 2) = &BamoImpl::BamoDataProviderRegistrarProxyImpl::`vftable';
  *(_QWORD *)v7 = &DataProviderRegistrarProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v7 + 1) = &DataProviderRegistrarProxy::`vftable'{for `IDataProviderRegistrarProxy'};
  if ( v11 && (v12 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v6);
  if ( v10 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v10);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v11,
    v5,
    v8,
    v9);
  *(_QWORD *)a3 = v7;
}
