/*
 * XREFs of ?AckProxyReference@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI_N@Z @ 0x180057650
 * Callers:
 *     ?Thunk_AckProxyReference_14@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180084C30 (-Thunk_AckProxyReference_14@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManage.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1800484B0 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::AckProxyReference(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2,
        char a3)
{
  __int64 v5; // rdi
  _DWORD *i; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rax
  const char *v11; // r9
  __int64 v12; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  int v19; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  for ( i = *(_DWORD **)(v5 + 192); ; ++i )
  {
    v7 = 0;
    if ( i == *(_DWORD **)(v5 + 200) )
      break;
    if ( *i == a2 )
      goto LABEL_25;
  }
  v21 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v5 + 64) + 56LL))(
           *(_QWORD *)(v5 + 64),
           *(unsigned int *)(v5 + 28),
           a2,
           &v21);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v9,
        v19);
    v8 = v21;
  }
  if ( !v8 || (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8)) == 0 )
  {
LABEL_25:
    v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)v5,
            0x87B2080C,
            0);
    if ( v14 < 0 )
    {
      v15 = 1612LL;
      goto LABEL_27;
    }
    return (unsigned int)v14;
  }
  v12 = *(_QWORD *)(v10 + 32);
  if ( !v12 )
  {
LABEL_12:
    v14 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)v5,
            0x87B2080C,
            0);
    if ( v14 < 0 )
    {
      v15 = 1621LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v14,
        v19);
      return (unsigned int)v14;
    }
    return (unsigned int)v14;
  }
  v13 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*((unsigned int *)this + 9);
  while ( *(_DWORD *)(*(_QWORD *)(v12 + 32) + 36LL) != (_DWORD)v13 )
  {
    v12 = *(_QWORD *)(v12 + 40);
    if ( !v12 )
      goto LABEL_12;
  }
  v16 = *(_DWORD *)(v12 + 16);
  if ( !v16 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD5,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
      v11);
  v17 = v16 - 1;
  *(_DWORD *)(v12 + 16) = v17;
  if ( !a3 && !v17 && !*(_BYTE *)(v12 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v13, (struct Microsoft::BamoImpl::BamoStubImpl *)v12, 0);
  return v7;
}
