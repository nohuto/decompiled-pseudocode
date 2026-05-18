/*
 * XREFs of sub_18004B1D4 @ 0x18004B1D4
 * Callers:
 *     sub_18004C1A0 @ 0x18004C1A0 (sub_18004C1A0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18004A310 @ 0x18004A310 (sub_18004A310.c)
 */

_QWORD *__fastcall sub_18004B1D4(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // r11

  v4 = sub_18001B1F8(56LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::ShaderProgram>::`vftable';
    sub_18004A310((_QWORD *)(v4 + 16), a2);
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 16;
  return a1;
}
