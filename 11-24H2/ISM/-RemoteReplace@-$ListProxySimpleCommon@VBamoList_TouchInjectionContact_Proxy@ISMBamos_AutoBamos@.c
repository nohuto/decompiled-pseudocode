/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@AEBU6789Windows@@@Bamo@Microsoft@@MEAAJIAEBUTouchInjectionContact@Input@Internal@UI@Windows@@@Z @ 0x18019D120
 * Callers:
 *     <none>
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180025454 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1800B8F78 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013A0C4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18013A0E4 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact,Windows::UI::Internal::Input::TouchInjectionContact const &>::RemoteReplace(
        Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy *this,
        unsigned int a2,
        _OWORD *a3)
{
  __int64 v6; // rsi
  Microsoft::Bamo::BaseBamoConnection *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  bool IsReady; // di
  __int128 v12; // xmm6
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  const char *v14; // r9
  __int64 v15; // rax
  int v16; // eax
  int v17[4]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  if ( a2 < (unsigned __int64)((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    v12 = 0LL;
    try
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)v17, Connection);
      if ( IsReady )
        v12 = *(_OWORD *)(*((_QWORD *)this + 6) + 16 * v6);
      *(_OWORD *)(*((_QWORD *)this + 6) + 16 * v6) = *a3;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v17);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4FC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v14);
    }
    if ( IsReady )
    {
      v15 = *(_QWORD *)this;
      *(_OWORD *)v17 = v12;
      v16 = (*(__int64 (__fastcall **)(Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy *, _QWORD, int *))(v15 + 160))(
              this,
              a2,
              v17);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x500,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v16,
          v17[0]);
    }
    return 0LL;
  }
  else
  {
    v7 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    v8 = Microsoft::Bamo::BaseBamoConnection::TrackError(v7, 0x87B2080C);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EB,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v8);
    return v9;
  }
}
