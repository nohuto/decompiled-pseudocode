/*
 * XREFs of sub_18002C288 @ 0x18002C288
 * Callers:
 *     sub_180032B5C @ 0x180032B5C (sub_180032B5C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 */

struct _Mtx_internal_imp_t *__fastcall sub_18002C288(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  struct _Mtx_internal_imp_t *result; // rax

  v2 = sub_18001B098(24LL);
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Tweening::HighPerfClock>::`vftable';
    *(_QWORD *)(v2 + 16) = &Spectre::Utils::Tweening::HighPerfClock::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  result = sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 56));
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *(_QWORD *)(a1 + 88) = v3 + 16;
  *(_QWORD *)(a1 + 96) = v3;
  if ( v3 )
    return (struct _Mtx_internal_imp_t *)sub_18001050C(v3);
  return result;
}
