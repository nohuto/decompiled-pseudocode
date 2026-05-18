/*
 * XREFs of sub_18002359C @ 0x18002359C
 * Callers:
 *     sub_180024D60 @ 0x180024D60 (sub_180024D60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010544 @ 0x180010544 (sub_180010544.c)
 *     sub_180010AE8 @ 0x180010AE8 (sub_180010AE8.c)
 *     sub_180010B10 @ 0x180010B10 (sub_180010B10.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180015174 @ 0x180015174 (sub_180015174.c)
 *     sub_180016E68 @ 0x180016E68 (sub_180016E68.c)
 *     sub_180027C70 @ 0x180027C70 (sub_180027C70.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_18002359C(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-20h]
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF

  sub_180016E68(a2);
  sub_18002851C(a1 + 808, v16);
  sub_180015174(&v14, a2);
  v7 = *(_QWORD *)(a1 + 872);
  if ( v7 == *(_QWORD *)(a1 + 880) )
    sub_180010B10(v6, v7, (__int64)&v14);
  else
    sub_180010AE8((__int64)v6, &v14);
  if ( v15 )
    sub_180010544(v15);
  sub_180010F44((__int64)v16);
  v8 = unknown_libname_81(v16, a3);
  v9 = *a2;
  *(_QWORD *)(v9 + 72) = a1;
  if ( (*(_BYTE *)(v9 + 40) & 1) != 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 16LL))(v9, v8);
    if ( !*(_DWORD *)(a1 + 552) )
    {
      LOBYTE(v10) = 1;
      sub_180027C70(v9, 8LL, v10);
    }
  }
  v11 = v8[1];
  if ( v11 )
    sub_18001050C(v11);
  v12 = a3[1];
  if ( v12 )
    sub_18001050C(v12);
  return a2;
}
