/*
 * XREFs of ?AttachApplication2@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800F486C
 * Callers:
 *     ?Thunk_AttachApplication2_8@?$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControllerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800F63F0 (-Thunk_AttachApplication2_8@-$ISystemCursorControllerPrincipal_Receive@VBamoSystemCursorControll.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x180040398 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180040444 (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180040D40 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x180040D74 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveAttachApplication2@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoCustomCursorControllerClient2Proxy@@@Z @ 0x1800F5880 (-LogReceiveAttachApplication2@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoCus.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::AttachApplication2(
        BamoImpl::BamoSystemCursorControllerPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v6; // r13
  Microsoft::BamoImpl::BaseBamoPeerImpl *v7; // r14
  struct Microsoft::BamoImpl::ConnectionIndirector **v8; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v9; // rbx
  struct BamoCustomCursorControllerClient2Proxy *v10; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18[8]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v7 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v8 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v7 + 3) + 32LL);
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v7, a2);
    v9 = Proxy;
    if ( !Proxy )
    {
      v12 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v7 + 3) + 32LL),
              0x87B2080C,
              0);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8DD2,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v12);
      return v13;
    }
    v10 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
  }
  BamoImpl::BamoSystemCursorControllerPrincipalImpl::LogReceiveAttachApplication2(this, v10);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v18,
      (__int64)v8,
      (__int64)this);
    v17 = (*(__int64 (__fastcall **)(char *, __int64, struct BamoCustomCursorControllerClient2Proxy *))(*((_QWORD *)this - 2) + 144LL))(
            (char *)this - 16,
            v6,
            v10);
    v4 = v17;
    if ( v17 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v8, 0x87B2080C, 0);
    }
    else if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8DE8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v17,
        v18[0]);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v18);
  }
  if ( v9 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v9, v15, v16);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8DF7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
