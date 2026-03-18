/*
 * XREFs of ?ComputeLatencyTolerancesForEngineComponents@DXGADAPTER@@QEAAXXZ @ 0x140042A14
 * Callers:
 *     ?NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z @ 0x140053964 (-NotifyPrimaryMonitorPowerChange@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140042A84 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::ComputeLatencyTolerancesForEngineComponents(DXGADAPTER *this)
{
  char *v2; // rsi
  char *v3; // rbx
  char *v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r8

  if ( *((_QWORD *)this + 404) )
  {
    v2 = (char *)this + 3744;
    v3 = (char *)*((_QWORD *)this + 468);
    while ( v3 != v2 )
    {
      v4 = v3;
      v5 = *((int *)v3 - 10);
      v3 = *(char **)v3;
      v6 = *(_QWORD *)(*((_QWORD *)this + 439) + 16 * v5);
      if ( v6 != *((_QWORD *)v4 - 7) )
        DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v4 - 105), v6);
    }
  }
}
