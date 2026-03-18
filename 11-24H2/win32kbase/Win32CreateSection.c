/*
 * XREFs of Win32CreateSection @ 0x1400796CC
 * Callers:
 *     HmgCreate @ 0x1400798EC (HmgCreate.c)
 *     EngAllocSectionMem @ 0x1401C42A0 (EngAllocSectionMem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int Section; // ebx

  Section = MmCreateSection(a1, a2, 0LL, a4, 4, a6, 0LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
