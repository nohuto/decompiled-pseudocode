/*
 * XREFs of ?InjectTouchInput@BamoInputInjectionClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180195C84
 * Callers:
 *     ?Thunk_InjectTouchInput_8@?$IInputInjectionClientProxy_Receive@VBamoInputInjectionClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801961E0 (-Thunk_InjectTouchInput_8@-$IInputInjectionClientProxy_Receive@VBamoInputInjectionClientProxyImp.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x180040D74 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??0?$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoInputObserverClientProxyImpl@1@@Z @ 0x18006AA08 (--0-$CalloutWrapper@VBamoInputObserverClientProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBa.c)
 *     ??1?$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006ACC4 (--1-$CalloutWrapper@VBamoControllerNavigationOverrideProxyImpl@BamoImpl@@@BamoImpl@Microsoft@@QE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveInjectTouchInput@BamoInputInjectionClientProxyImpl@BamoImpl@@AEAAXPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180195FA4 (-LogReceiveInjectTouchInput@BamoInputInjectionClientProxyImpl@BamoImpl@@AEAAXPEAVBamoList_TouchI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoInputInjectionClientProxyImpl::InjectTouchInput(
        BamoImpl::BamoInputInjectionClientProxyImpl *this,
        unsigned int a2)
{
  Microsoft::BamoImpl::BaseBamoPeerImpl *v3; // rdi
  __int64 v4; // r14
  Microsoft::BamoImpl::BamoProxyImpl *v5; // rbx
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *v6; // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)this + 2);
  v4 = *(_QWORD *)(*((_QWORD *)v3 + 3) + 32LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v3, a2);
    v5 = Proxy;
    if ( !Proxy )
    {
      v8 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v3 + 3) + 32LL),
             0x87B2080C,
             0);
      v9 = v8;
      if ( v8 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFD62,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v8);
      return v9;
    }
    v6 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
  }
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>::CalloutWrapper<BamoImpl::BamoInputObserverClientProxyImpl>(
    (__int64)v16,
    v4,
    (__int64)this);
  BamoImpl::BamoInputInjectionClientProxyImpl::LogReceiveInjectTouchInput(this, v6);
  v11 = (*(__int64 (__fastcall **)(char *, struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *))(*((_QWORD *)this - 2) + 120LL))(
          (char *)this - 16,
          v6);
  Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>::~CalloutWrapper<BamoImpl::BamoControllerNavigationOverrideProxyImpl>((__int64)v16);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v12, v13);
  if ( v5 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v5, v14, v15);
  return v11;
}
