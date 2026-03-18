/*
 * XREFs of ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x18027D540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801A7A90 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ?GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x1801A88FC (-GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnec.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801A891C (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x180260AEC (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x180270158 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18027D178 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int,unsigned int>::RemoteInsert(
        Microsoft::Bamo::BamoProxy *this,
        unsigned int a2,
        int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r14
  Microsoft::Bamo::BaseBamoConnection *v7; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  char *v12; // rcx
  char *v13; // rsi
  int v14; // eax
  int v15[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v3 = (_QWORD *)((char *)this + 48);
  v4 = a2;
  if ( a2 <= (unsigned __int64)((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 2) )
  {
    Connection = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v15, Connection);
    v12 = (char *)v3[1];
    v13 = (char *)(*v3 + 4 * v4);
    if ( v12 == (char *)v3[2] )
    {
      std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((__int64)v3, (_BYTE *)(*v3 + 4 * v4), &v17);
    }
    else if ( v13 == v12 )
    {
      *(_DWORD *)v12 = a3;
      v3[1] += 4LL;
    }
    else
    {
      *(_DWORD *)v12 = *((_DWORD *)v12 - 1);
      v3[1] += 4LL;
      memmove_0(v13 + 4, v13, v12 - v13 - 4);
      *(_DWORD *)v13 = a3;
    }
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v15);
    if ( Microsoft::Bamo::BamoProxy::GetIsReady(this) )
    {
      v14 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *, _QWORD))(*(_QWORD *)this + 120LL))(
              this,
              (unsigned int)v4);
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4A3,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v14,
          v15[0]);
    }
    return 0LL;
  }
  else
  {
    v7 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    v8 = Microsoft::Bamo::BaseBamoConnection::TrackError(v7, 0x87B2080C);
    v9 = v8;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x496,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v8);
    return v9;
  }
}
