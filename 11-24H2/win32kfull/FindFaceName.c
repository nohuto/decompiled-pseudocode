/*
 * XREFs of FindFaceName @ 0x14019C5EC
 * Callers:
 *     ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400BA3EC (-bGetFaceName@MAPPER@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall FindFaceName(int a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9

  v3 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  v4 = *(_QWORD *)(v3 + 19720);
  v5 = *(_QWORD *)(v3 + 19728);
  while ( v4 < v5 )
  {
    if ( (unsigned __int16)*(_DWORD *)v4 == a1 )
      return (const wchar_t *)(v5 + 2LL * *(unsigned __int16 *)(v4 + 2));
    v4 += 4LL;
  }
  return &pszFormat;
}
