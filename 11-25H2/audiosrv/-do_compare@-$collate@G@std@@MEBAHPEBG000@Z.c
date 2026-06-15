/*
 * XREFs of ?do_compare@?$collate@G@std@@MEBAHPEBG000@Z @ 0x180140B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall std::collate<unsigned short>::do_compare(
        const _Collvec *a1,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        wchar_t *a5)
{
  int v5; // ecx

  v5 = _Wcscoll(a2, a3, a4, a5, a1 + 1);
  if ( v5 >= 0 )
    return v5 != 0;
  else
    return -1;
}
