/*
 * XREFs of ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x1801A7A90
 * Callers:
 *     ?GetItemAt@?$ListProxyDetails@IVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@$0A@$0A@$0A@@Bamo@Microsoft@@QEAAII@Z @ 0x1801A830C (-GetItemAt@-$ListProxyDetails@IVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@$.c)
 *     ?RemoteClear@?$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I@Bamo@Microsoft@@MEAAJXZ @ 0x18027D4C0 (-RemoteClear@-$ListProxyCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@I.c)
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x18027D540 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteRemove@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJI@Z @ 0x18027D680 (-RemoteRemove@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micro.c)
 *     ?RemoteReplace@?$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@II@Bamo@Microsoft@@MEAAJII@Z @ 0x18027D7A0 (-RemoteReplace@-$ListProxySimpleCommon@VBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Micr.c)
 * Callees:
 *     ?CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ @ 0x1801A7DD8 (-CurrentThreadHasLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBA_NXZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801A7E04 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVConnectionIndirector@BamoImpl@Microsoft@@@Z @ 0x1801A7E3C (--4-$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAA.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

Microsoft::Bamo::Lock *__fastcall Microsoft::Bamo::Lock::Lock(
        Microsoft::Bamo::Lock *this,
        struct Microsoft::Bamo::BaseBamoConnection *a2)
{
  char v3; // di
  __int64 v4; // rbx
  bool HasLock; // al
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  *(_QWORD *)this = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoConnection *))(*(_QWORD *)a2 + 56LL))(a2);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::operator=(
    this,
    *(_QWORD *)(v4 + 96));
  HasLock = Microsoft::BamoImpl::BaseBamoConnectionImpl::CurrentThreadHasLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v4);
  *((_BYTE *)this + 8) = HasLock;
  *((_BYTE *)this + 9) = 0;
  if ( !HasLock )
  {
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock((Microsoft::BamoImpl::BaseBamoConnectionImpl *)v4);
    if ( *(_QWORD *)(v4 + 64) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 56) + 96LL))(*(_QWORD *)(v4 + 56));
      if ( v6 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xA05,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v6,
          v8);
      v3 = 1;
    }
    *((_BYTE *)this + 9) = v3;
  }
  ++*(_DWORD *)(v4 + 188);
  return this;
}
