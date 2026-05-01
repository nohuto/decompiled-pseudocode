/*
 * XREFs of _anonymous_namespace_::GetViewTypeFromInputKind @ 0x1805110B0
 * Callers:
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18020C1CC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 *     ??$InvalidInputKind@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z @ 0x18050893C (--$InvalidInputKind@I@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI@Z.c)
 */

__int64 __fastcall anonymous_namespace_::GetViewTypeFromInputKind(int a1)
{
  unsigned int *v2; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    v2 = (unsigned int *)&unk_180828380;
    while ( a1 != v2[1] )
    {
      v2 += 2;
      if ( v2 == (unsigned int *)&unk_1808283F8 )
        goto LABEL_9;
    }
  }
  else
  {
    v2 = (unsigned int *)&unk_180828400;
    while ( a1 != v2[1] )
    {
      v2 += 2;
      if ( v2 == (unsigned int *)&winrt::impl::guid_v<winrt::WindowsUdk::ApplicationModel::OnScreenInput::IKnownOnScreenInputUriSchemesStatics4> )
      {
LABEL_9:
        v4 = a1;
        TouchKeyboardExperienceTelemetryLogger::InvalidInputKind<unsigned int>(&v4);
        return 0xFFFFFFFFLL;
      }
    }
  }
  return *v2;
}
