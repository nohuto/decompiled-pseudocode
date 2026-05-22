/*
 * XREFs of ?MarkProxyReady@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I@Z @ 0x180066EEC
 * Callers:
 *     ?Thunk_MarkProxyReady_11@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180071BD0 (-Thunk_MarkProxyReady_11@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBa.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x180040254 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::MarkProxyReady(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  if ( (_DWORD)a3 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 8) + 56LL))(
           *((_QWORD *)this + 8),
           *(unsigned int *)(a2 + 36),
           a3,
           &v14);
    a2 = 0x80000000LL;
    if ( (int)(v5 + 0x80000000) >= 0 && v5 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v5,
        v12);
    v4 = v14;
  }
  if ( v4 && (v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, a2)) != 0 )
  {
    v7 = *(_QWORD *)v6;
    *(_BYTE *)(v6 + 28) = 1;
    v8 = (*(__int64 (__fastcall **)(__int64))(v7 + 56))(v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
    return 0LL;
  }
  else
  {
    v10 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
            0x87B2080C,
            0);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5AF,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v10,
        v12);
    return v11;
  }
}
