/*
 * XREFs of ??$make_shared@VPinRequestContext@@$$V@std@@YA?AV?$shared_ptr@VPinRequestContext@@@0@XZ @ 0x1802C6A78
 * Callers:
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180184F2C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 *     ?FromExplicitContext@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x1805E5B30 (-FromExplicitContext@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXV-$basic.c)
 * Callees:
 *     ??$_Construct_in_place@VPinRequestContext@@$$V@std@@YAXAEAVPinRequestContext@@@Z @ 0x1802C6AD4 (--$_Construct_in_place@VPinRequestContext@@$$V@std@@YAXAEAVPinRequestContext@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::make_shared<PinRequestContext,>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  _DWORD *v5; // [rsp+40h] [rbp+8h]

  v5 = operator new(0x40uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj2<PinRequestContext>::`vftable';
  std::_Construct_in_place<PinRequestContext,>(v5 + 4);
  result = a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  return result;
}
