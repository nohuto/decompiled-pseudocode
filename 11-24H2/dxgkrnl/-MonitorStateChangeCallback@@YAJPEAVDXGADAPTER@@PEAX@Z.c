/*
 * XREFs of ?MonitorStateChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140397DD0
 * Callers:
 *     ?MonitorStateChangeThread@@YAXPEAX@Z @ 0x140397C60 (-MonitorStateChangeThread@@YAXPEAX@Z.c)
 * Callees:
 *     ?MakeAdapterActive@DXGADAPTER@@QEAAXXZ @ 0x140397DF4 (-MakeAdapterActive@DXGADAPTER@@QEAAXXZ.c)
 *     ?MakeAdapterIdle@DXGADAPTER@@QEAAXXZ @ 0x140397EAC (-MakeAdapterIdle@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorStateChangeCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  if ( a2[40] )
    DXGADAPTER::MakeAdapterActive(a1);
  else
    DXGADAPTER::MakeAdapterIdle(a1);
  return 0LL;
}
