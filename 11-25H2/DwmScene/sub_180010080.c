/*
 * XREFs of sub_180010080 @ 0x180010080
 * Callers:
 *     CreateDwmSceneRenderer @ 0x180010570 (CreateDwmSceneRenderer.c)
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_180010174 @ 0x180010174 (sub_180010174.c)
 *     sub_180010254 @ 0x180010254 (sub_180010254.c)
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 *     sub_18001B0C4 @ 0x18001B0C4 (sub_18001B0C4.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180010080(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = sub_18001B0C4(184LL);
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    v6 = sub_180010174(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = sub_180018DD0(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      sub_18000E854(&v8);
      v5 = 0;
    }
    else
    {
      sub_18000E854(&v8);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  sub_180010254(&v9);
  return (unsigned int)v5;
}
