/*
 * XREFs of EtwpFreeKeyNameList @ 0x1407AF160
 * Callers:
 *     EtwpEnableKeyProviders @ 0x1407AED8C (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF194 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403EA300 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  RTL_AVL_TABLE *i; // rbx
  PVOID result; // rax

  for ( i = Table; ; Table = i )
  {
    result = RtlEnumerateGenericTableAvl(Table, 1u);
    if ( !result )
      break;
    RtlDeleteElementGenericTableAvl(i, result);
  }
  return result;
}
