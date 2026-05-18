/*
 * XREFs of sub_18007ED78 @ 0x18007ED78
 * Callers:
 *     sub_18007F020 @ 0x18007F020 (sub_18007F020.c)
 *     sub_1800C75E0 @ 0x1800C75E0 (sub_1800C75E0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18007ED28 @ 0x18007ED28 (sub_18007ED28.c)
 */

_QWORD *__fastcall sub_18007ED78(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = sub_18001B1F8(88LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateDesc>::`vftable';
    sub_18007ED28(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
