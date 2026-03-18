/*
 * XREFs of MmGetWorkingSetLeafSize @ 0x140473450
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x140AD1640 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     MiTranslateWsType @ 0x1404734C0 (MiTranslateWsType.c)
 */

__int64 __fastcall MmGetWorkingSetLeafSize(int a1)
{
  __int64 v1; // rax
  char *v2; // rax

  if ( a1 == 1 )
  {
    v1 = *((_QWORD *)qword_140E2FD48 + HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink));
    if ( !*(_BYTE *)(v1 + 18524) )
      return 0LL;
    v2 = (char *)(v1 + 18816);
    if ( !v2 )
      return 0LL;
  }
  else
  {
    v2 = (char *)&unk_140E379C0 + 320 * (int)MiTranslateWsType();
  }
  return *((_QWORD *)v2 + 16);
}
