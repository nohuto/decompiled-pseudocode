/*
 * XREFs of ?UpdateOcclusionRects@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1800AB700
 * Callers:
 *     ?Thunk_UpdateOcclusionRects_8@?$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpointPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800AB6E0 (-Thunk_UpdateOcclusionRects_8@-$ISystemContextEndpointPrincipal_Receive@VBamoSystemContextEndpoi.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003CED4 (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18003CF44 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microso_ea_18003CF44.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D7D0 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D804 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogOnOcclusionRectsChanged@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpointStub@@@Z @ 0x1800AAC78 (-LogOnOcclusionRectsChanged@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpoi.c)
 *     ?LogOnOcclusionRectsChanging@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpointStub@@PEAVBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800AACFC (-LogOnOcclusionRectsChanging@BamoSystemContextEndpointPrincipal@@AEAAXPEAVBamoSystemContextEndpo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoImpl::BamoSystemContextEndpointPrincipalImpl::UpdateOcclusionRects(
        BamoImpl::BamoSystemContextEndpointPrincipalImpl *this)
{
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *v5; // rsi
  __int64 v6; // rbx
  Microsoft::BamoImpl::BamoProxyImpl *v7; // rbp
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy *v8; // r14
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  __int64 v14; // rbx
  int v15; // eax
  int v16[14]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v5 = CurrentCaller;
  v6 = *((_QWORD *)CurrentCaller + 4);
  v7 = 0LL;
  v8 = 0LL;
  if ( (_DWORD)v4 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(
              *((Microsoft::BamoImpl::BaseBamoPeerImpl **)CurrentCaller + 4),
              v4);
    v7 = Proxy;
    if ( !Proxy )
    {
      v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v6 + 24) + 32LL),
              0x87B2080C,
              0);
      v11 = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x93B3,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v10);
      return v11;
    }
    v8 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
  }
  if ( *((_BYTE *)v5 + 57) && *((int *)this + 2) > 0 )
  {
    BamoSystemContextEndpointPrincipal::LogOnOcclusionRectsChanging(
      (struct Microsoft::BamoImpl::ConnectionIndirector **)this - 2,
      (struct Microsoft::BamoImpl::BamoStubImpl *)((char *)v5 - 16),
      v8);
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      1);
    v13 = (*(__int64 (__fastcall **)(char *, __int64, struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy *))(*((_QWORD *)this - 2) + 72LL))(
            (char *)this - 16,
            (__int64)v5 - 16,
            v8);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x93C2,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v13,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v16);
  }
  v14 = *((_QWORD *)v5 + 8);
  *((_QWORD *)v5 + 8) = v8;
  if ( v8 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy *))v8)(v8);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  if ( v7 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v7, v3, v4);
  if ( *((_BYTE *)v5 + 57) && *((int *)this + 2) > 0 )
  {
    BamoSystemContextEndpointPrincipal::LogOnOcclusionRectsChanged(
      (struct Microsoft::BamoImpl::ConnectionIndirector **)this - 2,
      (struct Microsoft::BamoImpl::BamoStubImpl *)((char *)v5 - 16));
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v16,
      *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL),
      (void (__fastcall ***)(_QWORD))this,
      2);
    v15 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 80LL))(
            (char *)this - 16,
            (__int64)v5 - 16);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x93D5,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v15,
        v16[0]);
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v16);
  }
  return 0LL;
}
