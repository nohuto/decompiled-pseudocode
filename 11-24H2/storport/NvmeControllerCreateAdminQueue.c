/*
 * XREFs of NvmeControllerCreateAdminQueue @ 0x1400EBE6C
 * Callers:
 *     NvmeAdapterFinalizeStorMQMiniportControllerStart @ 0x1400CFBBC (NvmeAdapterFinalizeStorMQMiniportControllerStart.c)
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall NvmeControllerCreateAdminQueue(_QWORD *a1)
{
  __int64 Pool; // rax
  __int64 v4; // rax

  if ( a1[89] || a1[107] )
    return 3221225701LL;
  Pool = RaidAllocatePool(64LL, 192LL, 1363763538LL, *(_QWORD *)(a1[16] + 8LL));
  a1[89] = Pool;
  if ( !Pool )
    return 3221225626LL;
  v4 = RaidAllocatePool(64LL, 192LL, 1363763538LL, *(_QWORD *)(a1[16] + 8LL));
  a1[107] = v4;
  return v4 != 0 ? 0 : 0xC000009A;
}
