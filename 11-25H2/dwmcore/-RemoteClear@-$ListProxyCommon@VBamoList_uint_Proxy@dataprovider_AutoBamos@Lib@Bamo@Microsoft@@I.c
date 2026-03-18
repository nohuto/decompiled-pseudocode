/*
 * XREFs of ?RemoteClear@?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@MEAAJXZ @ 0x1802885C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnection@2@XZ @ 0x1801D045C (-GetConnection@BamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@QEBAPEAVBamoConnec.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801D0A00 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1801D0E10 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ @ 0x180288278 (-GetIsReady@BamoProxy@Bamo@Microsoft@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListProxyCommon<Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,unsigned int>::RemoteClear(
        Microsoft::Bamo::BamoProxy *this)
{
  struct Microsoft::Bamo::BaseBamoConnection *Connection; // rax
  __int64 v3; // rax
  int v4; // eax
  int v6[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Connection = Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy::GetConnection(this);
  Microsoft::Bamo::Lock::Lock((Microsoft::Bamo::Lock *)v6, Connection);
  v3 = *((_QWORD *)this + 6);
  if ( v3 != *((_QWORD *)this + 7) )
    *((_QWORD *)this + 7) = v3;
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v6);
  if ( Microsoft::Bamo::BamoProxy::GetIsReady(this) )
  {
    v4 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 128LL))(this);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x45C,
        (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v4,
        v6[0]);
  }
  return 0LL;
}
