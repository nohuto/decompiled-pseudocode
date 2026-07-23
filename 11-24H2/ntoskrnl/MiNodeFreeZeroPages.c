/*
 * XREFs of MiNodeFreeZeroPages @ 0x14033FC00
 * Callers:
 *     MiCheckZeroFreeRebalance @ 0x14033F29C (MiCheckZeroFreeRebalance.c)
 *     MiSignalLargePageRebuild @ 0x140354758 (MiSignalLargePageRebuild.c)
 *     MiRebuildLargePages @ 0x1403F6DC0 (MiRebuildLargePages.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiFreeZeroPagesNeeded @ 0x1403F7650 (MiFreeZeroPagesNeeded.c)
 *     MiPruneStandbyPages @ 0x1403F7714 (MiPruneStandbyPages.c)
 *     MiNodeAvailablePages @ 0x14047E7E0 (MiNodeAvailablePages.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFreeZeroPages(__int64 a1, unsigned __int8 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  int v5; // r15d
  __int64 v6; // rbp
  __int64 v7; // r12
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // r9
  __int64 v14; // r11
  __int64 v15; // r10
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rbp
  __int64 *v19; // rsi
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v24; // [rsp+0h] [rbp-48h]
  __int64 v26; // [rsp+68h] [rbp+20h]

  v3 = a2;
  v4 = 0LL;
  v5 = 0;
  v6 = ((unsigned int)~a3 >> 4) & 1;
  v7 = 0LL;
  v24 = v6;
  v8 = a3 & 0x80000;
  v9 = a1;
  v10 = 116LL;
  do
  {
    if ( (unsigned __int8)MmNumberOfChannels > 1u )
      v11 = *(_QWORD *)(v9 + 8 * (v7 + 2 * v3) + 15152);
    else
      v11 = *(_QWORD *)(v9 + 8 * v7 + 3848);
    v4 += v11;
    v26 = v4;
    if ( v8 )
    {
      v12 = 0LL;
      v13 = MiPageSizes;
      v14 = v9;
      v15 = v3;
      v16 = 3LL;
      do
      {
        v17 = 0LL;
        if ( (_BYTE)v3 == 2 )
        {
          if ( v5 == 2 )
          {
            v17 = *(_QWORD *)(v14 + 8);
            v21 = (_QWORD *)(v14 + 16);
          }
          else
          {
            v21 = (_QWORD *)(v14 + 8 * (v5 + 1LL));
          }
          v15 = v3;
          v17 += *v21;
        }
        else
        {
          v18 = 2LL;
          v19 = (__int64 *)(v14 + 8 * (v15 + v10));
          do
          {
            v20 = *v19;
            v19 += 4;
            v17 += v20;
            --v18;
          }
          while ( v18 );
        }
        v22 = v17 * *v13++;
        v14 += 1280LL;
        v12 += v22;
        --v16;
      }
      while ( v16 );
      v9 = a1;
      v4 = v12 + v26;
      v6 = v24;
    }
    ++v5;
    ++v7;
    v10 += 2LL;
  }
  while ( v7 <= v6 );
  return v4;
}
