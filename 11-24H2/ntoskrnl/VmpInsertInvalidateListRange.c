/*
 * XREFs of VmpInsertInvalidateListRange @ 0x14039FB08
 * Callers:
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     VmpInvalidateSlatBatched @ 0x140479E38 (VmpInvalidateSlatBatched.c)
 * Callees:
 *     VmpProcessInvalidateList @ 0x1404A41E8 (VmpProcessInvalidateList.c)
 *     VmpLogTbFlushSlatInvalidateInsert @ 0x14064A500 (VmpLogTbFlushSlatInvalidateInsert.c)
 */

unsigned __int64 __fastcall VmpInsertInvalidateListRange(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned int v9; // edi
  unsigned int *v10; // rsi
  __int64 *v11; // rdi
  int v12; // eax
  unsigned int v13; // edx
  __int64 *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // r14
  unsigned int *v21; // r12
  __int64 v22; // rcx

  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && (*(_BYTE *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 2) != 0 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL);
    v9 = a6;
    if ( (v18 & 2) == v18 )
      VmpLogTbFlushSlatInvalidateInsert(v18, a4, a3, a5, a6, *(_QWORD *)(a1 + 104));
  }
  else
  {
    v9 = a6;
  }
  if ( *((unsigned __int16 *)a2 + 3) != v9 && *((_QWORD *)a2 + 1) )
    VmpProcessInvalidateList(a1, a2);
  v10 = a2 + 4;
  v11 = (__int64 *)(a2 + 2);
  if ( (a2[1] & 2) != 0 )
  {
    v19 = *v11;
    if ( a3 == *v11 + (*(_QWORD *)v10 >> 12) )
    {
      result = v19 + a5;
      *v11 = v19 + a5;
      return result;
    }
    VmpProcessInvalidateList(a1, a2);
  }
  v12 = a2[1] & 1;
  if ( a5 <= 0xFFF )
  {
    if ( v12 && a3 == *v11 + (*(_QWORD *)v10 >> 12) )
    {
      v13 = *a2;
      v20 = a2 + 2;
      if ( *a2 == 512 )
        goto LABEL_34;
LABEL_12:
      *(_QWORD *)&a2[2 * v13 + 4] = (a3 << 12) | a2[2 * v13 + 4] & 0xFFF;
      v16 = *a2;
      result = a5 ^ (*(_QWORD *)&a2[2 * v16 + 4] ^ a5) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)&a2[2 * v16 + 4] = result;
      ++*a2;
      *v11 += a5;
      return result;
    }
    v13 = *a2;
    v14 = (__int64 *)(a2 + 2);
    if ( *a2 != 512 )
    {
      if ( a5 + *v11 < 0xFF )
      {
LABEL_10:
        v11 = v14;
        v15 = a2[1];
        if ( *v14 )
        {
          a2[1] = v15 & 0xFFFFFFFE;
        }
        else
        {
          a2[1] = v15 | 1;
          *((_WORD *)a2 + 3) = a6;
        }
        goto LABEL_12;
      }
      v14 = (__int64 *)(a2 + 2);
    }
    if ( *v11 )
    {
      VmpProcessInvalidateList(a1, a2);
      v13 = *a2;
    }
    goto LABEL_10;
  }
  v20 = a2 + 2;
  if ( !v12 )
  {
    v21 = a2 + 4;
LABEL_32:
    if ( *v11 )
    {
      VmpProcessInvalidateList(a1, a2);
      v10 = v21;
    }
    goto LABEL_34;
  }
  if ( a3 != *v11 + (*(_QWORD *)v10 >> 12) )
  {
    v21 = a2 + 4;
    v20 = a2 + 2;
    goto LABEL_32;
  }
LABEL_34:
  v22 = *v11;
  if ( !*v11 )
    *(_QWORD *)v10 = (a3 << 12) | *v10 & 0xFFF;
  *(_QWORD *)v10 &= 0xFFFFFFFFFFFFF000uLL;
  *v20 = v22 + a5;
  result = a6;
  a2[1] = 3;
  *((_WORD *)a2 + 3) = a6;
  *a2 = 1;
  return result;
}
