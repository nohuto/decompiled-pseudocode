/*
 * XREFs of HalpDmaFlushScatterTransferV3 @ 0x14033239C
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     IoFlushAdapterBuffersV3 @ 0x14054F580 (IoFlushAdapterBuffersV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140333410 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140333700 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140335A94 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 */

_UNKNOWN **__fastcall HalpDmaFlushScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        _QWORD *a8)
{
  _UNKNOWN **result; // rax
  int i; // ebp
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  _UNKNOWN **v19; // r8
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  size_t v23; // [rsp+20h] [rbp-38h]
  int v24; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (a3 || !*(_BYTE *)(a1 + 445)) && !a6 )
  {
    for ( i = a5; i; i -= v17 )
    {
      if ( a3 )
        v14 = *(_QWORD *)(a3 + 56);
      else
        LODWORD(v14) = 0;
      result = (_UNKNOWN **)HalpDmaNextContiguousPiece(a1, a2, v14, a4, 0, i);
      v17 = (unsigned int)result;
      v18 = a4 & 0xFFF;
      v19 = (_UNKNOWN **)(v18
                        + (*(_QWORD *)(a2
                                     + 8LL * (unsigned int)((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12)
                                     + 48) << 12));
      if ( (HalpDmaCvmConfiguration
         || (v18 = (unsigned __int64)v19 + (unsigned int)result - 1, *(_QWORD *)(a1 + 144) < v18))
        && *(_DWORD *)(a1 + 520) != 3
        || (LOBYTE(v16) = *(_BYTE *)(a1 + 445), !(_BYTE)v16)
        && ((v18 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1, v15, v19, v16) - 1,
             result = (_UNKNOWN **)v18,
             (v18 & v22) != 0)
         || ((unsigned int)v18 & (unsigned int)v17) != 0)
        || a3 && *(_BYTE *)(a3 + 64) )
      {
        LODWORD(v23) = v17;
        HalpDmaSyncMapBuffers(a1, a2, a4, *(_QWORD *)(a3 + 56), v23, 0, 0, a7);
        result = *(_UNKNOWN ***)(a3 + 56);
        v20 = ((unsigned __int64)(a4 & 0xFFF) + v17 + 4095) >> 12;
        if ( (_DWORD)v20 )
        {
          v21 = (unsigned int)v20;
          do
          {
            result = (_UNKNOWN **)result[1];
            --v21;
          }
          while ( v21 );
        }
        *(_QWORD *)(a3 + 56) = result;
      }
      else if ( !(_BYTE)v16 )
      {
        LOBYTE(v24) = a7;
        LOBYTE(v23) = 0;
        result = (_UNKNOWN **)HalpDmaFlushBuffer(v18, a2, a4, (unsigned int)v17, v23, v24);
      }
      a4 += v17;
    }
    if ( a8 )
    {
      if ( !a3 )
      {
        *a8 = 0LL;
        return result;
      }
      result = *(_UNKNOWN ***)(a3 + 56);
      *a8 = result;
    }
    else if ( !a3 )
    {
      return result;
    }
    *(_QWORD *)(a3 + 56) = a3;
  }
  return result;
}
