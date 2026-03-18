/*
 * XREFs of ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x140398884
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14029AE64 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x140397C60 (-MonitorStateChangeThread@@YAXPEAX@Z.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x140397F80 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     DxgkSessionDisconnected @ 0x140398350 (DxgkSessionDisconnected.c)
 * Callees:
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x140040AE8 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DxgkpCanEnumerateAdapter(struct DXGSESSIONDATA *a1, struct DXGADAPTER *a2)
{
  if ( a1 )
    return DXGSESSIONDATA::CanEnumerateAdapter(a1, a2);
  else
    return 1;
}
