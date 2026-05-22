/*
 * XREFs of ?CreateAnimationTargetClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x180093D54
 * Callers:
 *     ?Materialize_BamoAnimationTargetClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x18002D554 (-Materialize_BamoAnimationTargetClientProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180045AEC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180046AC0 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ @ 0x1800AC3E8 (-OnCallEpilog@CalloutWrapperObject@BamoImpl@Microsoft@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall BamoImpl::CreateAnimationTargetClientProxy(
        BamoImpl *this,
        struct Microsoft::BamoImpl::BaseBamoConnectionImpl *a2,
        struct ISMBamos_AutoBamos::BamoPeer *a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  Microsoft::BamoImpl::CalloutWrapperObject *v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  *(_QWORD *)a3 = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)&v10,
    this);
  v5 = operator new(0x58uLL);
  memset_0(v5, 0, 0x58uLL);
  v5[1] = &AnimationTargetClientProxy::`vftable'{for `IAnimationTargetClientProxy'};
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = 0;
  v5[2] = &BamoImpl::BamoAnimationTargetClientProxyImpl::`vftable';
  v5[6] = 0LL;
  *(_OWORD *)(v5 + 7) = 0LL;
  *v5 = &AnimationTargetClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &AnimationTargetClientProxy::`vftable'{for `IAnimationTargetClientProxy'};
  if ( v11 && (v12 & 2) != 0 )
    Microsoft::BamoImpl::CalloutWrapperObject::OnCallEpilog(v7);
  if ( v10 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v10);
  wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(
    &v11,
    v6,
    v8,
    v9);
  *(_QWORD *)a3 = v5;
}
