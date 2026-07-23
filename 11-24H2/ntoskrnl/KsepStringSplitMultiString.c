/*
 * XREFs of KsepStringSplitMultiString @ 0x14073E198
 * Callers:
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     KsepStringFree @ 0x140943154 (KsepStringFree.c)
 *     KsepStringDuplicate @ 0x1409445C4 (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepStringSplitMultiString(__int64 a1, unsigned __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rbx
  unsigned int v9; // edx
  unsigned int v10; // r8d
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rbp
  char *Paged; // rdi
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  int v19; // r15d
  unsigned __int64 v20; // rbx
  char *v21; // rsi
  __int64 v22; // rax

  v4 = 0;
  v5 = a2 >> 1;
  if ( !a1 || (a2 & 1) != 0 || !a3 || !a4 || v5 < 3 || *(_WORD *)(a1 + 2 * v5 - 2) || *(_WORD *)(a1 + 2 * v5 - 4) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v11 = 0LL;
    do
    {
      v12 = v9 + 1;
      if ( *(_WORD *)(a1 + 2 * v11) )
        v12 = v9;
      v11 = ++v10;
      v9 = v12;
    }
    while ( v10 < v5 );
    v13 = v12;
    if ( v12 < 2 )
    {
      v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v14 + 1] = -1073740768;
      KsepHistoryErrors[2 * v14] = 197557;
      if ( (KsepDebugFlag & 4) != 0 )
      {
        RtlAssert("NullCount >= 2", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3B5u, 0LL);
        v9 = v13;
      }
    }
    v15 = v9 - 1;
    Paged = (char *)KsepPoolAllocatePaged(16 * v15);
    if ( Paged )
    {
      v18 = 0;
      v19 = 0;
      v20 = v5 - 1;
      while ( v4 < v20 )
      {
        if ( *(_WORD *)(a1 + 2LL * v4) )
        {
          ++v4;
        }
        else
        {
          if ( (int)KsepStringDuplicate(&Paged[16 * v19], a1 + 2LL * v18) < 0 )
          {
            v17 = -1073741801;
            if ( (_DWORD)v15 )
            {
              v21 = Paged;
              do
              {
                KsepStringFree(v21);
                v21 += 16;
                --v15;
              }
              while ( v15 );
            }
            KsepPoolFreePaged(Paged);
            return v17;
          }
          v18 = v4 + 1;
          ++v19;
          ++v4;
        }
      }
      if ( v19 != (_DWORD)v15 )
      {
        v22 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
        KsepHistoryErrors[2 * v22 + 1] = -1073740768;
        KsepHistoryErrors[2 * v22] = 197597;
        if ( (KsepDebugFlag & 4) != 0 )
          RtlAssert("Count == StringsVectorSize", "minkernel\\ntos\\kshim\\ksemisc.c", 0x3DDu, 0LL);
      }
      *a3 = Paged;
      v17 = 0;
      *a4 = v15;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v17;
}
