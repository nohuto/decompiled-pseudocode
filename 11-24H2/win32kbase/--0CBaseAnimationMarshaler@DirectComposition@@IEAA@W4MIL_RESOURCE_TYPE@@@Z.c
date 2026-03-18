/*
 * XREFs of ??0CBaseAnimationMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140129180
 * Callers:
 *     ?CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x140076C18 (-CreatePrivateMarshaler@CApplicationChannel@DirectComposition@@IEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     ??0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z @ 0x140073264 (--0CResourceMarshaler@DirectComposition@@IEAA@W4MIL_RESOURCE_TYPE@@@Z.c)
 */

_QWORD *__fastcall DirectComposition::CBaseAnimationMarshaler::CBaseAnimationMarshaler(_QWORD *a1, int a2)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *result; // rax

  *a1 = &DirectComposition::CBaseAnimation::`vftable';
  DirectComposition::CResourceMarshaler::CResourceMarshaler((__int64)(a1 + 2), a2);
  *v2 = &DirectComposition::CBaseAnimationMarshaler::`vftable'{for `DirectComposition::CResourceMarshaler'};
  result = v3;
  *v3 = &DirectComposition::CBaseAnimationMarshaler::`vftable'{for `DirectComposition::CBaseAnimation'};
  return result;
}
