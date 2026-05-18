/*
 * XREFs of sub_18002E618 @ 0x18002E618
 * Callers:
 *     sub_18002BC74 @ 0x18002BC74 (sub_18002BC74.c)
 *     sub_1800310F0 @ 0x1800310F0 (sub_1800310F0.c)
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002C1D4 @ 0x18002C1D4 (sub_18002C1D4.c)
 */

_QWORD *__fastcall sub_18002E618(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = sub_18001B1F8(56LL);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    sub_18002C1D4((_QWORD *)(v2 + 16));
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
