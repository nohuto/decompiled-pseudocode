/*
 * XREFs of ?DxgkQueryDatabaseFromQDCCache@@YAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1401C4960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z @ 0x1401C51D8 (-GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI0@Z.c)
 *     ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x14032D2A0 (-GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOP.c)
 */

int __fastcall DxgkQueryDatabaseFromQDCCache(
        unsigned int a1,
        unsigned int *a2,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4,
        unsigned int *a5)
{
  QDC_CACHE *v9; // rcx

  v9 = (QDC_CACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 183);
  if ( a3 )
    return QDC_CACHE::GetCachedData(v9, a1, a2, a3, a4, a5);
  else
    return QDC_CACHE::GetCachedBufferSizes(v9, a1, a2, a5);
}
