/*
 * XREFs of sub_18003C904 @ 0x18003C904
 * Callers:
 *     sub_18003E454 @ 0x18003E454 (sub_18003E454.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001724C @ 0x18001724C (sub_18001724C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180028938 @ 0x180028938 (sub_180028938.c)
 */

_QWORD *__fastcall sub_18003C904(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]
  __int64 (__fastcall ***v11)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = sub_18001B098(24LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::SceneNode>::`vftable';
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)(v4 + 16) = a2;
  }
  *a1 = a2;
  a1[1] = v4;
  if ( a2 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v6 = (__int64 *)(a2 + 8);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      if ( v4 )
        _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
      v9 = a2;
      v10 = a1[1];
      v7 = v10;
      sub_180028938(v6, &v9);
      if ( v7 )
        sub_18001050C(v7);
    }
  }
  v11 = 0LL;
  sub_18001724C(&v11);
  return a1;
}
