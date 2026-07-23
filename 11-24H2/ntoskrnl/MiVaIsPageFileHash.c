/*
 * XREFs of MiVaIsPageFileHash @ 0x14041F380
 * Callers:
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaIsPageFileHash(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  __int64 i; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 18520);
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v2 )
      return 0LL;
    v5 = *(_QWORD *)(a1 + 8 * i + 18528);
    v6 = *(_QWORD *)(v5 + 184);
    if ( v6 )
    {
      if ( a2 >= v6
        && a2 < *(_QWORD *)(v5 + 184) + *(unsigned int *)(v5 + 4) * (unsigned __int64)(unsigned int)dword_140E373CC )
      {
        break;
      }
    }
  }
  return *(_QWORD *)(a1 + 8 * i + 18528);
}
