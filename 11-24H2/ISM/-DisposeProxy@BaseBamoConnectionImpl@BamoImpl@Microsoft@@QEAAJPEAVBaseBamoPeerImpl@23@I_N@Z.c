/*
 * XREFs of ?DisposeProxy@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAVBaseBamoPeerImpl@23@I_N@Z @ 0x1800422E8
 * Callers:
 *     ?Thunk_DisposeProxy_14@?$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180073F70 (-Thunk_DisposeProxy_14@-$IBamoPeer_MPCManagerBamo_AutoBamos_Receive@VBamoPeerImpl@MPCManagerBamo.c)
 * Callees:
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003CCE4 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ @ 0x180043878 (-AbandonOnDisconnect@BamoProxy@Bamo@Microsoft@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisposeProxy(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2,
        __int64 a3,
        char a4)
{
  __int64 v6; // rcx
  unsigned int v7; // esi
  unsigned int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // rax
  Microsoft::Bamo::BamoProxy *v14; // rax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v7 = a3;
  v20 = 0LL;
  if ( (_DWORD)a3 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 8) + 56LL))(
           *((_QWORD *)this + 8),
           *((unsigned int *)a2 + 9),
           a3,
           &v20);
    if ( (int)(v9 + 0x80000000) >= 0 && v9 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x492,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)v9,
        v18);
    v6 = v20;
  }
  if ( v6 && (v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6)) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 8) + 40LL))(
            *((_QWORD *)this + 8),
            *((unsigned int *)a2 + 9),
            v7,
            0LL);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6A4,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v11,
        v18);
    if ( !a4 && *(int *)(v10 + 8) > 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6AC,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v12);
    v13 = *(_QWORD *)v10;
    *(_BYTE *)(v10 + 29) = 1;
    v14 = (Microsoft::Bamo::BamoProxy *)(*(__int64 (__fastcall **)(__int64))(v13 + 56))(v10);
    Microsoft::Bamo::BamoProxy::AbandonOnDisconnect(v14);
    if ( a4 )
    {
      if ( !*((_BYTE *)a2 + 49) )
        (*(void (__fastcall **)(struct Microsoft::BamoImpl::BaseBamoPeerImpl *, _QWORD))(*(_QWORD *)a2 + 88LL))(a2, v7);
    }
    return 0LL;
  }
  else
  {
    v16 = Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(
            (struct Microsoft::BamoImpl::ConnectionIndirector **)this,
            0x87B2080C,
            0);
    v17 = v16;
    if ( v16 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A1,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v16,
        v18);
    return v17;
  }
}
