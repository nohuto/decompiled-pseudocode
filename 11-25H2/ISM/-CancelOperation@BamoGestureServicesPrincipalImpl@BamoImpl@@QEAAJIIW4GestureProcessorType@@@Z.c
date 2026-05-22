/*
 * XREFs of ?CancelOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIIW4GestureProcessorType@@@Z @ 0x18013FDC8
 * Callers:
 *     ?Thunk_CancelOperation_206@?$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141A30 (-Thunk_CancelOperation_206@-$IGestureServicesPrincipal_Receive@VBamoGestureServicesPrincipalImpl.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x180040398 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180040444 (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180040D40 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x180040D74 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveCancelOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180140838 (-LogReceiveCancelOperation@BamoGestureServicesPrincipalImpl@BamoImpl@@AEAAXIPEAVBamoDragManagerC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoGestureServicesPrincipalImpl::CancelOperation(
        int *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v7; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v9; // r14
  struct Microsoft::BamoImpl::ConnectionIndirector **v10; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rbx
  char *v12; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-48h]
  _BYTE v21[24]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller((Microsoft::BamoImpl::BamoPrincipalImpl *)a1);
  v20 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v9 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v10 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v9 + 3) + 32LL);
  v11 = 0LL;
  v12 = 0LL;
  if ( a3 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v9, a3);
    v11 = Proxy;
    if ( !Proxy )
    {
      v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v9 + 3) + 32LL),
              0x87B2080C,
              0);
      v15 = v14;
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xDC04,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v14);
      return v15;
    }
    v12 = (char *)Proxy - 16;
  }
  BamoImpl::BamoGestureServicesPrincipalImpl::LogReceiveCancelOperation(a1, a2, v12, a4);
  if ( a1[2] > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v21,
      (__int64)v10,
      (__int64)a1);
    v19 = (*(__int64 (__fastcall **)(int *, __int64, _QWORD, char *))(*((_QWORD *)a1 - 2) + 120LL))(
            a1 - 4,
            v20,
            a2,
            v12);
    v7 = v19;
    if ( v19 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v10, 0x87B2080C, 0);
    }
    else if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xDC1A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v19,
        a4);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v21);
  }
  if ( v11 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11, v17, v18);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
