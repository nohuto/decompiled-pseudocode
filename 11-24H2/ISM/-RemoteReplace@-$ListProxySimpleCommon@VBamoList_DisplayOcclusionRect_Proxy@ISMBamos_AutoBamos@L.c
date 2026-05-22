/*
 * XREFs of ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013A8E0
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy,DisplayOcclusionRect,DisplayOcclusionRect const &>::RemoteReplace(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2,
        __int128 *a3)
{
  __int64 v6; // r15
  Microsoft::Bamo::BaseBamoConnection *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  bool IsReady; // si
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int128 *v13; // rcx
  _OWORD *v14; // rcx
  const char *v15; // r9
  __int64 v16; // rax
  int v17; // eax
  Microsoft::BamoImpl::BamoImplObject *v18[2]; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v19; // [rsp+30h] [rbp-198h] BYREF
  __int128 v20; // [rsp+40h] [rbp-188h]
  __int128 v21; // [rsp+50h] [rbp-178h]
  __int128 v22; // [rsp+60h] [rbp-168h]
  __int128 v23; // [rsp+70h] [rbp-158h]
  __int128 v24; // [rsp+80h] [rbp-148h]
  __int128 v25; // [rsp+90h] [rbp-138h]
  __int128 v26; // [rsp+A0h] [rbp-128h]
  __int128 v27; // [rsp+B0h] [rbp-118h]
  __int128 v28; // [rsp+C0h] [rbp-108h]
  __int128 v29; // [rsp+D0h] [rbp-F8h]
  __int128 v30; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+F0h] [rbp-D8h]
  __int128 v32; // [rsp+100h] [rbp-C8h]
  __int128 v33; // [rsp+110h] [rbp-B8h]
  __int128 v34; // [rsp+120h] [rbp-A8h]
  __int128 v35; // [rsp+130h] [rbp-98h]
  __int128 v36; // [rsp+140h] [rbp-88h]
  __int128 v37; // [rsp+150h] [rbp-78h]
  __int128 v38; // [rsp+160h] [rbp-68h]
  __int128 v39; // [rsp+170h] [rbp-58h]
  __int128 v40; // [rsp+180h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  v6 = a2;
  if ( a2 < (unsigned __int64)(0x2E8BA2E8BA2E8BA3LL * ((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 4)) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    memset_0(&v19, 0, 0xB0uLL);
    try
    {
      Connection = Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_DisplayOcclusionRect_Proxy::GetConnection(this);
      Microsoft::Bamo::Lock::Lock(v18, Connection);
      if ( IsReady )
      {
        v13 = (__int128 *)(*((_QWORD *)this + 6) + 176 * v6);
        v19 = *v13;
        v20 = v13[1];
        v21 = v13[2];
        v22 = v13[3];
        v23 = v13[4];
        v24 = v13[5];
        v25 = v13[6];
        v26 = v13[7];
        v27 = v13[8];
        v28 = v13[9];
        v29 = v13[10];
      }
      v30 = *a3;
      v31 = a3[1];
      v32 = a3[2];
      v33 = a3[3];
      v34 = a3[4];
      v35 = a3[5];
      v36 = a3[6];
      v37 = a3[7];
      v38 = a3[8];
      v39 = a3[9];
      v40 = a3[10];
      v14 = (_OWORD *)(*((_QWORD *)this + 6) + 176 * v6);
      *v14 = v30;
      v14[1] = v31;
      v14[2] = v32;
      v14[3] = v33;
      v14[4] = v34;
      v14[5] = v35;
      v14[6] = v36;
      v14 += 8;
      *(v14 - 1) = v37;
      *v14 = v38;
      v14[1] = v39;
      v14[2] = v40;
      Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v18);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4FC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        v15);
    }
    if ( IsReady )
    {
      v16 = *(_QWORD *)this;
      v30 = v19;
      v31 = v20;
      v32 = v21;
      v33 = v22;
      v34 = v23;
      v35 = v24;
      v36 = v25;
      v37 = v26;
      v38 = v27;
      v39 = v28;
      v40 = v29;
      v17 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD, __int128 *))(v16 + 160))(this, a2, &v30);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x500,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v17,
          (int)v18[0]);
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
