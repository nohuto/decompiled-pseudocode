/*
 * XREFs of ?UpdateInputInjectionClient@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x180041A18
 * Callers:
 *     ?Thunk_UpdateInputInjectionClient_8@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180073120 (-Thunk_UpdateInputInjectionClient_8@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyI.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18012E5D0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x180040D74 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180045184 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180045CF8 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LogOnInputInjectionClientChanging@BamoInputSiteElementProxy@@AEAAXPEAVBamoInputInjectionClientProxy@@@Z @ 0x18008B3C0 (-LogOnInputInjectionClientChanging@BamoInputSiteElementProxy@@AEAAXPEAVBamoInputInjectionClientP.c)
 *     ?LogOnInputInjectionClientChanged@BamoInputSiteElementProxy@@AEAAXXZ @ 0x18008BE00 (-LogOnInputInjectionClientChanged@BamoInputSiteElementProxy@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateInputInjectionClient(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        char a2,
        unsigned int a3)
{
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbp
  struct BamoInputInjectionClientProxy *v7; // rsi
  __int64 v8; // rbx
  int v10; // eax
  int v11; // eax
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2), a3);
  v6 = Proxy;
  if ( Proxy )
  {
    v7 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_2:
    if ( *((_BYTE *)this + 28) )
    {
      BamoInputSiteElementProxy::LogOnInputInjectionClientChanging(
        (BamoImpl::BamoInputSiteElementProxyImpl *)((char *)this - 16),
        v7);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
        v15,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        this,
        1LL);
      v10 = (*(__int64 (__fastcall **)(char *, struct BamoInputInjectionClientProxy *))(*((_QWORD *)this - 2) + 472LL))(
              (char *)this - 16,
              v7);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2176,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v10,
          v15[0]);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v15);
    }
    v8 = *((_QWORD *)this + 27);
    *((_QWORD *)this + 27) = v7;
    if ( v7 )
      (**(void (__fastcall ***)(struct BamoInputInjectionClientProxy *))v7)(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v6 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6);
    if ( *((_BYTE *)this + 28) )
    {
      BamoInputSiteElementProxy::LogOnInputInjectionClientChanged((BamoImpl::BamoInputSiteElementProxyImpl *)((char *)this - 16));
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
        v15,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        this,
        2LL);
      v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 480LL))((char *)this - 16);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2189,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v11,
          v15[0]);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v15);
    }
    if ( a2 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(this);
    return 0LL;
  }
  v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v5 + 24) + 32LL),
          0x87B2080C,
          0);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2167,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v13,
      v15[0]);
  return v14;
}
