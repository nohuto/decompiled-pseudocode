/*
 * XREFs of sub_180025F40 @ 0x180025F40
 * Callers:
 *     <none>
 * Callees:
 *     ??8error_category@std@@QEBA_NAEBV01@@Z @ 0x180024914 (--8error_category@std@@QEBA_NAEBV01@@Z.c)
 */

bool __fastcall sub_180025F40(__int64 a1, __int64 a2)
{
  bool v2; // al
  int v3; // r8d
  _DWORD *v4; // r9
  char v5; // cl

  v2 = std::error_category::operator==(a1, *(_QWORD *)(a2 + 8));
  v5 = 0;
  if ( v2 )
    return *v4 == v3;
  return v5;
}
