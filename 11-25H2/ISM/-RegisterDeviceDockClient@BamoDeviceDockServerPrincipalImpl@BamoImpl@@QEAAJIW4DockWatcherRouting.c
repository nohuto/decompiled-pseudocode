/*
 * XREFs of ?RegisterDeviceDockClient@BamoDeviceDockServerPrincipalImpl@BamoImpl@@QEAAJIW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18017F3DC
 * Callers:
 *     ?Thunk_RegisterDeviceDockClient_68@?$IDeviceDockServerPrincipal_Receive@VBamoDeviceDockServerPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180180320 (-Thunk_RegisterDeviceDockClient_68@-$IDeviceDockServerPrincipal_Receive@VBamoDeviceDockServerPri.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ??0?$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVBamoActivationWatcherPrincipalImpl@1@@Z @ 0x180040398 (--0-$CalloutWrapper@VBamoActivationWatcherPrincipalImpl@BamoImpl@@@BamoImpl@Microsoft@@QEAA@PEAV.c)
 *     ??1?$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x180040444 (--1-$CalloutWrapper@VBamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@B.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180040D40 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z @ 0x180040D74 (-TryGetProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@I@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180042E18 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogReceiveRegisterDeviceDockClient@BamoDeviceDockServerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoDeviceDockClientProxy@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18017DC38 (-LogReceiveRegisterDeviceDockClient@BamoDeviceDockServerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoDev.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDeviceDockServerPrincipalImpl::RegisterDeviceDockClient(
        int *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v6; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  Microsoft::BamoImpl::BaseBamoPeerImpl *v8; // r14
  struct Microsoft::BamoImpl::ConnectionIndirector **v9; // r15
  Microsoft::BamoImpl::BamoProxyImpl *v10; // rbx
  char *v11; // rbp
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  int v18; // eax
  int v19; // [rsp+20h] [rbp-58h]
  _BYTE v20[32]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v22; // [rsp+98h] [rbp+20h]

  v6 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller((Microsoft::BamoImpl::BamoPrincipalImpl *)a1);
  v22 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v8 = (Microsoft::BamoImpl::BaseBamoPeerImpl *)*((_QWORD *)CurrentCaller + 4);
  v9 = *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v8 + 3) + 32LL);
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoPeerImpl::TryGetProxy(v8, a2);
    v10 = Proxy;
    if ( !Proxy )
    {
      v13 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*((_QWORD *)v8 + 3) + 32LL),
              0x87B2080C,
              0);
      v14 = v13;
      if ( v13 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA750,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v13);
      return v14;
    }
    v11 = (char *)Proxy - 16;
  }
  BamoImpl::BamoDeviceDockServerPrincipalImpl::LogReceiveRegisterDeviceDockClient();
  if ( a1[2] > 0 )
  {
    Microsoft::BamoImpl::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>::CalloutWrapper<BamoImpl::BamoActivationWatcherPrincipalImpl>(
      (__int64)v20,
      (__int64)v9,
      (__int64)a1);
    v18 = (*(__int64 (__fastcall **)(int *, __int64, char *, _QWORD))(*((_QWORD *)a1 - 2) + 112LL))(
            a1 - 4,
            v22,
            v11,
            a3);
    v6 = v18;
    if ( v18 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, 0x87B2080C, 0);
    }
    else if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA766,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
        (const char *)(unsigned int)v18,
        v19);
    }
    Microsoft::BamoImpl::CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>::~CalloutWrapper<Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl>((__int64)v20);
  }
  if ( v10 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v10, v16, v17);
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA775,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
