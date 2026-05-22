/*
 * XREFs of ?UpdateVirtualTouchpadController@BamoInputSiteElementProxyImpl@BamoImpl@@QEAAJ_NI@Z @ 0x1800408D4
 * Callers:
 *     ?Thunk_UpdateVirtualTouchpadController_8@?$IInputSiteElementProxy_Receive@VBamoInputSiteElementProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180072ED0 (-Thunk_UpdateVirtualTouchpadController_8@-$IInputSiteElementProxy_Receive@VBamoInputSiteElementP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801306B0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputSiteElementProxyImpl@BamoImpl@@UEAAXPEAVBam.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D804 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoShellGesturesClientProxyImpl@1@W4PrologEpilogConfig@12@@Z @ 0x180041C14 (--0-$CalloutWrapper@VBamoShellGesturesClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180042788 (--1-$CalloutWrapper@VBamoInputSiteElementProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?LogOnVirtualTouchpadControllerChanging@BamoInputSiteElementProxy@@AEAAXPEAVBamoVirtualTouchpadControllerProxy@@@Z @ 0x18008C274 (-LogOnVirtualTouchpadControllerChanging@BamoInputSiteElementProxy@@AEAAXPEAVBamoVirtualTouchpadC.c)
 *     ?LogOnVirtualTouchpadControllerChanged@BamoInputSiteElementProxy@@AEAAXXZ @ 0x18008CA48 (-LogOnVirtualTouchpadControllerChanged@BamoInputSiteElementProxy@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoInputSiteElementProxyImpl::UpdateVirtualTouchpadController(
        BamoImpl::BamoInputSiteElementProxyImpl *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // r14
  __int64 v5; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v6; // rbp
  struct BamoVirtualTouchpadControllerProxy *v7; // rsi
  __int64 v8; // rbx
  int v10; // eax
  int v11; // eax
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2;
  v5 = *((_QWORD *)this + 2);
  v6 = 0LL;
  v7 = 0LL;
  if ( !(_DWORD)a3 )
    goto LABEL_2;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)this + 2), a3);
  v6 = Proxy;
  if ( Proxy )
  {
    v7 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_2:
    if ( *((_BYTE *)this + 28) )
    {
      BamoInputSiteElementProxy::LogOnVirtualTouchpadControllerChanging(
        (BamoImpl::BamoInputSiteElementProxyImpl *)((char *)this - 16),
        v7);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
        v15,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        this,
        1LL);
      v10 = (*(__int64 (__fastcall **)(char *, struct BamoVirtualTouchpadControllerProxy *))(*((_QWORD *)this - 2)
                                                                                           + 648LL))(
              (char *)this - 16,
              v7);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2FFD,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v10,
          v15[0]);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v15);
    }
    v8 = *((_QWORD *)this + 38);
    *((_QWORD *)this + 38) = v7;
    if ( v7 )
      (**(void (__fastcall ***)(struct BamoVirtualTouchpadControllerProxy *))v7)(v7);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v6 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v6, a2, a3);
    if ( *((_BYTE *)this + 28) )
    {
      BamoInputSiteElementProxy::LogOnVirtualTouchpadControllerChanged((BamoImpl::BamoInputSiteElementProxyImpl *)((char *)this - 16));
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>::CalloutWrapper<BamoImpl::BamoShellGesturesClientProxyImpl>(
        v15,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL),
        this,
        2LL);
      v11 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 656LL))((char *)this - 16);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x3010,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v11,
          v15[0]);
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>::~CalloutWrapper<BamoImpl::BamoInputSiteElementProxyImpl>(v15);
    }
    if ( v3 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, a2, a3);
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
      (void *)0x2FEE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v13,
      v15[0]);
  return v14;
}
