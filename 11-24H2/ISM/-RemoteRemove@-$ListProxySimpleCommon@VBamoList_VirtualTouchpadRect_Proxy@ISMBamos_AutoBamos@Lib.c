/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013B7C0
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
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteRemove(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2)
{
  __int64 v2; // r14
  Microsoft::Bamo::BaseBamoConnection *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  bool IsReady; // di
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int64 v10; // rax
  __int64 v11; // xmm0_8
  const char *v12; // r9
  __int64 v13; // rax
  int v14; // eax
  int v15[2]; // [rsp+20h] [rbp-68h]
  __int128 v16; // [rsp+28h] [rbp-60h]
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = a2;
  if ( a2 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    v16 = 0LL;
    try
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v17, Connection);
      if ( IsReady )
      {
        v10 = *((_QWORD *)this + 6);
        v16 = *(_OWORD *)(v10 + 24 * v2);
        v11 = *(_QWORD *)(v10 + 24 * v2 + 16);
      }
      else
      {
        v11 = 0LL;
      }
      *(_QWORD *)v15 = v11;
      memmove_0(
        (void *)(*((_QWORD *)this + 6) + 24 * v2),
        (const void *)(*((_QWORD *)this + 6) + 24 * v2 + 24),
        *((_QWORD *)this + 7) - (*((_QWORD *)this + 6) + 24 * v2 + 24));
      *((_QWORD *)this + 7) -= 24LL;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v17);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4CD,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v12);
    }
    if ( IsReady )
    {
      v13 = *(_QWORD *)this;
      v17 = v16;
      v18 = *(_QWORD *)v15;
      v14 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD, __int128 *))(v13 + 152))(
              this,
              (unsigned int)v2,
              &v17);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v14,
          v15[0]);
    }
    return 0LL;
  }
  else
  {
    v4 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    v5 = Microsoft::Bamo::BaseBamoConnection::TrackError(v4, 0x87B2080C);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v5);
    return v6;
  }
}
