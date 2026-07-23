/*
 * XREFs of WmipSMBiosFindStringAndZero @ 0x1407A4B90
 * Callers:
 *     WmipSMBiosHideMachine @ 0x1407A4C9C (WmipSMBiosHideMachine.c)
 * Callees:
 *     strchr @ 0x1404FD0E0 (strchr.c)
 */

__int64 __fastcall WmipSMBiosFindStringAndZero(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // edi
  char *v5; // rax
  unsigned int i; // esi
  char *v7; // rcx

  v3 = a1 + a3;
  if ( a2 )
  {
    v4 = a2 - 1;
    v5 = (char *)(a1 + *(unsigned __int8 *)(a1 + 1));
    for ( i = 0; i < v4; ++i )
    {
      v7 = strchr(v5, 0);
      v5 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) >= v3 || !*(_WORD *)v7 )
        return 3221225524LL;
    }
    while ( (unsigned __int64)v5 < v3 && *v5 )
      *v5++ = 95;
  }
  return 0LL;
}
