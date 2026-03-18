/*
 * XREFs of MiGetPartitionNodePageCounts @ 0x1403D5894
 * Callers:
 *     MiGetPartitionNodeInformation @ 0x1403D4C28 (MiGetPartitionNodeInformation.c)
 *     MiGetNodeChannelPageCounts @ 0x1403D560C (MiGetNodeChannelPageCounts.c)
 * Callees:
 *     MiSnapPageMoveInProgress @ 0x1403D598C (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x1403D59B8 (MiWaitForPageMoveComplete.c)
 */

__int64 __fastcall MiGetPartitionNodePageCounts(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbp
  unsigned int v6; // r8d
  __int64 v7; // rax
  int v8; // r8d
  __int64 *v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 *v13; // r9
  __int64 v14; // r11
  __int64 result; // rax
  unsigned int v16; // ebx
  char *v17; // rdi
  char v18; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  while ( 1 )
  {
    v6 = 0;
    do
    {
      v7 = MiSnapPageMoveInProgress(v5, 2 - (unsigned int)(v6 != 0));
      v6 = v8 + 1;
      *v9 = v7;
    }
    while ( v6 < 2 );
    v10 = 0LL;
    v11 = v5;
    v12 = 4LL;
    do
    {
      v13 = (__int64 *)(v10 + a3);
      v14 = 2LL;
      do
      {
        result = *(__int64 *)((char *)v13 + v11 - v10 - a3 + 8);
        *v13++ = result;
        --v14;
      }
      while ( v14 );
      v11 += 1280LL;
      v10 += 16LL;
      --v12;
    }
    while ( v12 );
    if ( v3 >= 0x100 )
      return result;
    v16 = 0;
    v17 = &v18;
    while ( 1 )
    {
      result = *(_QWORD *)v17 ^ MiWaitForPageMoveComplete(v5, 2 - (unsigned int)(v16 != 0));
      if ( (result & 0xFFFFFFFFFFFF0000uLL) != 0 )
        break;
      ++v16;
      v17 += 8;
      if ( v16 >= 2 )
      {
        if ( v16 == 2 )
          return result;
        break;
      }
    }
    ++v3;
  }
}
