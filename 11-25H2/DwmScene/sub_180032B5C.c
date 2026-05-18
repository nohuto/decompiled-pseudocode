/*
 * XREFs of sub_180032B5C @ 0x180032B5C
 * Callers:
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 *     sub_180088710 @ 0x180088710 (sub_180088710.c)
 *     sub_1800888A0 @ 0x1800888A0 (sub_1800888A0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18002BE84 @ 0x18002BE84 (sub_18002BE84.c)
 *     sub_18002C288 @ 0x18002C288 (sub_18002C288.c)
 */

_QWORD *__fastcall sub_180032B5C(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = sub_18002BE84(*a3, (__int64)a2);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v5 = sub_18001B098(120LL);
    v6 = v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::TweenManager>::`vftable';
      sub_18002C288(v5 + 16);
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(v4 + 8) = v6 + 16;
    v7 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = v6;
    if ( v7 )
      sub_18001050C(v7);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v8 = *(_QWORD *)(v4 + 16);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a2 = *(_QWORD *)(v4 + 8);
  a2[1] = *(_QWORD *)(v4 + 16);
  return a2;
}
