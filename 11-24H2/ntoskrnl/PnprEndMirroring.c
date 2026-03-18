/*
 * XREFs of PnprEndMirroring @ 0x140B53B20
 * Callers:
 *     <none>
 * Callees:
 *     PnprQuiesce @ 0x1405A7C88 (PnprQuiesce.c)
 *     PnprSwap @ 0x1405A7FAC (PnprSwap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnprWakeProcessors @ 0x140B55254 (PnprWakeProcessors.c)
 */

__int64 __fastcall PnprEndMirroring(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r9

  v4 = 0;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      v4 = PnprSwap(a1, a2, a3, a4);
      if ( v4 >= 0 )
      {
        PnprWakeProcessors();
        return 1073742484;
      }
      else
      {
        guard_dispatch_icall_no_overrides(3LL, *(_QWORD *)(PnprContext + 33176), v5, v6);
        PnprWakeProcessors();
      }
    }
  }
  else
  {
    *(_BYTE *)(PnprContext + 208) = 1;
    return (unsigned int)PnprQuiesce();
  }
  return (unsigned int)v4;
}
