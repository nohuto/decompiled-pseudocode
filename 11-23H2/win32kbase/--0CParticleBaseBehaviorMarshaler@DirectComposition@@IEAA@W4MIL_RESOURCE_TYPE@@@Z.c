/*
 * XREFs of ??0CParticleBaseBehaviorMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020D818
 * Callers:
 *     ?GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z @ 0x1C0031DE4 (-GeneratedCreatePrivateMarshaler@DirectComposition@@YAJIPEAPEAVCResourceMarshaler@1@@Z.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C020B74C (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CParticleBaseBehaviorMarshaler::CParticleBaseBehaviorMarshaler(
        _QWORD *a1,
        int a2)
{
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)a1, a2);
  *a1 = &DirectComposition::CParticleVector4BehaviorMarshaler::`vftable';
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  return a1;
}
