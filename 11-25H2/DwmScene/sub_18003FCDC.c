/*
 * XREFs of sub_18003FCDC @ 0x18003FCDC
 * Callers:
 *     sub_18003F9D8 @ 0x18003F9D8 (sub_18003F9D8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800287EC @ 0x1800287EC (sub_1800287EC.c)
 *     sub_18003FC20 @ 0x18003FC20 (sub_18003FC20.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003FCDC(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  _DWORD v7[3]; // [rsp+3Ch] [rbp-1Ch] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  sub_1800287EC(a1 + 16, a2);
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 72), 0, 1) == 1 )
  {
    v8 = 0;
    v5 = 0LL;
    v6 = 0;
    memset(v7, 0, sizeof(v7));
    *(_OWORD *)(a2 + 48) = 0u;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v7[1];
    unknown_libname_81(&v3, (_QWORD *)(a2 + 32));
    sub_18003FC20(&v3, a2 + 48, (__int64)&v8);
    if ( v4 )
      sub_18001050C(v4);
  }
}
