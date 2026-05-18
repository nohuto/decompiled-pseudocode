/*
 * XREFs of sub_180032CBC @ 0x180032CBC
 * Callers:
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180088870 @ 0x180088870 (sub_180088870.c)
 *     sub_180088A00 @ 0x180088A00 (sub_180088A00.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18002BFE4 @ 0x18002BFE4 (sub_18002BFE4.c)
 *     sub_18002C3E8 @ 0x18002C3E8 (sub_18002C3E8.c)
 */

_QWORD *__fastcall sub_180032CBC(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = sub_18002BFE4(*a3, (__int64)a2);
  if ( !*(_QWORD *)(v4 + 8) )
  {
    v5 = sub_18001B1F8(120LL);
    v6 = v5;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::TweenManager>::`vftable';
      sub_18002C3E8(v5 + 16);
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(v4 + 8) = v6 + 16;
    v7 = *(_QWORD *)(v4 + 16);
    *(_QWORD *)(v4 + 16) = v6;
    if ( v7 )
      sub_18001060C(v7);
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
