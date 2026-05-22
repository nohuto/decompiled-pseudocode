/*
 * XREFs of ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800A7B74
 * Callers:
 *     ?init_apartment@winrt@@YAXW4apartment_type@1@@Z @ 0x1800A7C88 (-init_apartment@winrt@@YAXW4apartment_type@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::slim_source_location::current(__int64 a1)
{
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return a1;
}
