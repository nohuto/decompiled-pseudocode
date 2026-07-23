/*
 * XREFs of HalpDmaFlushContiguousTransferV3 @ 0x14038CE18
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x14038BB40 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14054F7C0 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaFlushContiguousTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        __int64 *a8)
{
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  size_t v15; // [rsp+20h] [rbp-38h]

  if ( (unsigned int)HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, a5) != a5 || *(_BYTE *)(a3 + 64) )
  {
    if ( !a6 )
    {
      LODWORD(v15) = a5;
      HalpDmaSyncMapBuffers(a1, a2, a4, a3, v15, 0, 0, a7);
    }
    if ( a8 )
    {
      v13 = ((a4 & 0xFFF) + a5 + 4095LL) >> 12;
      if ( (_DWORD)v13 )
      {
        v14 = (unsigned int)v13;
        do
        {
          a3 = *(_QWORD *)(a3 + 8);
          --v14;
        }
        while ( v14 );
      }
      *a8 = a3;
    }
  }
  else
  {
    if ( !a6 && !*(_BYTE *)(a1 + 445) )
      HalpDmaFlushBuffer(v12, a2, a4, a5, 0, a7);
    if ( a8 )
      *a8 = a3;
  }
}
