/*
 * XREFs of ?CreateControllerNavigationOverrideProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180113E20
 * Callers:
 *     ?Materialize_BamoControllerNavigationOverrideProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011AD4C (-Materialize_BamoControllerNavigationOverrideProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEA.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180045AEC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180045F5C (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateControllerNavigationOverrideProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  char *v6; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v5,
    this);
  v6 = (char *)operator new(0x58uLL);
  *((_QWORD *)v6 + 1) = &BamoControllerNavigationOverrideProxy::`vftable'{for `IControllerNavigationOverrideProxy'};
  *((_DWORD *)v6 + 6) = 0;
  *((_QWORD *)v6 + 4) = 0LL;
  *((_DWORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 11) = 0;
  *((_QWORD *)v6 + 2) = &BamoImpl::BamoControllerNavigationOverrideProxyImpl::`vftable';
  v6[48] = 0;
  *((_DWORD *)v6 + 13) = 0;
  *(_OWORD *)(v6 + 56) = 0LL;
  *((_QWORD *)v6 + 9) = 0LL;
  *((_QWORD *)v6 + 10) = 0LL;
  *(_QWORD *)v6 = &ControllerNavigationOverrideProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v6 + 1) = &BamoControllerNavigationOverrideProxy::`vftable'{for `IControllerNavigationOverrideProxy'};
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v5);
  *(_QWORD *)a3 = v6;
}
