/*
 * XREFs of ?DxgkLogAndUpdateQDCCacheForDatabaseQuery@@YAJIJIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1401C46D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x14031D1E0 (-LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z.c)
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031EB28 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 */

__int64 __fastcall DxgkLogAndUpdateQDCCacheForDatabaseQuery(
        unsigned int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        char a7,
        unsigned __int64 a8)
{
  unsigned int v11; // edi
  unsigned int v12; // r12d
  struct DXGGLOBAL *Global; // rax
  int v14; // eax

  v11 = 0;
  v12 = LogDiagQDC(a5, Src, a3, a4, a2, (enum DISPLAYCONFIG_TOPOLOGY_ID *)&a7, a8);
  if ( a2 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v14 = QDC_CACHE::AddToCache(
            *((QDC_CACHE **)Global + 183),
            a1,
            v12,
            a3,
            a5,
            Src,
            (enum DISPLAYCONFIG_TOPOLOGY_ID *)&a7);
    v11 = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(3LL, v14);
      WdLogGlobalForLineNumber = 1661;
    }
  }
  return v11;
}
