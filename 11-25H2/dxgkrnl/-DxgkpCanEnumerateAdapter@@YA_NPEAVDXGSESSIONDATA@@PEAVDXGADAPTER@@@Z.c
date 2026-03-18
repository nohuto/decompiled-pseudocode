/*
 * XREFs of ?DxgkpCanEnumerateAdapter@@YA_NPEAVDXGSESSIONDATA@@PEAVDXGADAPTER@@@Z @ 0x14031E4F8
 * Callers:
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x140295218 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x14031D170 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkSessionDisconnected @ 0x14031F4E0 (DxgkSessionDisconnected.c)
 *     ?AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z @ 0x14031FA20 (-AdvancedColorPowerSettingsCallback@DXGGLOBAL@@SAJPEBU_GUID@@PEAXK1@Z.c)
 *     ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x14031FF30 (-MonitorStateChangeThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z @ 0x140041038 (-CanEnumerateAdapter@DXGSESSIONDATA@@QEBA_NPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DxgkpCanEnumerateAdapter(struct DXGSESSIONDATA *a1, struct DXGADAPTER *a2)
{
  if ( a1 )
    return DXGSESSIONDATA::CanEnumerateAdapter(a1, a2);
  else
    return 1;
}
