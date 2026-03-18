/*
 * XREFs of MiPageFileLargestBitmapsRun @ 0x1403DB268
 * Callers:
 *     MiGatherPagefilePages @ 0x1403C0730 (MiGatherPagefilePages.c)
 *     MiFindBestOutswapPagefile @ 0x1403D896C (MiFindBestOutswapPagefile.c)
 *     MiGetKernelStackSwapSupport @ 0x1403D9714 (MiGetKernelStackSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x1403D9AC0 (MiFindFreePageFileSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 */

__int64 __fastcall MiPageFileLargestBitmapsRun(__int64 a1)
{
  unsigned int v2; // edi
  volatile signed __int32 *v3; // rsi
  volatile LONG *v4; // rcx
  KIRQL v5; // bp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 i; // rdx
  unsigned int v11; // ebx

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
  v6 = *(_QWORD *)(a1 + 112);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 && v6 )
    v6 ^= a1 + 112;
  v7 = 0LL;
  while ( v6 )
  {
    if ( *(_DWORD *)(v6 + 52) == -1 )
    {
      if ( !*(_DWORD *)(v6 + 48) )
        goto LABEL_14;
      v8 = *(_QWORD *)v6;
      v7 = v6;
    }
    else
    {
      v8 = *(_QWORD *)(v6 + 8);
    }
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 && v8 )
      v6 ^= v8;
    else
      v6 = v8;
  }
  v6 = v7;
LABEL_14:
  v9 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 )
  {
    for ( ; *(_QWORD *)(v9 + 8); v9 = *(_QWORD *)(v9 + 8) )
      ;
  }
  else
  {
    for ( i = *(_QWORD *)(v6 + 16); ; i = *(_QWORD *)(v9 + 16) )
    {
      v9 = i & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 || *(_QWORD *)(v9 + 8) == v6 )
        break;
      v6 = v9;
    }
  }
  if ( v9 )
    v2 = *(_DWORD *)(v9 + 52);
  v11 = *(_DWORD *)(a1 + 108);
  if ( v2 > v11 )
    v11 = v2;
  MiReleaseSpinLockShared(v3, v5);
  return v11;
}
