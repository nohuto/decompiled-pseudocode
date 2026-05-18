/*
 * XREFs of sub_18003C9A8 @ 0x18003C9A8
 * Callers:
 *     sub_18003E184 @ 0x18003E184 (sub_18003E184.c)
 *     sub_18003E218 @ 0x18003E218 (sub_18003E218.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180028A98 @ 0x180028A98 (sub_180028A98.c)
 *     sub_18003D938 @ 0x18003D938 (sub_18003D938.c)
 */

__int64 **__fastcall sub_18003C9A8(__int64 **a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001B1F8(24LL);
  v5 = 1LL;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::Scene>::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)(v4 + 16) = a2;
  }
  *a1 = a2;
  a1[1] = (__int64 *)v4;
  if ( a2 )
  {
    v6 = a2[1];
    if ( !v6 || !*(_DWORD *)(v6 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
      v10 = (__int64)a1[1];
      v7 = v10;
      v9 = a2;
      sub_180028A98(a2, &v9);
      if ( v7 )
        sub_18001060C(v7);
    }
  }
  v11 = 0LL;
  sub_18003D938(&v11, v5);
  return a1;
}
