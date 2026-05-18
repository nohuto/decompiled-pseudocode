/*
 * XREFs of sub_18007EC18 @ 0x18007EC18
 * Callers:
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 *     sub_1800C7480 @ 0x1800C7480 (sub_1800C7480.c)
 * Callees:
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18007EBC8 @ 0x18007EBC8 (sub_18007EBC8.c)
 */

_QWORD *__fastcall sub_18007EC18(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001B098(88LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateDesc>::`vftable';
    sub_18007EBC8(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
