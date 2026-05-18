/*
 * XREFs of sub_1800681B0 @ 0x1800681B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004D2C8 @ 0x18004D2C8 (sub_18004D2C8.c)
 *     __RTDynamicCast @ 0x1800D4FA0 (__RTDynamicCast.c)
 */

__int64 __fastcall sub_1800681B0(__int64 a1, __int64 a2, _QWORD *a3)
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
  sub_18004D2C8(v6, (__int64)&unk_1801C8938, a3);
  return sub_18004D300(v6, (__int64)&unk_1801C8938, (_QWORD *)(v5 + 216));
}
