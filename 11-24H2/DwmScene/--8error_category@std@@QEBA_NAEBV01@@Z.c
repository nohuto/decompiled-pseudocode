/*
 * XREFs of ??8error_category@std@@QEBA_NAEBV01@@Z @ 0x180024A74
 * Callers:
 *     sub_1800260A0 @ 0x1800260A0 (sub_1800260A0.c)
 *     sub_1800260D0 @ 0x1800260D0 (sub_1800260D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::error_category::operator==(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
}
