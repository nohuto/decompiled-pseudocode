/*
 * XREFs of ?ApproveProcessesForAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJPEBIII@Z @ 0x18003CAC0
 * Callers:
 *     ?Thunk_ApproveProcessesForAnimation_235@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180143BE0 (-Thunk_ApproveProcessesForAnimation_235@-$IGestureServicesPrincipal_Receive@VBamoGestureServices.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x18003CE28 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003CED4 (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D7D0 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D804 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveApproveProcessesForAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXPEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x18009AEFC (-LogReceiveApproveProcessesForAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXPEBIIPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::ApproveProcessesForAnimation(
        BamoImpl::BamoGestureServicesPrincipalImpl *this,
        const unsigned int *a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  const unsigned int *v9; // rdx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v10; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v12; // rbx
  struct BamoDragManagerClientProxy *v13; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // eax
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  _BYTE v21[24]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v20 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v10 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v11 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v10 + 3) + 32LL);
  v12 = 0LL;
  v13 = 0LL;
  if ( a4 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v10, a4);
    v12 = Proxy;
    if ( !Proxy )
    {
      v15 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v10 + 3) + 32LL),
              -2018375668,
              0);
      v16 = v15;
      if ( v15 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE761,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v15,
          v19);
      return v16;
    }
    v13 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
  }
  BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveApproveProcessesForAnimation(this, v9, a3, v13);
  if ( *((int *)this + 2) > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      v21,
      v11,
      this);
    v19 = (int)v13;
    v18 = (*(__int64 (__fastcall **)(char *, __int64, const unsigned int *, _QWORD))(*((_QWORD *)this - 2) + 160LL))(
            (char *)this - 16,
            v20,
            a2,
            a3);
    v7 = v18;
    if ( v18 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v11, -2018375668, 0);
    }
    else if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE777,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v18,
        (int)v13);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>(v21);
  }
  if ( v12 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v12);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE786,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v19);
  return (unsigned int)v7;
}
