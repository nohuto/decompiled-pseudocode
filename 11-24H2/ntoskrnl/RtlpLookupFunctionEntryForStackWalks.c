/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x140234380
 * Callers:
 *     RtlpWalkFrameChain @ 0x140233800 (RtlpWalkFrameChain.c)
 *     RtlpSameFunction @ 0x14047EF18 (RtlpSameFunction.c)
 *     PspGetSetContextInternal @ 0x1409882C0 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x140233240 (RtlpxLookupFunctionTable.c)
 *     RtlpLookupUserFunctionTable @ 0x140236130 (RtlpLookupUserFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

char *__fastcall RtlpLookupFunctionEntryForStackWalks(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rcx
  char *v6; // r9
  char *result; // rax
  unsigned int v8; // r10d
  unsigned __int64 v9; // rdi
  char *v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r10d
  int v15; // r11d
  char *v16; // rax

  v4 = (unsigned __int64 *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  if ( a1 >= v5 && a1 < v5 + *(unsigned int *)(a2 + 16) )
  {
    v6 = *(char **)a2;
    goto LABEL_4;
  }
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    v16 = (char *)RtlpLookupUserFunctionTable(a1);
LABEL_31:
    v6 = v16;
    goto LABEL_4;
  }
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    v16 = (char *)RtlpxLookupFunctionTable(a1, a2);
    goto LABEL_31;
  }
  *(_OWORD *)a2 = xmmword_141200030;
  *(_QWORD *)(a2 + 16) = qword_141200040;
  v6 = *(char **)a2;
LABEL_4:
  if ( v6 )
  {
    v8 = *(_DWORD *)(a2 + 20) / 0xCu;
    result = 0LL;
    if ( v8 )
    {
      v9 = a1 - *(_QWORD *)(a2 + 8);
      v10 = &v6[12 * v8 - 12];
      if ( v9 < *(unsigned int *)v10 )
      {
        v13 = 0;
        v14 = v8 - 2;
        while ( v14 >= v13 )
        {
          v15 = (v13 + v14) >> 1;
          v10 = &v6[12 * v15];
          if ( v9 < *(unsigned int *)v10 )
          {
            v14 = v15 - 1;
          }
          else
          {
            if ( v9 < *((unsigned int *)v10 + 3) )
              break;
            v13 = v15 + 1;
          }
        }
      }
      if ( v9 >= *(unsigned int *)v10 && v9 < *((unsigned int *)v10 + 1) )
        result = v10;
    }
    if ( result )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = *((unsigned int *)result + 2);
      if ( (v12 & 1) != 0 )
      {
        result = (char *)(v12 + v11 - 1);
        if ( v11 <= 0x7FFFFFFEFFFFLL && ((unsigned __int8)result & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
    }
  }
  else
  {
    if ( !HvlpHypercallCodeVa )
      goto LABEL_9;
    if ( v4 )
      *v4 = (unsigned __int64)HvlpHypercallCodeVa;
    if ( a1 >= *v4 && a1 < *v4 + 4096 )
    {
      *(_DWORD *)(a2 + 16) = 4096;
      return 0LL;
    }
    else
    {
LABEL_9:
      result = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_DWORD *)(a2 + 16) = 0;
    }
  }
  return result;
}
