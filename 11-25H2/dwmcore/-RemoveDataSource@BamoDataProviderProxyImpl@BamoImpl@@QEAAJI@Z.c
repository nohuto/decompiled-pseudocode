/*
 * XREFs of ?RemoveDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1802889AC
 * Callers:
 *     ?Thunk_RemoveDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180288F80 (-Thunk_RemoveDataSource_5@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801CEEA0 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x1801CF6D4 (--1-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@PEAVCalloutWrapperObject@12@@Z @ 0x1801CF974 (--0-$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@PEAVBase.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801D0F24 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z @ 0x18027A9D0 (-TryGetProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoProxyImpl@23@II@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::RemoveDataSource(
        BamoImpl::BamoDataProviderProxyImpl *this,
        unsigned int a2)
{
  __int64 v2; // rdi
  Microsoft::BamoImpl::BamoProxyImpl *v3; // rbx
  char *v4; // rsi
  __int64 v6; // rax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v7; // r14
  struct Microsoft::BamoImpl::BamoProxyImpl *Proxy; // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_QWORD *)this + 2);
  v3 = 0LL;
  v4 = 0LL;
  v6 = *(_QWORD *)(v2 + 24);
  v7 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32);
  if ( a2 )
  {
    Proxy = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetProxy(
              *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v6 + 32),
              *(unsigned int *)(v2 + 36),
              a2);
    v3 = Proxy;
    if ( !Proxy )
    {
      v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
             *(struct Microsoft::BamoImpl::ConnectionIndirector ***)(*(_QWORD *)(v2 + 24) + 32LL),
             0x87B2080C,
             0);
      v10 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2C91,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
          (const char *)(unsigned int)v9);
      return v10;
    }
    v4 = (char *)Proxy - 16;
  }
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
    (__int64)v17,
    v7);
  v12 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2) + 112LL))((char *)this - 16, v4);
  Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>((__int64)v17);
  Microsoft::BamoImpl::BamoProxyImpl::AckReference(this, v13, v14);
  if ( v3 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v3, v15, v16);
  return v12;
}
