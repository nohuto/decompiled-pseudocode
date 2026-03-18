/*
 * XREFs of HalpAllocateAdapterChannel @ 0x1403319C4
 * Callers:
 *     HalAllocateAdapterChannelEx @ 0x140331770 (HalAllocateAdapterChannelEx.c)
 *     HalpBuildScatterGatherList @ 0x140332DE0 (HalpBuildScatterGatherList.c)
 *     HalAllocateAdapterChannel @ 0x14053AEC0 (HalAllocateAdapterChannel.c)
 *     HalRealAllocateAdapterChannelV3 @ 0x14054F350 (HalRealAllocateAdapterChannelV3.c)
 * Callees:
 *     HalpDmaStartWcb @ 0x140331B6C (HalpDmaStartWcb.c)
 *     HalpAllocateDmaResourcesInternal @ 0x140331C00 (HalpAllocateDmaResourcesInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall HalpAllocateAdapterChannel(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, __int64 a6)
{
  unsigned int *v6; // r10
  _DWORD *v11; // rcx
  _DWORD *v12; // r9
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // bp
  unsigned __int8 CurrentIrql; // bl
  __int64 v22; // rdx

  v6 = (unsigned int *)(a2 + 20);
  v11 = (_DWORD *)(a2 + 20);
  if ( (*(_DWORD *)(a2 + 20) & 2) != 0 )
  {
    _m_prefetchw((const void *)(a2 - 8));
    if ( (_InterlockedOr((volatile signed __int32 *)(a2 - 8), 4u) & 2) != 0 )
      return 3221225760LL;
    v11 = (_DWORD *)(a2 + 20);
  }
  v12 = (_DWORD *)(a2 + 20);
  if ( *(_BYTE *)(a1 + 440) )
  {
    v12 = v11;
    if ( a3 > *(_DWORD *)(a1 + 232) )
      return 3221225626LL;
  }
  v13 = *v6 | 4;
  if ( (a5 & 2) == 0 )
    v13 = *v6 & 0xFFFFFFFB;
  *v6 = v13;
  *(_QWORD *)(a2 + 24) = a6;
  *(_DWORD *)(a2 + 40) = a3;
  *(_DWORD *)(a2 + 16) = 1;
  v14 = (a4 << 12) | v13 & 0xFFF;
  v15 = v14 | 1u;
  v16 = v14 & 0xFFFFFFFE;
  v17 = (a5 & 1) != 0 ? 0xC000009A : 0;
  if ( (a5 & 1) == 0 )
    v15 = v16;
  *v12 = v15;
  LOBYTE(v15) = v15 & 1;
  if ( (unsigned __int8)HalpDmaStartWcb(a1, a2, v15) )
  {
    *(_DWORD *)(a1 + 248) = a3;
    v20 = 0;
    *(_QWORD *)(a1 + 352) = a2;
    CurrentIrql = 0;
    *(_DWORD *)(a1 + 388) = 1;
    *(_DWORD *)(a1 + 624) = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v19) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v19);
      }
      v20 = 1;
    }
    LOBYTE(v18) = 1;
    if ( (unsigned __int8)HalpAllocateDmaResourcesInternal(a1, v18, 0LL) )
      v17 = 0;
    if ( v20 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v22) = CurrentIrql;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v22);
      }
      __writecr8(CurrentIrql);
    }
  }
  return v17;
}
