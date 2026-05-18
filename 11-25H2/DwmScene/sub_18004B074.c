/*
 * XREFs of sub_18004B074 @ 0x18004B074
 * Callers:
 *     sub_18004C040 @ 0x18004C040 (sub_18004C040.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18004A1B0 @ 0x18004A1B0 (sub_18004A1B0.c)
 */

_QWORD *__fastcall sub_18004B074(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r11

  v4 = sub_18001B098(56LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderProgram>::`vftable';
    sub_18004A1B0((_QWORD *)(v4 + 16), a2);
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 16;
  return a1;
}
