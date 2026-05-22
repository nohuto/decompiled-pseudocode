/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJI@Z @ 0x18013A690
 * Callers:
 *     <none>
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1800252DC (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x180025454 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x1800B8F78 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x18013A0C4 (-GetConnection@BamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEBAPE.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18013A0E4 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteRemove(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2)
{
  __int64 v4; // r14
  Microsoft::Bamo::BaseBamoConnection *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  bool IsReady; // di
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int128 *v11; // rcx
  const char *v12; // r9
  __int64 v13; // rax
  int v14; // eax
  Microsoft::BamoImpl::BamoImplObject *v15[2]; // [rsp+20h] [rbp-198h] BYREF
  __int128 v16; // [rsp+30h] [rbp-188h] BYREF
  __int128 v17; // [rsp+40h] [rbp-178h]
  __int128 v18; // [rsp+50h] [rbp-168h]
  __int128 v19; // [rsp+60h] [rbp-158h]
  __int128 v20; // [rsp+70h] [rbp-148h]
  __int128 v21; // [rsp+80h] [rbp-138h]
  __int128 v22; // [rsp+90h] [rbp-128h]
  __int128 v23; // [rsp+A0h] [rbp-118h]
  __int128 v24; // [rsp+B0h] [rbp-108h]
  __int128 v25; // [rsp+C0h] [rbp-F8h]
  __int128 v26; // [rsp+D0h] [rbp-E8h]
  _OWORD v27[11]; // [rsp+E0h] [rbp-D8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v4 = a2;
  if ( a2 < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4)) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    memset_0(&v16, 0, 0xB0uLL);
    try
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
      Microsoft::Bamo::Lock::Lock(v15, Connection);
      if ( IsReady )
      {
        v11 = (__int128 *)(*((_QWORD *)this + 6) + 176 * v4);
        v16 = *v11;
        v17 = v11[1];
        v18 = v11[2];
        v19 = v11[3];
        v20 = v11[4];
        v21 = v11[5];
        v22 = v11[6];
        v23 = v11[7];
        v24 = v11[8];
        v25 = v11[9];
        v26 = v11[10];
      }
      memmove_0(
        (void *)(*((_QWORD *)this + 6) + 176 * v4),
        (const void *)(*((_QWORD *)this + 6) + 176 * v4 + 176),
        *((_QWORD *)this + 7) - (*((_QWORD *)this + 6) + 176 * v4 + 176));
      *((_QWORD *)this + 7) -= 176LL;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v15);
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
      v27[0] = v16;
      v27[1] = v17;
      v27[2] = v18;
      v27[3] = v19;
      v27[4] = v20;
      v27[5] = v21;
      v27[6] = v22;
      v27[7] = v23;
      v27[8] = v24;
      v27[9] = v25;
      v27[10] = v26;
      v14 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD, _OWORD *))(v13 + 152))(this, a2, v27);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v14,
          (int)v15[0]);
    }
    return 0LL;
  }
  else
  {
    v5 = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
    v6 = Microsoft::Bamo::BaseBamoConnection::TrackError(v5, 0x87B2080C);
    v7 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v6);
    return v7;
  }
}
