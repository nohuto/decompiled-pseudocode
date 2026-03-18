/*
 * XREFs of MiLocatePageCollisionByPfn @ 0x1404560C0
 * Callers:
 *     MiStopPageAccessor @ 0x140347A84 (MiStopPageAccessor.c)
 *     MiStopHugePageAccessor @ 0x1404F3624 (MiStopHugePageAccessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiLocatePageCollisionByPfn(__int64 a1, __int64 a2)
{
  __int64 i; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // rax

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 280); i = (unsigned int)(i + 1) )
  {
    v3 = a1 + 8 * i;
    v4 = *(_QWORD *)(v3 + 24);
    if ( ((v4 >> 12) & 0x3FFFFFFFFFLL) == a2 && (v4 & 0x10) != 0 )
    {
      *(_QWORD *)(v3 + 24) = v4 & 0xFFFFFFFFFFFFFFEFuLL;
      return v3 + 24;
    }
  }
  return 0LL;
}
