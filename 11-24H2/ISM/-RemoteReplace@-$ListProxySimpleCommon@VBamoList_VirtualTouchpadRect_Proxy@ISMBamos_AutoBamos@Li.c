/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_VirtualTouchpadRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UVirtualTouchpadRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUVirtualTouchpadRect@@@Z @ 0x18013B940
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

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_VirtualTouchpadRect_Proxy,VirtualTouchpadRect,VirtualTouchpadRect const &>::RemoteReplace(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2,
        __int64 a3)
{
  __int64 v4; // r14
  Microsoft::Bamo::BaseBamoConnection *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  bool IsReady; // di
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  __int64 v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // rax
  const char *v17; // r9
  __int64 v18; // rax
  int v19; // eax
  int v20[2]; // [rsp+20h] [rbp-68h]
  __int128 v21; // [rsp+28h] [rbp-60h]
  __int128 v22; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+60h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = a2;
  if ( a2 < 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 3) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    v21 = 0LL;
    try
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
      Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v22, Connection);
      if ( IsReady )
      {
        v12 = *((_QWORD *)this + 6);
        v21 = *(_OWORD *)(v12 + 24 * v4);
        v13 = *(_QWORD *)(v12 + 24 * v4 + 16);
      }
      else
      {
        v13 = 0LL;
      }
      *(_QWORD *)v20 = v13;
      v14 = *(_QWORD *)(a3 + 16);
      v15 = 3 * v4;
      v16 = *((_QWORD *)this + 6);
      *(_OWORD *)(v16 + 8 * v15) = *(_OWORD *)a3;
      *(_QWORD *)(v16 + 8 * v15 + 16) = v14;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v22);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4FC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v17);
    }
    if ( IsReady )
    {
      v18 = *(_QWORD *)this;
      v22 = v21;
      v23 = *(_QWORD *)v20;
      v19 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD, __int128 *))(v18 + 160))(
              this,
              (unsigned int)v4,
              &v22);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x500,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v19,
          v20[0]);
    }
    return 0LL;
  }
  else
  {
    v6 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    v7 = Microsoft::Bamo::BaseBamoConnection::TrackError(v6, 0x87B2080C);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4EB,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v7);
    return v8;
  }
}
