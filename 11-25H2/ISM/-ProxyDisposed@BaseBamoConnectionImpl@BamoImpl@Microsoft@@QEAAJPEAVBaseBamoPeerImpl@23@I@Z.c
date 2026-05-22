/*
 * XREFs of ?ProxyDisposed@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180047018
 * Callers:
 *     ?Thunk_ProxyDisposed_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800762E0 (-Thunk_ProxyDisposed_11@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBam.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x18004734C (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::ProxyDisposed(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3)
{
  _DWORD *i; // rax
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // rax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  for ( i = (_DWORD *)*((_QWORD *)this + 24); i != *((_DWORD **)this + 25); ++i )
  {
    if ( *i == (_DWORD)a3 )
      goto LABEL_22;
  }
  v6 = 0LL;
  v17 = 0LL;
  if ( (_DWORD)a3 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 8) + 56LL))(
           *((_QWORD *)this + 8),
           *((unsigned int *)this + 7),
           a3,
           &v17);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v7,
        v15);
    v6 = v17;
  }
  if ( !v6 || (v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6), (v9 = v8) == 0) )
  {
LABEL_22:
    v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
            0x87B2080C,
            0);
    if ( v11 < 0 )
    {
      v12 = 1757LL;
      goto LABEL_24;
    }
    return (unsigned int)v11;
  }
  v10 = *(_QWORD *)(v8 + 32);
  if ( !v10 )
  {
LABEL_11:
    v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
            0x87B2080C,
            0);
    if ( v11 < 0 )
    {
      v12 = 1766LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11,
        v15);
      return (unsigned int)v11;
    }
    return (unsigned int)v11;
  }
  while ( *(_DWORD *)(*(_QWORD *)(v10 + 32) + 36LL) != *((_DWORD *)a2 + 9) )
  {
    v10 = *(_QWORD *)(v10 + 40);
    if ( !v10 )
      goto LABEL_11;
  }
  *(_BYTE *)(v10 + 58) = 0;
  if ( *(int *)(v8 + 8) <= 0
    && Microsoft::BamoImpl::BamoPrincipalImpl::TryDisposeAndNotifyRemoteProxies((Microsoft::BamoImpl::BamoPrincipalImpl *)v8) )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
    if ( v14 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
  }
  return 0LL;
}
