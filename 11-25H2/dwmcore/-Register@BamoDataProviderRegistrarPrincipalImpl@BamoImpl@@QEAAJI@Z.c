/*
 * XREFs of ?Register@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x1801CF714
 * Callers:
 *     ?Thunk_Register_5@?$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18027B770 (-Thunk_Register_5@-$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801CEEA0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801CF944 (--1-$com_ptr_t@VCalloutWrapperObject@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@.c)
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0CFC (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801D0D74 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ @ 0x180257BF8 (-GetCurrentCaller@BamoPrincipalImpl@BamoImpl@Microsoft@@IEAAPEAVBamoStubImpl@23@XZ.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18027A9D0 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Register(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  int v4; // edi
  struct Microsoft::BamoImpl::BamoStubImpl *CurrentCaller; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // r13
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rbp
  char *v12; // r15
  __int64 v13; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v14; // rsi
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v16; // eax
  unsigned int v17; // ebx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v19; // rbx
  int v20; // eax
  int v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+28h] [rbp-40h] BYREF
  int v23; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = 0;
  CurrentCaller = Microsoft::BamoImpl::BamoPrincipalImpl::GetCurrentCaller(this);
  v6 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)CurrentCaller + 32LL))(CurrentCaller);
  v9 = *((_QWORD *)CurrentCaller + 4);
  v10 = v6;
  v11 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)(v9 + 24);
  v14 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32);
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v13 + 32),
              *(_DWORD *)(v9 + 36),
              a2);
    v11 = Proxy;
    if ( !Proxy )
    {
      v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v9 + 24) + 32LL),
              -2018375668,
              0);
      v17 = v16;
      if ( v16 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2D3B,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v16);
      return v17;
    }
    v12 = (char *)Proxy - 16;
  }
  if ( *((int *)this + 2) > 0 )
  {
    v22 = 0LL;
    v19 = 0LL;
    v23 = 0;
    v21 = 0;
    if ( !*((_DWORD *)v14 + 47) )
    {
      v19 = v14;
      v21 = (int)v14;
      Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v14);
    }
    v20 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 80LL))(
            (char *)this - 16,
            v10,
            v12);
    v4 = v20;
    if ( v20 == -2018375668 )
    {
      Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v14, -2018375668, 0);
    }
    else if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2D4F,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v20,
        v21);
    }
    if ( v19 )
      Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v19);
    wil::com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::CalloutWrapperObject,wil::err_returncode_policy>(&v22);
  }
  if ( v11 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11, v7, v8);
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D5E,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
