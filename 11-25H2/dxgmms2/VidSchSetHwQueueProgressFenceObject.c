/*
 * XREFs of VidSchSetHwQueueProgressFenceObject @ 0x140105D00
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchSetHwQueueProgressFenceObject(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int *v4; // rax
  __int64 v5; // rcx

  if ( a3 >= 2 )
  {
    *(_QWORD *)(a1 + 104) = a2;
  }
  else
  {
    *(_QWORD *)(a1 + 24LL * a3 + 56) = a2;
    v4 = *(unsigned int **)(a2 + 72);
    if ( *(_DWORD *)(a2 + 48) == 6 || *(_BYTE *)(a2 + 30) )
      v5 = *(_QWORD *)v4;
    else
      v5 = *v4;
    *(_QWORD *)(a1 + 24LL * a3 + 64) = v5;
    *(_QWORD *)(a1 + 24LL * a3 + 72) = v5;
  }
}
