/*
 * XREFs of HalpDmaFlushScatterTransferV3 @ 0x14038BDCC
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x14038BB40 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14054F7C0 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaFlushScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  unsigned int i; // ebp
  __int64 v13; // r8
  unsigned int ContiguousPiece; // eax
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  char v17; // r9
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  size_t v22; // [rsp+20h] [rbp-38h]

  if ( (a3 || !*(_BYTE *)(a1 + 445)) && !a6 )
  {
    for ( i = a5; i; i -= v15 )
    {
      if ( a3 )
        v13 = *(_QWORD *)(a3 + 56);
      else
        v13 = 0LL;
      ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, v13, a4, 0, i);
      v15 = ContiguousPiece;
      v16 = a4 & 0xFFF;
      if ( (HalpDmaCvmConfiguration
         || (v16 += (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
                  + ContiguousPiece
                  - 1LL,
             *(_QWORD *)(a1 + 144) < v16))
        && *(_DWORD *)(a1 + 520) != 3
        || (v17 = *(_BYTE *)(a1 + 445)) == 0
        && ((v16 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v16 & v21) != 0)
         || ((unsigned int)v16 & (unsigned int)v15) != 0)
        || a3 && *(_BYTE *)(a3 + 64) )
      {
        LODWORD(v22) = v15;
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD *)(a3 + 56), v22, 0, 0, a7);
        v18 = *(_QWORD *)(a3 + 56);
        v19 = ((a4 & 0xFFF) + v15 + 4095) >> 12;
        if ( (_DWORD)v19 )
        {
          v20 = (unsigned int)v19;
          do
          {
            v18 = *(_QWORD *)(v18 + 8);
            --v20;
          }
          while ( v20 );
        }
        *(_QWORD *)(a3 + 56) = v18;
      }
      else if ( !v17 )
      {
        HalpDmaFlushBuffer(v16, a2, a4, v15, 0, a7);
      }
      a4 += v15;
    }
    if ( a8 )
    {
      if ( !a3 )
      {
        *a8 = 0LL;
        return;
      }
      *a8 = *(_QWORD *)(a3 + 56);
    }
    else if ( !a3 )
    {
      return;
    }
    *(_QWORD *)(a3 + 56) = a3;
  }
}
