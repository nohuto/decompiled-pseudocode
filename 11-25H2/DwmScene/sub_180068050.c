/*
 * XREFs of sub_180068050 @ 0x180068050
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004D168 @ 0x18004D168 (sub_18004D168.c)
 *     __RTDynamicCast @ 0x1800D4E40 (__RTDynamicCast.c)
 */

__int64 __fastcall sub_180068050(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdi

  v5 = _RTDynamicCast(
         a2,
         0LL,
         &Spectre::Engine::ImageProcessingEffect `RTTI Type Descriptor',
         &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor',
         1);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 512LL);
  sub_18004D168(v6, (__int64)&unk_1801C7928, a3);
  return sub_18004D1A0(v6, (__int64)&unk_1801C7928, (_QWORD *)(v5 + 216));
}
