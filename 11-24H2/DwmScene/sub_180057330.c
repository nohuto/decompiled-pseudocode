/*
 * XREFs of sub_180057330 @ 0x180057330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180050CA0 @ 0x180050CA0 (sub_180050CA0.c)
 *     sub_1800588F0 @ 0x1800588F0 (sub_1800588F0.c)
 *     sub_180058A5C @ 0x180058A5C (sub_180058A5C.c)
 */

__int64 __fastcall sub_180057330(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 128) )
  {
    v7 = 0LL;
    sub_180058A5C(a1, &v7);
    v7 = 0LL;
    sub_1800588F0(a1, &v7);
  }
  v8 = *(_DWORD *)(*a2 + 244LL);
  sub_180050CA0((__int64 *)(a1 + 448), &v8);
  result = (__int64)unknown_libname_81(&v7, a2);
  v5 = *(_QWORD *)(result + 8);
  if ( v5 )
    result = sub_18001060C(v5);
  v6 = a2[1];
  if ( v6 )
    return sub_18001060C(v6);
  return result;
}
