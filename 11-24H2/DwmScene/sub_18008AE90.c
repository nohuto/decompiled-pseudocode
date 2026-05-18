/*
 * XREFs of sub_18008AE90 @ 0x18008AE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_18008A23C @ 0x18008A23C (sub_18008A23C.c)
 */

_QWORD *__fastcall sub_18008AE90(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r8

  v4 = sub_18001B1F8(32LL);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj2<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    sub_18008A23C(v4 + 16, (unsigned int *)(a1 + 8));
  }
  else
  {
    v5 = 0LL;
  }
  a2[1] = v5;
  *a2 = v5 + 16;
  return a2;
}
