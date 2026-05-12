/*
 * XREFs of NvmeControllerCreateAsyncEventContext @ 0x1400EBF04
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F0108 (NvmeControllerInitPhase3.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     NvmeControllerCreateAERExtendedCommandPool @ 0x1400EBDB4 (NvmeControllerCreateAERExtendedCommandPool.c)
 *     NvmeControllerDeleteAsyncEventContext @ 0x1400EC958 (NvmeControllerDeleteAsyncEventContext.c)
 *     NvmeControllerReinitAsyncEventContext @ 0x1400F3B38 (NvmeControllerReinitAsyncEventContext.c)
 */

__int64 __fastcall NvmeControllerCreateAsyncEventContext(__int64 a1, char a2)
{
  int v3; // edi
  int v5; // ecx
  unsigned __int16 v6; // si
  __int64 Pool; // rax

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 1224) )
    return 3221225659LL;
  if ( !*(_QWORD *)(a1 + 1416) )
    goto LABEL_6;
  if ( a2 )
  {
    ((void (*)(void))NvmeControllerDeleteAsyncEventContext)();
LABEL_6:
    v5 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 259LL);
    v6 = 4;
    if ( (unsigned int)(v5 + 1) < 4 )
      v6 = v5 + 1;
    Pool = RaidAllocatePool(72LL, 8LL * v6 + 32, 1396793682LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
    *(_QWORD *)(a1 + 1416) = Pool;
    if ( Pool )
    {
      *(_QWORD *)(Pool + 8) = Pool + 32;
      if ( (unsigned __int16)NvmeControllerCreateAERExtendedCommandPool(a1, v6) )
        return (unsigned int)v3;
    }
    v3 = -1073741670;
    goto LABEL_11;
  }
  v3 = NvmeControllerReinitAsyncEventContext();
  if ( v3 < 0 )
  {
LABEL_11:
    if ( *(_QWORD *)(a1 + 1416) )
      NvmeControllerDeleteAsyncEventContext(a1);
  }
  return (unsigned int)v3;
}
