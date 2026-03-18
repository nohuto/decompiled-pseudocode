/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x14030F7D0
 * Callers:
 *     RtlIsNameInExpression @ 0x14030F100 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x14030F180 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlAreNamesEqual @ 0x1403104F0 (RtlAreNamesEqual.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  struct _LIST_ENTRY *Flink; // rsi
  __int16 *v5; // rdx
  __int16 v6; // ax
  __int64 Pool2; // rax
  unsigned int v8; // eax
  unsigned int v9; // r11d
  __int64 v10; // r10
  unsigned __int64 v11; // r9

  Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
  v6 = *v5;
  *(_WORD *)(a1 + 2) = *v5;
  if ( v6 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
    *(_QWORD *)(a1 + 8) = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    v8 = 0;
  }
  else
  {
    v8 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  v9 = *a2 >> 1;
  while ( v8 < v9 )
  {
    v10 = 2LL * v8;
    v11 = *(unsigned __int16 *)(v10 + *((_QWORD *)a2 + 1));
    if ( (unsigned int)v11 >= 0x61 )
    {
      if ( (unsigned int)v11 > 0x7A )
      {
        if ( Flink )
        {
          if ( (unsigned __int16)v11 >= 0xC0u )
            LOWORD(v11) = *((_WORD *)&Flink->Flink
                          + (v11 & 0xF)
                          + *((unsigned __int16 *)&Flink->Flink
                            + ((unsigned __int8)v11 >> 4)
                            + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v11 >> 8))))
                        + v11;
        }
      }
      else
      {
        LOWORD(v11) = v11 - 32;
      }
    }
    *(_WORD *)(v10 + *(_QWORD *)(a1 + 8)) = v11;
    ++v8;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
