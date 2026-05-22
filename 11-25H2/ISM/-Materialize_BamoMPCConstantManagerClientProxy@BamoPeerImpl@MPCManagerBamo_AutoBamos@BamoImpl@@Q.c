/*
 * XREFs of ?Materialize_BamoMPCConstantManagerClientProxy@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1800B97A4
 * Callers:
 *     ?Thunk_Materialize_BamoMPCConstantManagerClientProxy_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800BB110 (-Thunk_Materialize_BamoMPCConstantManagerClientProxy_11@-$IBamoPeer_MPCManagerBamo_AutoBamos_Rec.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x18002EC58 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x180045AEC (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180045F5C (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::Materialize_BamoMPCConstantManagerClientProxy(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-38h]
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _QWORD *v11; // [rsp+60h] [rbp+8h]

  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v9,
    *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 3) + 32LL));
  v11 = operator new(0x38uLL);
  *v11 = &BamoMPCConstantManagerClientProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v11[1] = &BamoMPCConstantManagerClientProxy::`vftable'{for `IMPCConstantManagerClientProxy'};
  *((_DWORD *)v11 + 6) = 0;
  v11[4] = 0LL;
  *((_DWORD *)v11 + 10) = 0;
  *((_DWORD *)v11 + 11) = 0;
  v11[2] = &BamoImpl::BamoMPCConstantManagerClientProxyImpl::`vftable';
  v11[6] = 0LL;
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v9);
  v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 56LL))(v11);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v4 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v4 + 24) = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((unsigned int *)this + 9),
         a2,
         v4);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3288,
      (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
