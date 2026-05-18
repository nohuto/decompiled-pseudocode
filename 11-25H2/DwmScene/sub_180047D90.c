/*
 * XREFs of sub_180047D90 @ 0x180047D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800254DC @ 0x1800254DC (sub_1800254DC.c)
 *     sub_180049780 @ 0x180049780 (sub_180049780.c)
 *     sub_18005B9C0 @ 0x18005B9C0 (sub_18005B9C0.c)
 *     sub_1800D1294 @ 0x1800D1294 (sub_1800D1294.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180047D90(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int128 v15; // [rsp+38h] [rbp-48h] BYREF
  __int64 v16; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v17[8]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h]

  v6 = _RTDynamicCast(
         *a3,
         0LL,
         &Spectre::Engine::RendererResource `RTTI Type Descriptor',
         &Spectre::Engine::Material `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    v7 = a3[1];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *(_QWORD *)&v15 = v6;
    v8 = a3[1];
    *((_QWORD *)&v15 + 1) = v8;
  }
  else
  {
    v15 = 0LL;
    v8 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
    v6 = 0LL;
  }
  v9 = unknown_libname_81(&v16, &v15);
  sub_180049780(v10, v9);
  v11 = (_QWORD *)sub_1800254DC(v6, &v19);
  v12 = (_QWORD *)sub_18005B9C0(*v11, v17);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v12 + 72LL))(
    *v12,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  if ( v18 )
    sub_18001050C(v18);
  if ( v20 )
    sub_18001050C(v20);
  sub_1800D1294(a2);
  if ( v8 )
    sub_18001050C(v8);
  v13 = a3[1];
  if ( v13 )
    sub_18001050C(v13);
  return a2;
}
