/*
 * XREFs of HalpDmaLinkContiguousTranslations @ 0x14038AF38
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038829C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x14038AD70 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x140539A60 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140539AF8 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x1405502E4 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaLinkContiguousTranslations(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx

  v3 = *(_QWORD *)(a1 + 48);
  v4 = 0LL;
  v5 = a3;
  while ( v3 )
  {
    v6 = *(_DWORD *)(v3 + 8);
    if ( a2 < v6 )
    {
      v4 = v3;
      v3 = *(_QWORD *)(v3 + 16) + 72LL * a2;
      break;
    }
    v3 = *(_QWORD *)v3;
    a2 -= v6;
  }
  v7 = *(_QWORD *)(v4 + 16);
  v8 = *(_DWORD *)(v4 + 8);
  v9 = 0LL;
  v10 = (v3 - v7) / 72;
  v11 = v7 + 72LL * (unsigned int)v10;
  if ( (_DWORD)v5 )
  {
    v12 = v5;
    do
    {
      if ( (unsigned int)v10 >= v8 )
      {
        v4 = *(_QWORD *)v4;
        LODWORD(v10) = 0;
        v11 = *(_QWORD *)(v4 + 16);
      }
      if ( v9 )
        *(_QWORD *)(v9 + 8) = v11;
      v9 = v11;
      LODWORD(v10) = v10 + 1;
      v11 += 72LL;
      --v12;
    }
    while ( v12 );
  }
  return v3;
}
