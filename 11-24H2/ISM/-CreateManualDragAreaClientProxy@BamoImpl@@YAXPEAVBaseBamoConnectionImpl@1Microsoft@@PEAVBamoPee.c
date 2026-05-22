/*
 * XREFs of ?CreateManualDragAreaClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1801161D0
 * Callers:
 *     ?Materialize_BamoManualDragAreaClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18011E458 (-Materialize_BamoManualDragAreaClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18004257C (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800429EC (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

void __fastcall BamoImpl::CreateManualDragAreaClientProxy(
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
  v6 = operator new(0x50uLL);
  memset_0(v6, 0, 0x50uLL);
  v6[1] = &BamoManualDragAreaClientProxy::`vftable'{for `IManualDragAreaClientProxy'};
  *((_DWORD *)v6 + 6) = 0;
  v6[4] = 0LL;
  *((_DWORD *)v6 + 10) = 0;
  *((_DWORD *)v6 + 11) = 0;
  v6[2] = &BamoImpl::BamoManualDragAreaClientProxyImpl::`vftable';
  *((_OWORD *)v6 + 3) = 0LL;
  *((_DWORD *)v6 + 16) = 0;
  *v6 = &ManualDragAreaClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v6[1] = &BamoManualDragAreaClientProxy::`vftable'{for `IManualDragAreaClientProxy'};
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v5);
  *(_QWORD *)a3 = v6;
}
