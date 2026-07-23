/*
 * XREFs of RtlpFindUCREntry @ 0x1800DBA60
 * Callers:
 *     RtlpFindAndCommitPages @ 0x18000D030 (RtlpFindAndCommitPages.c)
 *     RtlpInsertUCRBlock @ 0x1800DB980 (RtlpInsertUCRBlock.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180010460 (RtlpHeapHandleError.c)
 */

__int64 *__fastcall RtlpFindUCREntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v4; // rax
  __int64 **v5; // rbx
  __int64 *result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r9
  int v9; // esi
  __int64 *v10; // r8
  int v11; // ebp
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned int v16; // r9d
  _DWORD *v17; // r8
  unsigned int v18; // edx
  int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int64 *i; // r9

  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)");
    RtlpHeapHandleError(1LL);
  }
  v4 = *(__int64 **)(a1 + 320);
  if ( v4 )
  {
    v7 = a2 >> 12;
    while ( 1 )
    {
      v8 = *((unsigned int *)v4 + 2);
      if ( v7 < v8 )
      {
        v9 = v8 - 1;
        goto LABEL_14;
      }
      if ( !*v4 )
        break;
      v4 = (__int64 *)*v4;
    }
    v9 = v8 - 1;
    LODWORD(v7) = v8 - 1;
LABEL_14:
    v10 = (__int64 *)v4[4];
    v11 = *((_DWORD *)v4 + 6);
    v12 = 0LL;
    v13 = (unsigned int)(v7 - v11);
    v14 = v10[1];
    if ( v10 == (__int64 *)v14 || (int)a2 - *(_DWORD *)(v14 + 40) > 0 )
      return (__int64 *)v4[4];
    if ( (int)a2 - *(_DWORD *)(*v10 + 40) <= 0 )
      return (__int64 *)*v10;
    if ( !*v4 && (_DWORD)v7 == v9 )
    {
      if ( *((_DWORD *)v4 + 3) )
        v13 = (unsigned int)(2 * v13);
      for ( i = *(__int64 **)(v4[6] + 8 * v13); v10 != i; i = (__int64 *)*i )
      {
        if ( (int)a2 - *((_DWORD *)i + 10) <= 0 )
          return i;
      }
    }
    else
    {
      v15 = (unsigned int)v13 >> 5;
      v16 = ((unsigned int)(v8 - v11) >> 5) - 1;
      v17 = (_DWORD *)(v4[5] + 4 * v15);
      v18 = *v17 & (-1 << ((v7 - v11) & 0x1F));
      if ( v18 )
      {
LABEL_20:
        if ( (_WORD)v18 )
        {
          if ( (_BYTE)v18 )
            v19 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int8)v18];
          else
            v19 = (unsigned __int8)RtlpBitsClearLow[BYTE1(v18)] + 8;
        }
        else if ( (v18 & 0xFF0000) != 0 )
        {
          v19 = (unsigned __int8)RtlpBitsClearLow[BYTE2(v18)] + 16;
        }
        else
        {
          v19 = (unsigned __int8)RtlpBitsClearLow[(unsigned __int64)v18 >> 24] + 24;
        }
        v20 = 32 * v15 + v19;
        v21 = 2 * v20;
        if ( !*((_DWORD *)v4 + 3) )
          v21 = v20;
        return *(__int64 **)(v4[6] + 8LL * v21);
      }
      else
      {
        while ( (unsigned int)v15 <= v16 )
        {
          v18 = v17[1];
          ++v17;
          LODWORD(v15) = v15 + 1;
          if ( v18 )
            goto LABEL_20;
        }
      }
    }
    return (__int64 *)v12;
  }
  else
  {
    v5 = (__int64 **)(a1 + 240);
    for ( result = *v5; v5 != (__int64 **)result; result = (__int64 *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return (__int64 *)v5;
  }
}
