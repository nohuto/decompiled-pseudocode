/*
 * XREFs of sub_1800C3FF0 @ 0x1800C3FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180050A58 @ 0x180050A58 (sub_180050A58.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C3FF0(__int64 a1, __int64 *a2, unsigned int a3, __int128 *a4, unsigned __int8 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int128 v18; // [rsp+58h] [rbp-18h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( *a2 )
  {
    sub_180050A58(*a2, &v16, *(_DWORD *)(a1 + 88));
    v11 = v16;
    v8 = *(_QWORD *)(v16 + 112);
    v13 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    sub_18000E954(&v13);
    v9 = *(_QWORD *)(v11 + 128);
    v14 = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    sub_18000E954(&v14);
    v10 = *(_QWORD *)(v11 + 120);
    v15 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    sub_18000E954(&v15);
    if ( v17 )
      sub_18001060C(v17);
  }
  v18 = *a4;
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 144) + 344LL))(*(_QWORD *)(a1 + 144), v8);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 288LL))(*(_QWORD *)(a1 + 144), v9, a5);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, _QWORD))(**(_QWORD **)(a1 + 144) + 280LL))(
             *(_QWORD *)(a1 + 144),
             v10,
             &v18,
             a3);
  _InterlockedIncrement64(qword_1801C4780);
  return result;
}
