/*
 * XREFs of MiMirrorAddPagesToBrownList @ 0x14026E03C
 * Callers:
 *     MiWalkPagesOnLists @ 0x14026E7E0 (MiWalkPagesOnLists.c)
 *     MiMirrorZeroFreeListsCallback @ 0x14041D1E0 (MiMirrorZeroFreeListsCallback.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14026E120 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiMirrorAddPagesToBrownList(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  volatile signed __int32 *v6; // r9
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned __int64 v10; // rdx

  v4 = a1 >> 5;
  v5 = a2;
  v6 = (volatile signed __int32 *)(*((_QWORD *)&xmmword_140E301E0 + 1) + 4 * v4);
  v7 = a1 & 0x1F;
  if ( v7 + a2 <= 0x20 )
  {
    if ( a2 == 32 )
    {
      *v6 = 0;
      return RtlSetBitsEx(&xmmword_140E301D0, a1, a2);
    }
    v8 = ~(((1 << a2) - 1) << v7);
    goto LABEL_4;
  }
  if ( (a1 & 0x1F) != 0 )
  {
    _InterlockedAnd(v6, ~(((1 << (32 - (a1 & 0x1F))) - 1) << v7));
    v5 = a2 - (32 - (unsigned int)(a1 & 0x1F));
    ++v6;
  }
  if ( v5 >= 0x20 )
  {
    v10 = v5 >> 5;
    v5 += -32LL * (v5 >> 5);
    do
    {
      *v6++ = 0;
      --v10;
    }
    while ( v10 );
  }
  if ( v5 )
  {
    v8 = -1 << v5;
LABEL_4:
    _InterlockedAnd(v6, v8);
  }
  return RtlSetBitsEx(&xmmword_140E301D0, a1, a2);
}
