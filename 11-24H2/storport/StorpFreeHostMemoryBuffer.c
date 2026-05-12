/*
 * XREFs of StorpFreeHostMemoryBuffer @ 0x1400538E8
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400EF734 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeFreeHostMemoryBuffer @ 0x1400F8BE0 (NvmeFreeHostMemoryBuffer.c)
 * Callees:
 *     RaMiniportGetRaidAdapter @ 0x140036868 (RaMiniportGetRaidAdapter.c)
 *     MiniportGetNvmeAdapter @ 0x140053A10 (MiniportGetNvmeAdapter.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorpFreeHostMemoryBuffer(__int64 a1)
{
  _BYTE *v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 NvmeAdapter; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rbp
  __int64 RaidAdapter; // rax
  struct _MDL *v9; // rcx
  unsigned int *v10; // r14

  v1 = *(_BYTE **)(a1 - 16);
  v2 = 0LL;
  v3 = 0LL;
  if ( (v1[248] & 1) == 0 )
  {
    RaidAdapter = RaMiniportGetRaidAdapter(v1);
    v2 = RaidAdapter;
    if ( RaidAdapter )
    {
      v5 = *(unsigned int **)(RaidAdapter + 5600);
      if ( v5 )
      {
        v6 = *(_QWORD *)(RaidAdapter + 880);
        goto LABEL_10;
      }
      return 3238002689LL;
    }
    return 3238002694LL;
  }
  NvmeAdapter = MiniportGetNvmeAdapter();
  v3 = NvmeAdapter;
  if ( !NvmeAdapter )
    return 3238002694LL;
  v5 = *(unsigned int **)(NvmeAdapter + 1408);
  if ( !v5 )
    return 3238002689LL;
  v6 = *(_QWORD *)(NvmeAdapter + 1144);
  do
  {
LABEL_10:
    v9 = (struct _MDL *)*((_QWORD *)v5 + 1);
    v10 = *(unsigned int **)v5;
    if ( v9 )
    {
      MmFreePagesFromMdl(v9);
      ExFreePoolWithTag(*((PVOID *)v5 + 1), 0);
    }
    if ( *((_QWORD *)v5 + 3) )
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v6 + 8) + 24LL))(v6, v5[8], *((_QWORD *)v5 + 2));
    ExFreePoolWithTag(v5, 0);
    v5 = v10;
  }
  while ( v10 );
  if ( v2 )
  {
    *(_QWORD *)(v2 + 5600) = 0LL;
  }
  else if ( v3 )
  {
    *(_QWORD *)(v3 + 1408) = 0LL;
  }
  return 0LL;
}
