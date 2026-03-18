/*
 * XREFs of ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x140103F58
 * Callers:
 *     ?SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140090368 (-SuspendPurgeForVPRGrow@VIDMM_MEMORY_SEGMENT@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidMmSuspendDevices @ 0x1400EA5C0 (VidMmSuspendDevices.c)
 * Callees:
 *     ?IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6A_N11@Z@Z @ 0x140104064 (-IterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAX_K0PEAXP6A_N11@Z@Z.c)
 */

char __fastcall VIDMM_SEGMENT::FreeSpaceForSecureResource(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  bool (*v15)(void *, void *); // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+38h] [rbp-10h]
  int v18; // [rsp+39h] [rbp-Fh]
  __int16 v19; // [rsp+3Dh] [rbp-Bh]
  char v20; // [rsp+3Fh] [rbp-9h]

  if ( !*(_DWORD *)(a1 + 452) )
    return 1;
  v7 = *(_QWORD *)(a1 + 440);
  v8 = v7 + *(_QWORD *)(*(_QWORD *)a3 + 16LL);
  v9 = ~v7;
  v10 = v9 & v8;
  if ( a4 != 5 )
  {
    v12 = *(_QWORD *)(a1 + 456);
    if ( v12 - *(_QWORD *)(a1 + 424) >= v10 )
      goto LABEL_6;
    return 0;
  }
  v11 = *(_QWORD *)(a1 + 472);
  if ( v11 )
  {
    if ( v11 >= v10 )
    {
      v13 = *(_QWORD *)(a1 + 456);
      v12 = *(_QWORD *)(a1 + 464);
      goto LABEL_7;
    }
    return 0;
  }
  v12 = *(_QWORD *)(a1 + 464);
LABEL_6:
  v13 = v12 - v10;
LABEL_7:
  v16 = a2;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 1;
  if ( g_IsInternalReleaseOrDbg )
  {
    v14 = WdLogNewEntry5_WdTrace(v9);
    *(_QWORD *)(v14 + 24) = v13;
    *(_QWORD *)(v14 + 32) = v12;
    WdLogGlobalForLineNumber = 5483;
  }
  VIDMM_LINEAR_POOL::IterateAllocatedBlocksInRange(*(VIDMM_LINEAR_POOL **)(a1 + 208), v13, v12, &v16, v15);
  return v17;
}
