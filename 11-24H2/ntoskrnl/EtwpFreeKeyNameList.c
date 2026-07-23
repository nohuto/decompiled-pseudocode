/*
 * XREFs of EtwpFreeKeyNameList @ 0x1407AF5B0
 * Callers:
 *     EtwpEnableKeyProviders @ 0x1407AF1DC (EtwpEnableKeyProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x1407AF5E4 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x1403D9CC0 (RtlEnumerateGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 */

PVOID __fastcall EtwpFreeKeyNameList(PRTL_AVL_TABLE Table)
{
  _RTL_AVL_TABLE *i; // rbx
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
