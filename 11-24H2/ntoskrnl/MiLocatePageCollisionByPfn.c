/*
 * XREFs of MiLocatePageCollisionByPfn @ 0x14043CF40
 * Callers:
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocatePageCollisionByPfn(__int64 a1, __int64 a2)
{
  __int64 i; // r8
  unsigned __int64 v3; // rax
  __int64 v4; // r9

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 280); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(a1 + 8 * i + 24);
    v4 = a1 + 8 * i;
    if ( ((v3 >> 12) & 0x3FFFFFFFFFLL) == a2 && (v3 & 0x10) != 0 )
    {
      *(_QWORD *)(v4 + 24) = v3 & 0xFFFFFFFFFFFFFFEFuLL;
      return v4 + 24;
    }
  }
  return 0LL;
}
