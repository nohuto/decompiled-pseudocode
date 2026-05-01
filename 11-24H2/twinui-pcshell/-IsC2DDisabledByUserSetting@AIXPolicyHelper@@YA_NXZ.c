/*
 * XREFs of ?IsC2DDisabledByUserSetting@AIXPolicyHelper@@YA_NXZ @ 0x18059176C
 * Callers:
 *     _lambda_c0ce33e06c92a42a96b12c6bd24e1411_::operator()_winrt::Windows::UI::Input::GestureRecognizer_ @ 0x18058DCE4 (_lambda_c0ce33e06c92a42a96b12c6bd24e1411_--operator()_winrt--Windows--UI--Input--GestureRecogniz.c)
 *     ?UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18069BC7C (-UpdateRightEdgyOptions@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Interna.c)
 * Callees:
 *     ?value@?$optional@I@std@@QEGAAAEAIXZ @ 0x18021E950 (-value@-$optional@I@std@@QEGAAAEAIXZ.c)
 *     ??$try_get_value@I@reg@wil@@YA?AV?$optional@I@std@@PEAUHKEY__@@PEBG1@Z @ 0x1803B46F4 (--$try_get_value@I@reg@wil@@YA-AV-$optional@I@std@@PEAUHKEY__@@PEBG1@Z.c)
 */

bool __fastcall AIXPolicyHelper::IsC2DDisabledByUserSetting(AIXPolicyHelper *this)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+34h] [rbp+Ch]

  wil::reg::try_get_value<unsigned int>((__int64)&v2);
  return v3 && *(_DWORD *)std::optional<unsigned int>::value((__int64)&v2) == 1;
}
