/*
 * XREFs of RtlpHpLfhSubsegmentCountEmptyUnits @ 0x1402B4F80
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x1402B4ED8 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentReformatAsMulti @ 0x1402B64D8 (RtlpHpLfhSubsegmentReformatAsMulti.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFindEmptyUnits @ 0x1402B4FE0 (RtlpHpLfhSubsegmentFindEmptyUnits.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCountEmptyUnits(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v2; // eax
  unsigned int i; // r11d
  int EmptyUnits; // eax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 39);
  v2 = 0;
  v7 = 0;
  for ( i = 0; v2 < v1; v2 = v7 + EmptyUnits )
  {
    EmptyUnits = RtlpHpLfhSubsegmentFindEmptyUnits(a1, v2, &v7);
    if ( EmptyUnits == -1 )
      break;
    i += v7;
  }
  return i;
}
