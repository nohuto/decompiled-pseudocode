/*
 * XREFs of ?AllocatePeerThunk@BamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18006C9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800454A8 (--1-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@X.c)
 *     ??0?$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoConnectionImpl@ISMBamos_AutoBamos@1@@Z @ 0x18006CA14 (--0-$CalloutWrapper@VBamoConnectionImpl@ISMBamos_AutoBamos@BamoImpl@@@BamoImpl@Microsoft@@QEAA@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl::AllocatePeerThunk(
        BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  __int64 v3; // rbx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  struct Microsoft::Bamo::BaseBamoPeer *v6; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 2);
  v6 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>(
    v5,
    this,
    this);
  LODWORD(v3) = (*(__int64 (__fastcall **)(__int64, struct Microsoft::Bamo::BaseBamoPeer **))(*(_QWORD *)v3 + 96LL))(
                  v3,
                  &v6);
  *a2 = v6;
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>::~CalloutWrapper<BamoImpl::ISMBamos_AutoBamos::BamoConnectionImpl>((__int64)v5);
  return (unsigned int)v3;
}
