/*
 * XREFs of ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJI@Z @ 0x18027D680
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801A7A90 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ?GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x1801A88FC (-GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnec.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801A891C (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z @ 0x180270158 (-TrackError@BaseBamoConnection@Bamo@Microsoft@@QEAAJJ@Z.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x18027D178 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxySimpleCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int,unsigned int>::RemoteRemove(
        Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *this,
        unsigned int a2)
{
  __int64 v3; // rbp
  Microsoft::Bamo::BaseBamoConnection *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  bool IsReady; // r14
  unsigned int v9; // esi
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  int v11; // eax
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = a2;
  if ( a2 < (unsigned __int64)((__int64)(*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) >> 2) )
  {
    IsReady = Microsoft::Bamo::BamoProxy::GetIsReady(this);
    v9 = 0;
    Connection = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v12, Connection);
    if ( IsReady )
      v9 = *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v3);
    memmove_0(
      (void *)(*((_QWORD *)this + 6) + 4 * v3),
      (const void *)(*((_QWORD *)this + 6) + 4 * v3 + 4),
      *((_QWORD *)this + 7) - (*((_QWORD *)this + 6) + 4 * v3 + 4));
    *((_QWORD *)this + 7) -= 4LL;
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v12);
    if ( IsReady )
    {
      v11 = (*(__int64 (__fastcall **)(Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy *, _QWORD, _QWORD))(*(_QWORD *)this + 136LL))(
              this,
              (unsigned int)v3,
              v9);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x4D1,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          (const char *)(unsigned int)v11,
          v12[0]);
    }
    return 0LL;
  }
  else
  {
    v4 = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
    v5 = Microsoft::Bamo::BaseBamoConnection::TrackError(v4, 0x87B2080C);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BC,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v5);
    return v6;
  }
}
