/*
 * XREFs of ?AllocatePeerThunk@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x1802786A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF6D4 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801CF974 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::AllocatePeerThunk(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  __int64 v2; // rbx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  struct Microsoft::Bamo::BaseBamoPeer *v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 2);
  v6 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v5,
    this);
  LODWORD(v2) = (*(__int64 (__fastcall **)(__int64, struct Microsoft::Bamo::BaseBamoPeer **))(*(_QWORD *)v2 + 80LL))(
                  v2,
                  &v6);
  *a2 = v6;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v5);
  return (unsigned int)v2;
}
