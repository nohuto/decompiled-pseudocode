/*
 * XREFs of sub_1800CA230 @ 0x1800CA230
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 *     sub_1800BC4BC @ 0x1800BC4BC (sub_1800BC4BC.c)
 *     sub_1800C2EE4 @ 0x1800C2EE4 (sub_1800C2EE4.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800CA230(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+68h] [rbp+28h]
  _QWORD *v14; // [rsp+70h] [rbp+30h]

  v14 = a3;
  v13 = a2;
  v6 = _RTDynamicCast(
         *a3,
         0LL,
         &Spectre::Engine::CommandList `RTTI Type Descriptor',
         &Spectre::Engine::D3D11::CommandListD3D11 `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    *(_QWORD *)&v11 = v6;
    *((_QWORD *)&v11 + 1) = a3[1];
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  sub_180011010((_QWORD *)(a1 + 120), (__int64 *)&v11);
  if ( *((_QWORD *)&v11 + 1) )
    sub_18001050C(*((__int64 *)&v11 + 1));
  if ( *(_DWORD *)(a1 + 140) == 1 || *(_DWORD *)(a1 + 140) == 3 )
  {
    v7 = sub_1800BC4BC(&v11, a2);
    sub_180011010((_QWORD *)(a1 + 104), v7);
    if ( *((_QWORD *)&v11 + 1) )
      sub_18001050C(*((__int64 *)&v11 + 1));
  }
  sub_1800C2EE4(*(_QWORD *)(a1 + 104), &v12);
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 224LL))(v12, *(_QWORD *)(a1 + 96));
  *(_DWORD *)(a1 + 136) = 1;
  result = sub_18000E854(&v12);
  v9 = a2[1];
  if ( v9 )
    result = sub_18001050C(v9);
  v10 = a3[1];
  if ( v10 )
    return sub_18001050C(v10);
  return result;
}
