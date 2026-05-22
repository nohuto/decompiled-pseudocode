/*
 * XREFs of ?CreateMagnifierControllerProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x18011457C
 * Callers:
 *     ?Materialize_BamoMagnifierControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011C610 (-Materialize_BamoMagnifierControllerProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180045AEC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180045F5C (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateMagnifierControllerProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp+10h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v5,
    this);
  v6 = operator new(0x48uLL);
  memset_0(v6, 0, 0x48uLL);
  v6[1] = &BamoMagnifierControllerProxy::`vftable'{for `IMagnifierControllerProxy'};
  *((_DWORD *)v6 + 6) = 0;
  v6[4] = 0LL;
  *((_DWORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 11) = 0;
  v6[2] = &BamoImpl::BamoMagnifierControllerProxyImpl::`vftable';
  *((_WORD *)v6 + 24) = 0;
  *((_BYTE *)v6 + 50) = 0;
  *v6 = &MagnifierControllerProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v6[1] = &MagnifierControllerProxy::`vftable'{for `IMagnifierControllerProxy'};
  *((_BYTE *)v6 + 56) = 1;
  *(_QWORD *)((char *)v6 + 60) = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v5);
  *(_QWORD *)a3 = v6;
}
