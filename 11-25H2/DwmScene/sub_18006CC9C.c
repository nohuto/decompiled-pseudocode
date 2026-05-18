/*
 * XREFs of sub_18006CC9C @ 0x18006CC9C
 * Callers:
 *     sub_18006B38C @ 0x18006B38C (sub_18006B38C.c)
 *     sub_18006BDB0 @ 0x18006BDB0 (sub_18006BDB0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18006C520 @ 0x18006C520 (sub_18006C520.c)
 *     sub_18008D1D0 @ 0x18008D1D0 (sub_18008D1D0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006CC9C(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  unsigned int v6; // eax
  int v7; // r8d
  int v8; // r9d
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+50h] [rbp-29h] BYREF
  __int64 v14; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v15[12]; // [rsp+70h] [rbp-9h] BYREF

  v4 = *a2;
  v5 = unknown_libname_81(&v11, a1 + 44);
  v15[0] = &std::_Func_impl_no_alloc<_lambda_c3255ca82109f45dbf65110c90bf1ea2_,std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>,>::`vftable';
  v15[1] = a1;
  v15[7] = v15;
  sub_18006C520((__int64)a1, &v12, 0);
  unknown_libname_81(&v13, a1 + 38);
  v6 = (unsigned int)unknown_libname_81(&v14, a1 + 34);
  result = sub_18008D1D0(v4, v6, v7, v8, (__int64)v15, (__int64)v5);
  v10 = a2[1];
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
