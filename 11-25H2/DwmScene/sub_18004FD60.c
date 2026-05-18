/*
 * XREFs of sub_18004FD60 @ 0x18004FD60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18004EF38 @ 0x18004EF38 (sub_18004EF38.c)
 */

_QWORD *__fastcall sub_18004FD60(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx

  v3 = sub_18001B098(128LL);
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 12) = 1;
    *(_QWORD *)v3 = &std::_Ref_count_obj2<Spectre::Engine::RenderStateGeneric>::`vftable';
    sub_18004EF38((_QWORD *)(v3 + 16));
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 == -16 )
  {
    v5 = 0LL;
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v5 = v4;
  }
  a2[1] = v5;
  *a2 = v4 + 16;
  if ( v4 )
    sub_18001050C(v4);
  return a2;
}
