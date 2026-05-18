/*
 * XREFs of sub_18001C674 @ 0x18001C674
 * Callers:
 *     sub_18001C7D8 @ 0x18001C7D8 (sub_18001C7D8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_180012408 @ 0x180012408 (sub_180012408.c)
 *     sub_18001B5E4 @ 0x18001B5E4 (sub_18001B5E4.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_18001B760 @ 0x18001B760 (sub_18001B760.c)
 *     sub_18001BFD0 @ 0x18001BFD0 (sub_18001BFD0.c)
 *     sub_18001BFFC @ 0x18001BFFC (sub_18001BFFC.c)
 *     sub_18001C208 @ 0x18001C208 (sub_18001C208.c)
 *     sub_18001C2C0 @ 0x18001C2C0 (sub_18001C2C0.c)
 *     sub_18001C40C @ 0x18001C40C (sub_18001C40C.c)
 *     sub_18001C480 @ 0x18001C480 (sub_18001C480.c)
 *     sub_18001CCC0 @ 0x18001CCC0 (sub_18001CCC0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001C674(__int64 a1, int a2, __int64 a3)
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

  sub_18001BFD0((__int64 *)v13);
  v11 = (_Mtx_t)sub_18001C480();
  sub_180011B30((__int64)v11);
  v6 = sub_18001C40C();
  v12 = 0LL;
  v14 = &v12;
  v15 = &v12;
  *(_QWORD *)&v12 = sub_18001B5E4();
  sub_18001B610(&v12, v6);
  v15 = 0LL;
  sub_18001C208((__int64)&v14);
  sub_18001CCC0(v13);
  sub_18001B610(v13, &v12);
  sub_18001B760((void **)&v12, (__int64)&v12);
  Mtx_unlock(v11);
  v7 = *(_Mtx_t *)v13[0];
  v11 = *(_Mtx_t *)v13[0];
  while ( !*((_BYTE *)v7 + 25) )
  {
    sub_18001BFFC(&v16, (_DWORD *)v7 + 8);
    v10 = a2;
    if ( !v18 )
    {
      std::_Xbad_function_call();
      return sub_18001B760(v13, (__int64)v13);
    }
    (*(void (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v18 + 16LL))(v18, a1, &v10, a3);
    sub_180012408((__int64)v17, v8);
    sub_18001C2C0((__int64 *)&v11);
    v7 = v11;
  }
  return sub_18001B760(v13, (__int64)v13);
}
