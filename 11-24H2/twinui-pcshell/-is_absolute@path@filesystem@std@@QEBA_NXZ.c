/*
 * XREFs of ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x1800570A4
 * Callers:
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x180056F50 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 * Callees:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x180057110 (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

bool __fastcall std::filesystem::path::is_absolute(std::filesystem::path *this)
{
  std::filesystem::path *v1; // rax
  __int64 v2; // rdx
  const unsigned __int16 *v3; // r8
  __int64 v4; // rdx
  const unsigned __int16 *root_name_end; // rax
  const unsigned __int16 *v6; // rcx

  v1 = this;
  if ( *((_QWORD *)this + 3) > 7uLL )
    this = *(std::filesystem::path **)this;
  v2 = 2LL * *((_QWORD *)v1 + 2);
  v3 = (const unsigned __int16 *)((char *)this + v2);
  v4 = v2 >> 1;
  if ( v4 >= 2 && (*(_DWORD *)this & 0xFFFFFFDF) - 3801153 < 0x1A )
    return v4 >= 3 && (*((_WORD *)this + 2) == 92 || *((_WORD *)this + 2) == 47);
  root_name_end = std::filesystem::_Find_root_name_end(this, v3, v3);
  return v6 != root_name_end;
}
