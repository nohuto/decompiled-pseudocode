/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1403265D0
 * Callers:
 *     RtlIsNameInExpression @ 0x140325F30 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x140325FB0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlAreNamesEqual @ 0x140326A70 (RtlAreNamesEqual.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  __int64 v4; // rsi
  unsigned __int16 *v5; // rdx
  unsigned int v6; // eax
  __int64 Pool2; // rax
  unsigned int v8; // eax
  unsigned int v9; // r11d
  __int64 v10; // r10
  unsigned __int64 v11; // r9

  v4 = *(_QWORD *)(PsGetCurrentServerSiloGlobals(a1, a2) + 1200);
  v6 = *v5;
  *(_WORD *)(a1 + 2) = v6;
  if ( (_WORD)v6 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, v6, 0x67727453u);
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
        if ( v4 )
        {
          if ( (unsigned __int16)v11 >= 0xC0u )
            LOWORD(v11) = *(_WORD *)(v4
                                   + 2
                                   * ((v11 & 0xF)
                                    + *(unsigned __int16 *)(v4
                                                          + 2LL
                                                          * (((unsigned __int8)v11 >> 4)
                                                           + (unsigned int)*(unsigned __int16 *)(v4 + 2 * (v11 >> 8))))))
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
