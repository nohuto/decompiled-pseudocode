/*
 * XREFs of MiFreeSystemCacheView @ 0x140355944
 * Callers:
 *     MiReleaseSystemCacheView @ 0x140355608 (MiReleaseSystemCacheView.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiFreeSystemCacheView(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // r9
  _QWORD *result; // rax

  v3 = a1 + 32LL * (a2 & 3) + 2160;
  if ( !*(_QWORD *)(v3 + 16) )
    *(_DWORD *)(v3 + 24) = a2;
  a3[4] = a3[4] & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
  result = *(_QWORD **)(v3 + 8);
  if ( *result != v3 )
    __fastfail(3u);
  *a3 = v3;
  a3[1] = result;
  *result = a3;
  *(_QWORD *)(v3 + 8) = a3;
  ++*(_QWORD *)(v3 + 16);
  return result;
}
