/*
 * XREFs of KiInstallSubNodeHeteroSets @ 0x1404A7D80
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 *     KeUpdateProcessorRestrictions @ 0x1405B245C (KeUpdateProcessorRestrictions.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 * Callees:
 *     KiComputeHeteroSet @ 0x1404A7EBC (KiComputeHeteroSet.c)
 */

void __fastcall KiInstallSubNodeHeteroSets(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int i; // edi
  int v7; // ebx
  __int64 v8; // rsi
  int v9; // r15d
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  int v20; // [rsp+98h] [rbp+10h]

  if ( a4 )
  {
    v20 = a2;
    v18 = 0LL;
    v19 = 0LL;
    for ( i = 0; i < a4; ++i )
    {
      v7 = 0;
      v8 = 0LL;
      do
      {
        v9 = 0;
        v10 = 2 * v7;
        v11 = 0LL;
        do
        {
          if ( a2 )
          {
            KiComputeHeteroSet(v7, v9, KiDynamicHeteroCpuPolicy[v8 + v11], a1 + 128, a3, (__int64)&v18);
            v12 = v19;
            v10 = 2 * v7;
            v13 = *((_QWORD *)&v18 + 1);
            v14 = v18;
          }
          else
          {
            v14 = *(_QWORD *)(a1 + 128);
            *(_QWORD *)&v18 = v14;
            v13 = v14;
            *((_QWORD *)&v18 + 1) = v14;
            v12 = v14;
            v19 = v14;
          }
          v15 = v10 + v9;
          ++v11;
          ++v9;
          v16 = *(_QWORD *)(a1 + 192);
          v17 = 3LL * (i + *(unsigned __int8 *)(a1 + 185) * v15);
          *(_QWORD *)(v16 + 8 * v17 + 16) = v12;
          *(_QWORD *)(v16 + 8 * v17 + 8) = v13;
          *(_QWORD *)(v16 + 8 * v17) = v14;
          v10 = 2 * v7;
          a2 = v20;
        }
        while ( v9 < 2 );
        ++v7;
        v8 += 2LL;
      }
      while ( v7 < 7 );
      a3 += 16368LL;
    }
  }
}
