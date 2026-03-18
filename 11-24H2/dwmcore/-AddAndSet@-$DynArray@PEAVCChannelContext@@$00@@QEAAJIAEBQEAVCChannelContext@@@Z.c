/*
 * XREFs of ?AddAndSet@?$DynArray@PEAVCChannelContext@@$00@@QEAAJIAEBQEAVCChannelContext@@@Z @ 0x1801E7404
 * Callers:
 *     ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x1801E69F0 (-OpenChannel@CComposition@@IEAAJIK_KPEAX@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18000DD58 (-Grow@-$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CChannelContext *,1>::AddAndSet(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // edx
  unsigned __int64 *v11; // rdi
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rcx
  __int64 v15; // rdx

  v4 = 0;
  v8 = DynArrayImpl<1>::Grow(a1, 8u, a2, a4, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x191u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xE5u, 0LL);
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 24);
    v11 = (unsigned __int64 *)(*(_QWORD *)a1 + (unsigned int)(8 * v10));
    *(_DWORD *)(a1 + 24) = v10 + a2;
    if ( a2 )
    {
      v12 = v11;
      if ( a2 < 2 || v11 <= a3 && &v11[a2 - 1] >= a3 )
        goto LABEL_9;
      v13 = a2 & 0xFFFFFFFE;
      v12 = v11;
      do
        v4 += 2;
      while ( v4 < (unsigned int)v13 );
      memset64(v11, *a3, (2 * (v13 >> 1)) & 0x1FFFFFFFFFFFFFFFLL);
      if ( v4 < a2 )
      {
LABEL_9:
        v14 = &v12[v4];
        v15 = a2 - v4;
        do
        {
          *v14++ = *a3;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  return v9;
}
