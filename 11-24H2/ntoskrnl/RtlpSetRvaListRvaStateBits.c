/*
 * XREFs of RtlpSetRvaListRvaStateBits @ 0x14093F210
 * Callers:
 *     RtlpCompressRvaList @ 0x14093EA90 (RtlpCompressRvaList.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpSetRvaListRvaStateBits(__int64 a1, int a2, signed __int32 a3)
{
  unsigned int v3; // eax
  __int64 v4; // r8
  unsigned int v5; // eax
  signed __int32 v6; // [rsp+18h] [rbp+18h] BYREF

  v6 = a3;
  if ( a3 )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( v3 > 1 )
    {
      v4 = a2 * v3;
      v5 = 0;
      do
      {
        if ( _bittest(&v6, v5) )
          _bittestandset64(*(signed __int64 **)(a1 + 40), v4 + v5);
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a1 + 8) );
    }
  }
}
