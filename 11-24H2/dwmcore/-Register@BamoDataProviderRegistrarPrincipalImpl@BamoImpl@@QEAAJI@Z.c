/*
 * XREFs of ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801A8A14
 * Callers:
 *     ?Thunk_Register_5@?$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180271060 (-Thunk_Register_5@-$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7D8C (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7E04 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801A8C44 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801A8D14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A96C4 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x18024C828 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x1802702C0 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Register(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r13
  Microsoft::BamoImpl::BamoProxyImpl *v9; // rbp
  char *v10; // r15
  __int64 v11; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v12; // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v14; // eax
  unsigned int v15; // ebx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v17; // rbx
  int v18; // eax
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h] BYREF
  int v21; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v7 = *((_QWORD *)CurrentCaller + 4);
  v8 = v6;
  v9 = 0LL;
  v10 = 0LL;
  v11 = *(_QWORD *)(v7 + 24);
  v12 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32);
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v11 + 32),
              *(_DWORD *)(v7 + 36),
              a2);
    v9 = Proxy;
    if ( !Proxy )
    {
      v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 32LL),
              -2018375668,
              0);
      v15 = v14;
      if ( v14 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D3B,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v14);
      return v15;
    }
    v10 = (char *)Proxy - 16;
  }
  if ( *((int *)this + 2) > 0 )
  {
    v20 = 0LL;
    v17 = 0LL;
    v21 = 0;
    v19 = 0;
    if ( !*((_DWORD *)v12 + 47) )
    {
      v17 = v12;
      v19 = (int)v12;
      Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v12);
    }
    v18 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 80LL))(
            (char *)this - 16,
            v8,
            v10);
    v4 = v18;
    if ( v18 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v12, -2018375668, 0);
    }
    else if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2D4F,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v18,
        v19);
    }
    if ( v17 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v17);
    wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v20);
  }
  if ( v9 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v9);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D5E,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
