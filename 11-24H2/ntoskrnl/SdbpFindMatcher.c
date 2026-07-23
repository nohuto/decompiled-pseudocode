/*
 * XREFs of SdbpFindMatcher @ 0x140A95558
 * Callers:
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140947B70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpFindMatcher(_QWORD *a1, _DWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int TagFromTagID; // r8d
  unsigned __int16 i; // r9
  __int64 v10; // rcx

  TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a4, a5);
  if ( a5 )
  {
    for ( i = 0; i < 0x20u; ++i )
    {
      v10 = 32LL * i;
      if ( TagFromTagID == *(_DWORD *)(v10 + a3 + 592) )
      {
        *a1 = *(_QWORD *)(32 * (i + 19LL) + a3);
        *a2 = *(_DWORD *)(v10 + a3 + 616);
        return *(_QWORD *)(v10 + a3 + 600);
      }
    }
  }
  *a2 = 0;
  return 0LL;
}
