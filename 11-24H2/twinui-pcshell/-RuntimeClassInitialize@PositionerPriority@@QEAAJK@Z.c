/*
 * XREFs of ?RuntimeClassInitialize@PositionerPriority@@QEAAJK@Z @ 0x1805109CC
 * Callers:
 *     ??$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAK@Z @ 0x180510618 (--$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPri.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802EDA58 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 */

__int64 __fastcall PositionerPriority::RuntimeClassInitialize(PositionerPriority *this, unsigned int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rdx
  int v7; // edx
  unsigned int *v8; // r9
  unsigned int i; // r8d
  unsigned __int8 v10; // cf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  if ( !a2 )
  {
    v5 = 71LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)0x80070490LL);
    return 2147943568LL;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    if ( (a2 & 7) == 0 || (((a2 & 7) - 1) & a2 & 7) != 0 )
    {
      v5 = 77LL;
      goto LABEL_3;
    }
  }
  else if ( (((unsigned __int8)a2 ^ (unsigned __int8)(a2 >> 1)) & 1) == 0 )
  {
    v5 = 84LL;
    goto LABEL_3;
  }
  v7 = 0;
  v8 = (unsigned int *)&g_exclusivePositioners;
  for ( i = 0; i < 2; ++i )
  {
    v10 = _bittest((const int *)&a2, *v8++);
    v7 += v10;
  }
  if ( v7 > 1 )
  {
    v5 = 93LL;
    goto LABEL_3;
  }
  do
  {
    *((_BYTE *)this + v2 + 64) = ((1 << v2) & a2) != 0;
    ++v2;
  }
  while ( v2 < 0xB );
  return 0LL;
}
