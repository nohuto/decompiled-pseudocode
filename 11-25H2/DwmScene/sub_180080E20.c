/*
 * XREFs of sub_180080E20 @ 0x180080E20
 * Callers:
 *     sub_180080FB0 @ 0x180080FB0 (sub_180080FB0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011010 @ 0x180011010 (sub_180011010.c)
 */

__int64 __fastcall sub_180080E20(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v8; // [rsp+20h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::DeviceShaderPipeline::`vftable';
  v8 = 0LL;
  sub_180011010(a1 + 12, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001050C(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011010(a1 + 14, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001050C(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011010(a1 + 16, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001050C(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011010(a1 + 18, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001050C(*((__int64 *)&v8 + 1));
  v8 = 0LL;
  sub_180011010(a1 + 20, (__int64 *)&v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_18001050C(*((__int64 *)&v8 + 1));
  v2 = a1[21];
  if ( v2 )
    sub_18001050C(v2);
  v3 = a1[19];
  if ( v3 )
    sub_18001050C(v3);
  v4 = a1[17];
  if ( v4 )
    sub_18001050C(v4);
  v5 = a1[15];
  if ( v5 )
    sub_18001050C(v5);
  v6 = a1[13];
  if ( v6 )
    sub_18001050C(v6);
  return sub_18002655C((__int64)a1);
}
