/*
 * XREFs of ?GetGpuChild@DISPLAY_MUX_PAIRING@@AEBA?AW4MUX_GPU_CHILD@@U_LUID@@I@Z @ 0x140084B3C
 * Callers:
 *     ?IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z @ 0x14008545C (-IsTargetPartOfMux@DISPLAY_MUX_PAIRING@@QEBAJU_LUID@@IPEAE1@Z.c)
 *     ?SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z @ 0x1400884C0 (-SwitchMux@DISPLAY_MUX_PAIRING@@QEAAJU_LUID@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DISPLAY_MUX_PAIRING::GetGpuChild(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  if ( v3 && a2 == *(_QWORD *)(v3 + 16) && a3 == *(_DWORD *)(v3 + 356) )
    return 1LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( !v6 || a2 != *(_QWORD *)(v6 + 16) )
    return 0LL;
  if ( a3 == *(_DWORD *)(v6 + 356) )
    return 2;
  return v4;
}
