/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x14046C6CC
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AE2138 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x14046C73C (MiTranslateWsType.c)
 */

__int64 __fastcall MmGetWorkingSetLeafSize(int a1)
{
  __int64 v1; // rax
  char *v2; // rax

  if ( a1 == 1 )
  {
    v1 = *((_QWORD *)qword_140E300C8 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( !*(_BYTE *)(v1 + 18524) )
      return 0LL;
    v2 = (char *)(v1 + 18816);
    if ( !v2 )
      return 0LL;
  }
  else
  {
    v2 = (char *)&unk_140E37D40 + 320 * (int)MiTranslateWsType();
  }
  return *((_QWORD *)v2 + 16);
}
