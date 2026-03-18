/*
 * XREFs of RtlpLookupFunctionEntryForStackWalks @ 0x140259000
 * Callers:
 *     RtlpWalkFrameChain @ 0x140257BE0 (RtlpWalkFrameChain.c)
 *     RtlpSameFunction @ 0x140483548 (RtlpSameFunction.c)
 *     PspGetSetContextInternal @ 0x1409A5700 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlpLookupUserFunctionTable @ 0x14025AB80 (RtlpLookupUserFunctionTable.c)
 *     RtlpxLookupFunctionTable @ 0x14025BE40 (RtlpxLookupFunctionTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

unsigned int *__fastcall RtlpLookupFunctionEntryForStackWalks(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *result; // rax
  unsigned int v8; // r9d
  unsigned __int64 v9; // rdi
  unsigned int *v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r10d
  int v14; // r9d
  int v15; // r11d
  __int64 v16; // rax

  v4 = (unsigned __int64 *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  if ( a1 >= v5 && a1 < v5 + *(unsigned int *)(a2 + 16) )
  {
    v6 = *(_QWORD *)a2;
    goto LABEL_4;
  }
  if ( a1 <= 0x7FFFFFFEFFFFLL )
  {
    v16 = RtlpLookupUserFunctionTable(a1);
LABEL_31:
    v6 = v16;
    goto LABEL_4;
  }
  if ( a1 < *((_QWORD *)&xmmword_141200030 + 1)
    || a1 >= *((_QWORD *)&xmmword_141200030 + 1) + (unsigned __int64)(unsigned int)qword_141200040 )
  {
    v16 = RtlpxLookupFunctionTable(a1);
    goto LABEL_31;
  }
  *(_OWORD *)a2 = xmmword_141200030;
  *(_QWORD *)(a2 + 16) = qword_141200040;
  v6 = *(_QWORD *)a2;
LABEL_4:
  if ( v6 )
  {
    v8 = *(_DWORD *)(a2 + 20) / 0xCu;
    result = 0LL;
    if ( v8 )
    {
      v9 = a1 - *(_QWORD *)(a2 + 8);
      v10 = (unsigned int *)(v6 + 12LL * (v8 - 1));
      if ( v9 < *v10 )
      {
        v13 = 0;
        v14 = v8 - 2;
        while ( v14 >= v13 )
        {
          v15 = (v13 + v14) >> 1;
          v10 = (unsigned int *)(v6 + 12LL * v15);
          if ( v9 >= *v10 )
          {
            if ( v9 < v10[3] )
              break;
            v13 = v15 + 1;
          }
          else
          {
            v14 = v15 - 1;
          }
        }
      }
      if ( v9 >= *v10 && v9 < v10[1] )
        result = v10;
    }
    if ( result )
    {
      v11 = *(_QWORD *)(a2 + 8);
      v12 = result[2];
      if ( (v12 & 1) != 0 )
      {
        result = (unsigned int *)(v12 + v11 - 1);
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
