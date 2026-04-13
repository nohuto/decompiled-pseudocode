/*
 * XREFs of ?do_compare@?$collate@_W@std@@MEBAHPEB_W000@Z @ 0x180017FC0
 * Callers:
 *     <none>
 * Callees:
 *     _Wcscoll @ 0x180021C40 (_Wcscoll.c)
 */

__int64 __fastcall std::collate<wchar_t>::do_compare(
        const _Collvec *a1,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        wchar_t *a5)
{
  int v5; // ecx
  __int64 result; // rax

  v5 = Wcscoll(a2, a3, a4, a5, a1 + 1);
  result = v5 != 0;
  if ( v5 < 0 )
    return 0xFFFFFFFFLL;
  return result;
}
