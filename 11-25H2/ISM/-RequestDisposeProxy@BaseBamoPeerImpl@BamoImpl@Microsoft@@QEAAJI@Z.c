/*
 * XREFs of ?RequestDisposeProxy@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAJI@Z @ 0x180062320
 * Callers:
 *     ?Thunk_RequestDisposeProxy_5@?$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800BB140 (-Thunk_RequestDisposeProxy_5@-$IBamoPeer_dataprovider_AutoBamos_Receive@VBamoPeerImpl@dataprovid.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x1800484B0 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoPeerImpl::RequestDisposeProxy(
        Microsoft::BamoImpl::BaseBamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v3; // rdi
  _DWORD *i; // rax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rdx
  Microsoft::BamoImpl::BamoPrincipalImpl *v10; // rcx
  int v11; // edi
  __int64 v12; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  for ( i = *(_DWORD **)(v3 + 192); ; ++i )
  {
    v5 = 0;
    if ( i == *(_DWORD **)(v3 + 200) )
      break;
    if ( *i == a2 )
      goto LABEL_22;
  }
  v16 = 0LL;
  v6 = 0LL;
  if ( a2 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(**(_QWORD **)(v3 + 64) + 56LL))(
           *(_QWORD *)(v3 + 64),
           *(unsigned int *)(v3 + 28),
           a2,
           &v16);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v7,
        v14);
    v6 = v16;
  }
  if ( !v6 || (v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6)) == 0 )
  {
LABEL_22:
    v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)v3,
            0x87B2080C,
            0);
    if ( v11 < 0 )
    {
      v12 = 1652LL;
      goto LABEL_24;
    }
    return (unsigned int)v11;
  }
  v9 = *(_QWORD *)(v8 + 32);
  if ( !v9 )
  {
LABEL_12:
    v11 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)v3,
            0x87B2080C,
            0);
    if ( v11 < 0 )
    {
      v12 = 1661LL;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11,
        v14);
      return (unsigned int)v11;
    }
    return (unsigned int)v11;
  }
  v10 = (Microsoft::BamoImpl::BamoPrincipalImpl *)*((unsigned int *)this + 9);
  while ( *(_DWORD *)(*(_QWORD *)(v9 + 32) + 36LL) != (_DWORD)v10 )
  {
    v9 = *(_QWORD *)(v9 + 40);
    if ( !v9 )
      goto LABEL_12;
  }
  if ( !*(_DWORD *)(v9 + 16) && !*(_BYTE *)(v9 + 58) )
    Microsoft::BamoImpl::BamoPrincipalImpl::SendDisposeProxy(v10, (struct Microsoft::BamoImpl::BamoStubImpl *)v9, 0);
  return v5;
}
