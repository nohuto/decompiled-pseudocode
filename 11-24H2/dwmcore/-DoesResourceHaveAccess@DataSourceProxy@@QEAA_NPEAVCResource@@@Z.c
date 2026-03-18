/*
 * XREFs of ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801A8270
 * Callers:
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x1801A7FC4 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 *     ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x1801A8EC8 (-TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1802722D0 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     ?GetItemAt@?$ListProxyDetails@IVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@$0A@$0A@$0A@@Bamo@Microsoft@@QEAAII@Z @ 0x1801A830C (-GetItemAt@-$ListProxyDetails@IVBamoList_uint_Proxy@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall DataSourceProxy::DoesResourceHaveAccess(DataSourceProxy *this, struct CResource *a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rsi
  int ItemAt; // ebx

  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v4 = 0;
  v5 = v3;
  if ( !v3 || !(unsigned int)((__int64)(*(_QWORD *)(v3 + 56) - *(_QWORD *)(v3 + 48)) >> 2) )
    return 1;
  while ( v4 < (unsigned int)((__int64)(*(_QWORD *)(v5 + 56) - *(_QWORD *)(v5 + 48)) >> 2) )
  {
    ItemAt = Microsoft::Bamo::ListProxyDetails<unsigned int,Microsoft::Bamo::Lib::dataprovider_AutoBamos::BamoList_uint_Proxy,0,0,0>::GetItemAt(
               v5,
               v4);
    if ( (*(unsigned int (__fastcall **)(struct CResource *))(*(_QWORD *)a2 + 144LL))(a2) == ItemAt )
      return 1;
    ++v4;
  }
  return 0;
}
