/*
 * XREFs of HalpDmaFlushContiguousTransferV3 @ 0x140331380
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14054F580 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaFlushBuffer @ 0x140333700 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140335A94 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 */

__int64 __fastcall HalpDmaFlushContiguousTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  __int64 result; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  size_t v15; // [rsp+20h] [rbp-38h]
  int v16; // [rsp+28h] [rbp-30h]

  result = HalpDmaNextContiguousPiece(a1, a2, 0, a4, a6, a5);
  if ( (_DWORD)result != a5 || *(_BYTE *)(a3 + 64) )
  {
    if ( !a6 )
    {
      LODWORD(v15) = a5;
      result = HalpDmaSyncMapBuffers(a1, a2, a4, a3, v15, 0, 0, a7);
    }
    if ( a8 )
    {
      v14 = ((a4 & 0xFFF) + (unsigned __int64)a5 + 4095) >> 12;
      if ( (_DWORD)v14 )
      {
        result = (unsigned int)v14;
        do
        {
          a3 = *(_QWORD *)(a3 + 8);
          --result;
        }
        while ( result );
      }
      *a8 = a3;
    }
  }
  else
  {
    if ( !a6 && !*(_BYTE *)(a1 + 445) )
    {
      LOBYTE(v16) = a7;
      LOBYTE(v15) = 0;
      HalpDmaFlushBuffer(v13, a2, a4, a5, v15, v16);
    }
    result = (__int64)a8;
    if ( a8 )
      *a8 = a3;
  }
  return result;
}
