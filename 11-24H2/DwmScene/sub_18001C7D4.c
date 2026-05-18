/*
 * XREFs of sub_18001C7D4 @ 0x18001C7D4
 * Callers:
 *     sub_18001C938 @ 0x18001C938 (sub_18001C938.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_180012508 @ 0x180012508 (sub_180012508.c)
 *     sub_18001B744 @ 0x18001B744 (sub_18001B744.c)
 *     sub_18001B770 @ 0x18001B770 (sub_18001B770.c)
 *     sub_18001B8C0 @ 0x18001B8C0 (sub_18001B8C0.c)
 *     sub_18001C130 @ 0x18001C130 (sub_18001C130.c)
 *     sub_18001C15C @ 0x18001C15C (sub_18001C15C.c)
 *     sub_18001C368 @ 0x18001C368 (sub_18001C368.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_18001C56C @ 0x18001C56C (sub_18001C56C.c)
 *     sub_18001C5E0 @ 0x18001C5E0 (sub_18001C5E0.c)
 *     sub_18001CE20 @ 0x18001CE20 (sub_18001CE20.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001C7D4(__int64 a1, int a2, __int64 a3)
{
  __int64 *v6; // rdi
  _Mtx_t v7; // rax
  __int64 v8; // rdx
  int v10; // [rsp+30h] [rbp-69h] BYREF
  _Mtx_t v11; // [rsp+38h] [rbp-61h] BYREF
  __int128 v12; // [rsp+40h] [rbp-59h] BYREF
  void *v13[2]; // [rsp+50h] [rbp-49h] BYREF
  __int128 *v14; // [rsp+60h] [rbp-39h] BYREF
  __int128 *v15; // [rsp+68h] [rbp-31h]
  int v16; // [rsp+70h] [rbp-29h] BYREF
  _BYTE v17[56]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+17h]

  sub_18001C130((__int64 *)v13);
  v11 = (_Mtx_t)sub_18001C5E0();
  sub_180011C30((__int64)v11);
  v6 = sub_18001C56C();
  v12 = 0LL;
  v14 = &v12;
  v15 = &v12;
  *(_QWORD *)&v12 = sub_18001B744();
  sub_18001B770(&v12, v6);
  v15 = 0LL;
  sub_18001C368((__int64)&v14);
  sub_18001CE20(v13);
  sub_18001B770(v13, &v12);
  sub_18001B8C0((void **)&v12, (__int64)&v12);
  Mtx_unlock(v11);
  v7 = *(_Mtx_t *)v13[0];
  v11 = *(_Mtx_t *)v13[0];
  while ( !*((_BYTE *)v7 + 25) )
  {
    sub_18001C15C(&v16, (_DWORD *)v7 + 8);
    v10 = a2;
    if ( !v18 )
    {
      std::_Xbad_function_call();
      return sub_18001B8C0(v13, (__int64)v13);
    }
    (*(void (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v18 + 16LL))(v18, a1, &v10, a3);
    sub_180012508((__int64)v17, v8);
    sub_18001C420((__int64 *)&v11);
    v7 = v11;
  }
  return sub_18001B8C0(v13, (__int64)v13);
}
