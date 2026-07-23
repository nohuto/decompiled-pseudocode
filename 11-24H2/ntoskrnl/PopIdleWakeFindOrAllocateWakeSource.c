/*
 * XREFs of PopIdleWakeFindOrAllocateWakeSource @ 0x1405D7EA8
 * Callers:
 *     PopIdleWakeNotifyWakeSource @ 0x1405D7FC4 (PopIdleWakeNotifyWakeSource.c)
 * Callees:
 *     PopIdleWakeAreIdenticalWakeSources @ 0x1405D7CC4 (PopIdleWakeAreIdenticalWakeSources.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x1405D7D64 (PopIdleWakeAssignAccountingToSource.c)
 */

__int64 __fastcall PopIdleWakeFindOrAllocateWakeSource(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  unsigned int i; // edi

  if ( (unsigned int)a2 <= 0xB )
    return a1 + 1184LL * a2 + 144;
  for ( i = 12; i < 0x20; ++i )
  {
    v6 = a1 + 1184LL * i + 144;
    if ( *(_DWORD *)v6 == 130 )
    {
      PopIdleWakeAssignAccountingToSource(a1, a1 + 1184LL * i + 144, a2, a3);
      *(_DWORD *)v6 = a2;
      *(_OWORD *)(v6 + 8) = *(_OWORD *)a3;
      *(_OWORD *)(v6 + 24) = *(_OWORD *)(a3 + 16);
      *(_OWORD *)(v6 + 40) = *(_OWORD *)(a3 + 32);
      *(_OWORD *)(v6 + 56) = *(_OWORD *)(a3 + 48);
      *(_OWORD *)(v6 + 72) = *(_OWORD *)(a3 + 64);
      *(_OWORD *)(v6 + 88) = *(_OWORD *)(a3 + 80);
      *(_OWORD *)(v6 + 104) = *(_OWORD *)(a3 + 96);
      *(_OWORD *)(v6 + 120) = *(_OWORD *)(a3 + 112);
      *(_QWORD *)(v6 + 136) = *(_QWORD *)(a3 + 128);
      return v6;
    }
    if ( a2 == *(_DWORD *)v6 && PopIdleWakeAreIdenticalWakeSources(a2, (_BYTE *)(v6 + 8), (_BYTE *)a3) )
      return v6;
  }
  return a1 + 4880;
}
