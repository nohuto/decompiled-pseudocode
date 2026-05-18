/*
 * XREFs of sub_1800D12CC @ 0x1800D12CC
 * Callers:
 *     sub_1800D12C0 @ 0x1800D12C0 (sub_1800D12C0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_1800D1894 @ 0x1800D1894 (sub_1800D1894.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800D12CC(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 88));
  *(_DWORD *)(a1 + 20) = _InterlockedIncrement(dword_1801C4E60);
  v2 = sub_18001B1F8(88LL);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    *(_DWORD *)(v2 + 8) = 1;
    *(_DWORD *)(v2 + 12) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    sub_1800D1894(v2 + 16);
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)a1 = v3 + 16;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v3;
  if ( v4 )
    sub_18001060C(v4);
  return a1;
}
