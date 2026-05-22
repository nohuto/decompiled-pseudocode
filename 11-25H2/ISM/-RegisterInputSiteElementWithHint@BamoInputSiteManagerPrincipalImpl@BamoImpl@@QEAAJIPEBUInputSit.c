/*
 * XREFs of ?RegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@QEAAJIPEBUInputSiteId@@@Z @ 0x180040BB0
 * Callers:
 *     ?Thunk_RegisterInputSiteElementWithHint_268@?$IInputSiteManagerPrincipal_Receive@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18012E140 (-Thunk_RegisterInputSiteElementWithHint_268@-$IInputSiteManagerPrincipal_Receive@VBamoInputSiteM.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180040D40 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x180040D74 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180045F98 (--1-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputSiteManagerPrincipalImpl@1@@Z @ 0x18004632C (--0-$CalloutWrapper@VBamoInputSiteManagerPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVB.c)
 *     ?LogReceiveRegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18008AEE0 (-LogReceiveRegisterInputSiteElementWithHint@BamoInputSiteManagerPrincipalImpl@BamoImpl@@AEAAXPEA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputSiteManagerPrincipalImpl::RegisterInputSiteElementWithHint(
        BamoImpl::BamoInputSiteManagerPrincipalImpl *this,
        unsigned int a2,
        const struct InputSiteId *a3)
{
  int v6; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  const struct InputSiteId *v8; // r8
  Microsoft::BamoImpl::BaseBamoPeerImpl *v9; // r14
  struct Microsoft::BamoImpl::ConnectionIndirector **v10; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rbx
  struct BamoInputSiteElementProxy *v12; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-58h]
  _BYTE v19[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v21; // [rsp+98h] [rbp+20h]

  v6 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v21 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v9 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v10 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v9 + 3) + 32LL);
  v11 = 0LL;
  v12 = 0LL;
  if ( !a2 )
    goto LABEL_4;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v9, a2);
  v11 = Proxy;
  if ( Proxy )
  {
    v12 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_4:
    BamoImpl::BamoInputSiteManagerPrincipalImpl::LogReceiveRegisterInputSiteElementWithHint(this, v12, v8);
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(
        v19,
        v10,
        this);
      v15 = (*(__int64 (__fastcall **)(char *, __int64, struct BamoInputSiteElementProxy *, const struct InputSiteId *))(*((_QWORD *)this - 2) + 120LL))(
              (char *)this - 16,
              v21,
              v12,
              a3);
      v6 = v15;
      if ( v15 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v10, 0x87B2080C, 0);
      }
      else if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x7B06,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBam"
                        "os_Shared.bamo.h",
          (const char *)(unsigned int)v15,
          v18);
      }
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteManagerPrincipalImpl>(v19);
    }
    if ( v11 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7B15,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
        (const char *)(unsigned int)v6,
        v18);
    return (unsigned int)v6;
  }
  v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v9 + 3) + 32LL),
          0x87B2080C,
          0);
  v17 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7AF0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos_Shared.bamo.h",
      (const char *)(unsigned int)v16,
      v18);
  return v17;
}
