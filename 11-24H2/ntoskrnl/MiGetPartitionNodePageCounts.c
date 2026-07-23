/*
 * XREFs of MiGetPartitionNodePageCounts @ 0x1402646F8
 * Callers:
 *     MiGetPartitionNodeInformation @ 0x1402636C4 (MiGetPartitionNodeInformation.c)
 *     MiGetNodeChannelPageCounts @ 0x140264470 (MiGetNodeChannelPageCounts.c)
 * Callees:
 *     MiSnapPageMoveInProgress @ 0x1402647F0 (MiSnapPageMoveInProgress.c)
 *     MiWaitForPageMoveComplete @ 0x14026481C (MiWaitForPageMoveComplete.c)
 */

__int64 __fastcall MiGetPartitionNodePageCounts(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rbp
  __int64 v6; // r8
  _BYTE *v7; // r9
  __int64 v8; // rax
  int v9; // r8d
  __int64 *v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 *v14; // r9
  __int64 v15; // r11
  __int64 v16; // r8
  __int64 result; // rax
  unsigned int v18; // ebx
  _QWORD *v19; // rdi
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v5 = *(_QWORD *)(a1 + 16) + 57216LL * a2;
  while ( 1 )
  {
    v6 = 0LL;
    v7 = v20;
    do
    {
      v8 = MiSnapPageMoveInProgress(v5, 2 - (unsigned int)((_DWORD)v6 != 0), v6, v7);
      v6 = (unsigned int)(v9 + 1);
      *v10 = v8;
      v7 = v10 + 1;
    }
    while ( (unsigned int)v6 < 2 );
    v11 = 0LL;
    v12 = v5;
    v13 = 4LL;
    do
    {
      v14 = (__int64 *)(v11 + a3);
      v15 = 2LL;
      v16 = v12 - v11 - a3;
      do
      {
        result = *(__int64 *)((char *)v14 + v16 + 8);
        *v14++ = result;
        --v15;
      }
      while ( v15 );
      v12 += 1280LL;
      v11 += 16LL;
      --v13;
    }
    while ( v13 );
    if ( v3 >= 0x100 )
      return result;
    v18 = 0;
    v19 = v20;
    while ( 1 )
    {
      result = *v19 ^ MiWaitForPageMoveComplete(v5, 2 - (unsigned int)(v18 != 0), v16, v14);
      if ( (result & 0xFFFFFFFFFFFF0000uLL) != 0 )
        break;
      ++v18;
      ++v19;
      if ( v18 >= 2 )
      {
        if ( v18 == 2 )
          return result;
        break;
      }
    }
    ++v3;
  }
}
