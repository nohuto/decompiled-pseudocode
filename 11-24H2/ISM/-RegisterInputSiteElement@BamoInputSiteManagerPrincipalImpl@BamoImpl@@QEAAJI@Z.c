/*
 * XREFs of ?RegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18003D4C8
 * Callers:
 *     ?Thunk_RegisterInputSiteElement_8@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180077680 (-Thunk_RegisterInputSiteElement_8@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrin.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D7D0 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D804 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180042A28 (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x180042DBC (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ?LogReceiveRegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputSiteElementProxy@@@Z @ 0x18008BC64 (-LogReceiveRegisterInputSiteElement@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInp.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElement(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v6; // r13
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // r14
  struct Microsoft::BamoImpl::ConnectionIndirector **v8; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v9; // rbx
  struct BamoInputSiteElementProxy *v10; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v12; // eax
  int v14; // eax
  unsigned int v15; // ebx
  int v16[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v8 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v7 + 3) + 32LL);
  v9 = 0LL;
  v10 = 0LL;
  if ( !a2 )
    goto LABEL_4;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v7, a2);
  v9 = Proxy;
  if ( Proxy )
  {
    v10 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_4:
    BamoImpl::BamoInputSiteManagerPrincipalImpl::LogReceiveRegisterInputSiteElement(this, v10);
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        v16,
        v8,
        this);
      v12 = (*(__int64 (__fastcall **)(char *, __int64, struct BamoInputSiteElementProxy *))(*((_QWORD *)this - 2)
                                                                                           + 112LL))(
              (char *)this - 16,
              v6,
              v10);
      v4 = v12;
      if ( v12 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v8, 0x87B2080C, 0);
      }
      else if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x80F3,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBam"
                        "os_Shared.bamo.h",
          (const char *)(unsigned int)v12,
          v16[0]);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(v16);
    }
    if ( v9 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v9);
    if ( v4 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8102,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v4,
        v16[0]);
    return (unsigned int)v4;
  }
  v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v7 + 3) + 32LL),
          0x87B2080C,
          0);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80DD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v14,
      v16[0]);
  return v15;
}
