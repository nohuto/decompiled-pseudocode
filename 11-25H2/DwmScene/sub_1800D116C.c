/*
 * XREFs of sub_1800D116C @ 0x1800D116C
 * Callers:
 *     sub_1800D1160 @ 0x1800D1160 (sub_1800D1160.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_1800D1734 @ 0x1800D1734 (sub_1800D1734.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800D116C(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 88));
  *(_DWORD *)(a1 + 20) = _InterlockedIncrement(dword_1801C3E50);
  v2 = sub_18001B098(88LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    sub_1800D1734(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)a1 = v3 + 16;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3;
  if ( v4 )
    sub_18001050C(v4);
  return a1;
}
