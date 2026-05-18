/*
 * XREFs of sub_18003FE3C @ 0x18003FE3C
 * Callers:
 *     sub_18003FB38 @ 0x18003FB38 (sub_18003FB38.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18002894C @ 0x18002894C (sub_18002894C.c)
 *     sub_18003FD80 @ 0x18003FD80 (sub_18003FD80.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18003FE3C(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+28h] [rbp-30h]
  __int64 v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  _DWORD v7[3]; // [rsp+3Ch] [rbp-1Ch] BYREF
  char v8; // [rsp+60h] [rbp+8h] BYREF

  sub_18002894C(a1 + 16, a2);
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 72), 0, 1) == 1 )
  {
    v8 = 0;
    v5 = 0LL;
    v6 = 0;
    memset(v7, 0, sizeof(v7));
    *(_OWORD *)(a2 + 48) = 0u;
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v7[1];
    unknown_libname_81(&v3, (_QWORD *)(a2 + 32));
    sub_18003FD80(&v3, a2 + 48, (__int64)&v8);
    if ( v4 )
      sub_18001060C(v4);
  }
}
