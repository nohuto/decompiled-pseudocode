/*
 * XREFs of ?AckProxyReference@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x180224830
 * Callers:
 *     ?Thunk_AckProxyReference_17@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18026FD60 (-Thunk_AckProxyReference_17@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovide.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x1801A8D14 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z @ 0x18024F3B8 (-TryGetPrincipal@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVBamoPrincipalImpl@23@I@Z.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x18026F8D8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::AckProxyReference(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        unsigned int a3,
        char a4)
{
  struct Microsoft::BamoImpl::BamoPrincipalImpl *Principal; // rax
  const char *v8; // r9
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v12; // rcx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Principal = Microsoft::BamoImpl::BaseBamoConnectionImpl::TryGetPrincipal(this, a3);
  if ( !Principal )
  {
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2080C,
           0);
    if ( v9 < 0 )
    {
      v10 = 1612LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
    return (unsigned int)v9;
  }
  v11 = *((_QWORD *)Principal + 4);
  if ( !v11 )
  {
LABEL_8:
    v9 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
           (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
           0x87B2080C,
           0);
    if ( v9 < 0 )
    {
      v10 = 1621LL;
      goto LABEL_10;
    }
    return (unsigned int)v9;
  }
  v12 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*((unsigned int *)a2 + 9);
  while ( *(_DWORD *)(*(_QWORD *)(v11 + 32) + 36LL) != (_DWORD)v12 )
  {
    v11 = *(_QWORD *)(v11 + 40);
    if ( !v11 )
      goto LABEL_8;
  }
  v14 = *(_DWORD *)(v11 + 16);
  if ( !v14 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD5,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      v8);
  v15 = v14 - 1;
  *(_DWORD *)(v11 + 16) = v15;
  if ( !a4 && !v15 && !*(_BYTE *)(v11 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v12, (struct Microsoft::BamoImpl::BamoStubImpl *)v11, 0);
  return 0LL;
}
