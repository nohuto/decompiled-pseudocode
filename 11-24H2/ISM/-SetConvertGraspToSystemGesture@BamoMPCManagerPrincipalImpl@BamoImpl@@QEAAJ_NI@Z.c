/*
 * XREFs of ?SetConvertGraspToSystemGesture@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1800B8AC4
 * Callers:
 *     ?Thunk_SetConvertGraspToSystemGesture_43@?$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800B8F30 (-Thunk_SetConvertGraspToSystemGesture_43@-$IMPCManagerPrincipal_Receive@VBamoMPCManagerPrincipal.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D7D0 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x18004257C (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800429EC (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::SetConvertGraspToSystemGesture(
        BamoImpl::BamoMPCManagerPrincipalImpl *this,
        char a2,
        unsigned int a3)
{
  int v6; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v8; // r15
  __int64 v9; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector **v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  int v14; // [rsp+20h] [rbp-48h]
  _BYTE v15[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v8 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v9 = *(_QWORD *)(*((_QWORD *)CurrentCaller + 4) + 24LL);
  v10 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(v9 + 32);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
      (__int64)v15,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v9 + 32));
    LOBYTE(v11) = a2;
    v12 = (*(__int64 (__fastcall **)(char *, __int64, __int64, _QWORD))(*((_QWORD *)this - 2) + 128LL))(
            (char *)this - 16,
            v8,
            v11,
            a3);
    v6 = v12;
    if ( v12 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v10, 0x87B2080C, 0);
    }
    else if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A00,
        (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManage"
             "rBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v12,
        v14);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v15);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A04,
        (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMa"
                 "nagerBamo.MPCManagerBamo.bamo.h",
        (const char *)(unsigned int)v6);
  }
  return (unsigned int)v6;
}
