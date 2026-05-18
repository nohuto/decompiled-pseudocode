/*
 * XREFs of sub_180010180 @ 0x180010180
 * Callers:
 *     CreateDwmSceneRenderer @ 0x180010670 (CreateDwmSceneRenderer.c)
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_180010274 @ 0x180010274 (sub_180010274.c)
 *     sub_180010354 @ 0x180010354 (sub_180010354.c)
 *     sub_180018E90 @ 0x180018E90 (sub_180018E90.c)
 *     sub_18001B224 @ 0x18001B224 (sub_18001B224.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180010180(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = sub_18001B224(184LL);
  v9 = v4;
  v8 = v4;
  if ( v4 )
  {
    v6 = sub_180010274(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = sub_180018E90(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      sub_18000E954(&v8);
      v5 = 0;
    }
    else
    {
      sub_18000E954(&v8);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  sub_180010354(&v9);
  return (unsigned int)v5;
}
