/*
 * XREFs of MiInitializeCommitment @ 0x140687468
 * Callers:
 *     MiInitializePartition @ 0x1407ECD28 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x14068733C (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(__int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r10
  unsigned __int16 **v6; // rcx
  __int64 v7; // r9
  unsigned __int16 *v8; // r8
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx

  if ( (ULONG *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 16896) = (-(__int64)(*(_QWORD *)(a1 + 18512) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 16896) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 552) = 0;
  v2 = *(_BYTE *)(a1 + 559);
  *(_QWORD *)(a1 + 512) = 1LL;
  *(_QWORD *)(a1 + 504) = a1;
  *(_BYTE *)(a1 + 559) = v2 & 0xF9 | 4;
  *(_BYTE *)(a1 + 556) = -1;
  *(_WORD *)(a1 + 528) = 0;
  *(_DWORD *)(a1 + 532) = 0;
  *(_BYTE *)(a1 + 530) = 6;
  *(_QWORD *)(a1 + 544) = a1 + 536;
  *(_QWORD *)(a1 + 536) = a1 + 536;
  v3 = *(_QWORD *)(a1 + 18688);
  if ( KeNumberNodes )
  {
    v4 = *(_QWORD *)(a1 + 16) + 14944LL;
    v5 = (unsigned __int16)KeNumberNodes;
    do
    {
      v6 = (unsigned __int16 **)v4;
      v7 = 2LL;
      do
      {
        v8 = *v6;
        if ( dword_140E2DD0C )
        {
          v9 = (unsigned int)dword_140E2DD0C;
          do
          {
            v10 = *v8;
            v8 += 8;
            v3 += v10;
            --v9;
          }
          while ( v9 );
        }
        ++v6;
        --v7;
      }
      while ( v7 );
      v4 += 57216LL;
      --v5;
    }
    while ( v5 );
  }
  *(_QWORD *)(a1 + 18752) = v3;
  result = MiIncreaseCommitLimits(a1, *(_QWORD *)(a1 + 18512), *(_QWORD *)(a1 + 18512), 0LL, 0, 0LL);
  v12 = *(_QWORD *)(a1 + 18512);
  if ( v12 != v3 )
    result = MiChargeCommit(a1, v12 - v3, 2);
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    result = *(_QWORD *)(a1 + 19264) - qword_140E37738 - qword_140E3DA00;
    qword_140E37718 = result;
  }
  return result;
}
