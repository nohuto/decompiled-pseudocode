/*
 * XREFs of MiAllocateReadList @ 0x1409C9A04
 * Callers:
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1402DA890 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x14041A410 (MmGetCurrentProcessorColor.c)
 *     MiInitializePageChainHead @ 0x1404201F0 (MiInitializePageChainHead.c)
 */

_QWORD *MiAllocateReadList()
{
  int CurrentProcessorColor; // eax
  int v1; // edx
  __int64 PoolMm; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8

  CurrentProcessorColor = MmGetCurrentProcessorColor();
  PoolMm = ExAllocatePoolMm(0x40uLL, 8LL * (unsigned int)(v1 - 1) + 248, 1817341261, CurrentProcessorColor | 0x80000000);
  v3 = (_QWORD *)PoolMm;
  if ( PoolMm )
  {
    MiInitializePageChainHead(PoolMm + 40);
    v5 = v4 + 64;
    do
    {
      MiInitializePageChainHead(v5);
      v5 = v6 + 24;
    }
    while ( v7 != 1 );
    v3[29] = v3 + 28;
    v3[28] = v3 + 28;
    v3[4] = v3 + 3;
    v3[3] = v3 + 3;
  }
  return v3;
}
