/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x1403C5B54
 * Callers:
 *     MiGatherPagefilePages @ 0x1402F9BC8 (MiGatherPagefilePages.c)
 *     MiGetKernelStackSwapSupport @ 0x1403C3FE0 (MiGetKernelStackSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x1403C438C (MiFindFreePageFileSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiFindBestOutswapPagefile @ 0x1403C9188 (MiFindBestOutswapPagefile.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  unsigned int v2; // edi
  volatile signed __int32 *v3; // rsi
  volatile LONG *v4; // rcx
  KIRQL v5; // bp
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 i; // rdx
  unsigned int v13; // ebx

  v2 = 0;
  v3 = (volatile signed __int32 *)(a1 + 200);
  v4 = (volatile LONG *)(a1 + 200);
  if ( KeGetCurrentIrql() == 2 )
  {
    v5 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(v4);
  }
  else
  {
    v5 = ExAcquireSpinLockShared(v4);
  }
  v7 = *(_QWORD *)(a1 + 112);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 && v7 )
    v7 ^= a1 + 112;
  v8 = 0LL;
  v9 = *(_BYTE *)(a1 + 120) & 1;
  while ( v7 )
  {
    if ( *(_DWORD *)(v7 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v7 + 48) )
        goto LABEL_14;
      v10 = *(_QWORD *)v7;
      v8 = v7;
    }
    else
    {
      v10 = *(_QWORD *)(v7 + 8);
    }
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 && v10 )
      v7 ^= v10;
    else
      v7 = v10;
  }
  v7 = v8;
LABEL_14:
  v11 = *(_QWORD *)v7;
  if ( *(_QWORD *)v7 )
  {
    for ( ; *(_QWORD *)(v11 + 8); v11 = *(_QWORD *)(v11 + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v7 + 16); ; i = *(_QWORD *)(v11 + 16) )
    {
      v11 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v11 || *(_QWORD *)(v11 + 8) == v7 )
        break;
      v7 = v11;
    }
  }
  if ( v11 )
    v2 = *(_DWORD *)(v11 + 52);
  v13 = *(_DWORD *)(a1 + 108);
  if ( v2 > v13 )
    v13 = v2;
  MiReleaseSpinLockShared(v3, v5, v9, v6);
  return v13;
}
