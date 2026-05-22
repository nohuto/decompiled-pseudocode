/*
 * XREFs of ?UnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJ_KI@Z @ 0x18003D168
 * Callers:
 *     ?Thunk_UnregisterGestureDragClient_231@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180143D30 (-Thunk_UnregisterGestureDragClient_231@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesP.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18003CED4 (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@W4PrologEpilogConfig@12@@Z @ 0x18003CF44 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microso_ea_18003CF44.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18003D7D0 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x18003D804 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18003F8A8 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveUnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18008EA38 (-LogReceiveUnregisterGestureDragClient@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAX_KPEAVBam.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::UnregisterGestureDragClient(
        BamoImpl::BamoGestureServicesPrincipalImpl *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  int v6; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v8; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v10; // rbx
  struct BamoDragManagerClientProxy *v11; // rbp
  int v12; // eax
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // [rsp+20h] [rbp-58h]
  _BYTE v18[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v20; // [rsp+98h] [rbp+20h]

  v6 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v20 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v8 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)v8 + 3) + 32LL);
  v10 = 0LL;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v8, a3);
  v10 = Proxy;
  if ( Proxy )
  {
    v11 = (struct Microsoft::BamoImpl::BamoProxyImpl *)((char *)Proxy - 16);
LABEL_2:
    BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveUnregisterGestureDragClient(this, a2, v11);
    if ( *((int *)this + 2) > 0 )
    {
      Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
        (__int64)v18,
        v9,
        (void (__fastcall ***)(_QWORD))this,
        this != 0LL ? 3 : 0);
      v12 = (*(__int64 (__fastcall **)(char *, __int64, unsigned __int64, struct BamoDragManagerClientProxy *))(*((_QWORD *)this - 2) + 152LL))(
              (char *)this - 16,
              v20,
              a2,
              v11);
      v6 = v12;
      if ( v12 == -2018375668 )
      {
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          (struct Microsoft::BamoImpl::ConnectionIndirector **)v9,
          0x87B2080C,
          0);
      }
      else if ( v12 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE733,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v12,
          v17);
      }
      Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v18);
    }
    if ( v10 )
      Microsoft::BamoImpl::BamoProxyImpl::AckReference(v10);
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE742,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v6,
        v17);
    return (unsigned int)v6;
  }
  v15 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
          *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v8 + 3) + 32LL),
          0x87B2080C,
          0);
  v16 = v15;
  if ( v15 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE71D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v15,
      v17);
  return v16;
}
