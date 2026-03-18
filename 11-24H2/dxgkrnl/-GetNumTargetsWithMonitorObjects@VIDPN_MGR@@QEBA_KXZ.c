/*
 * XREFs of ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x1400635B8
 * Callers:
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403D3284 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z @ 0x14018AC88 (-MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z.c)
 */

unsigned __int64 __fastcall VIDPN_MGR::GetNumTargetsWithMonitorObjects(VIDPN_MGR *this)
{
  struct DXGADAPTER *ContainingAdapter; // rax
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(this);
  v2 = 1;
  if ( (int)MonitorGetNumConnectedMonitor(ContainingAdapter, &v4) < 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 483;
  }
  if ( v4 > 1 )
    return v4;
  return v2;
}
