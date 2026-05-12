/*
 * XREFs of NvmeAdapterIdleState @ 0x14012E860
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerPowerSetFState @ 0x140132460 (NvmeControllerPowerSetFState.c)
 */

__int64 __fastcall NvmeAdapterIdleState(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  unsigned int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 68LL) = a3;
  if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
  {
    v5 = a1[142];
    v7[0] = 1;
    v7[1] = 24;
    v8 = 0LL;
    v9 = a2;
    v10 = a3;
    NvmeControllerPowerSetFState(v5, v7);
  }
  return PoFxCompleteIdleState(**(_QWORD **)(a1[20] + 8LL), a2);
}
