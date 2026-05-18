/*
 * XREFs of ??8error_category@std@@QEBA_NAEBV01@@Z @ 0x180024914
 * Callers:
 *     sub_180025F40 @ 0x180025F40 (sub_180025F40.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::error_category::operator==(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
}
