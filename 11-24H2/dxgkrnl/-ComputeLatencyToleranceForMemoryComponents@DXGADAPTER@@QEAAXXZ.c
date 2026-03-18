/*
 * XREFs of ?ComputeLatencyToleranceForMemoryComponents@DXGADAPTER@@QEAAXXZ @ 0x140042998
 * Callers:
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x14004A484 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140042A84 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 */

void __fastcall DXGADAPTER::ComputeLatencyToleranceForMemoryComponents(DXGADAPTER *this)
{
  unsigned __int64 v2; // rsi
  char *v3; // r14
  char *v4; // rdi
  char *v5; // rdx

  if ( *((_DWORD *)this + 845) )
    v2 = *((_QWORD *)this + 451);
  else
    v2 = *((_QWORD *)this + 452);
  v3 = (char *)this + 3728;
  v4 = (char *)*((_QWORD *)this + 466);
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = *(char **)v4;
    if ( v2 == *((_QWORD *)v5 - 7) )
      break;
    DXGADAPTER::SetPowerComponentLatencyCB(this, *((_DWORD *)v5 - 105), v2);
  }
}
