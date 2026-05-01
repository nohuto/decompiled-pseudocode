/*
 * XREFs of ?s_PackKeyboardSetVisibleNotification@CNotificationData@@SAXPEAXW4SetVisibleSource@IhmNotification@@K_N2@Z @ 0x180684500
 * Callers:
 *     ?SendKeyboardSetVisible@IhmNotification@@YAXW4SetVisibleSource@1@K_N1@Z @ 0x180684420 (-SendKeyboardSetVisible@IhmNotification@@YAXW4SetVisibleSource@1@K_N1@Z.c)
 * Callees:
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x1801F8DBC (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180478A5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@detai.c)
 *     memcpy_s_4 @ 0x18067CC18 (memcpy_s_4.c)
 *     ?Uint64ToQword@QwordHelpers@@YA_K_K@Z @ 0x18068448C (-Uint64ToQword@QwordHelpers@@YA_K_K@Z.c)
 *     ?_PushBool@CNotificationData@@CAXPEA_K_N@Z @ 0x1806844C4 (-_PushBool@CNotificationData@@CAXPEA_K_N@Z.c)
 */

unsigned __int64 __fastcall CNotificationData::s_PackKeyboardSetVisibleNotification(
        _QWORD *a1,
        unsigned __int8 a2,
        int a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  QwordHelpers *v9; // rcx
  __int64 v10; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v12; // rax
  QwordHelpers *v13; // rcx
  QwordHelpers *Source; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Destination; // [rsp+28h] [rbp-10h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetImpl'::`2'::impl) )
  {
    Source = (QwordHelpers *)a2;
    CNotificationData::_PushBool((unsigned __int64 *)&Source, a4);
    CNotificationData::_PushBool((unsigned __int64 *)&Source, a5);
    v10 = QwordHelpers::Uint64ToQword(Source);
    Destination = 0LL;
    *a1 = v10;
    LODWORD(Source) = a3;
    memcpy_s_4(&Destination, 8uLL, &Source, 4uLL);
    result = Destination;
  }
  else
  {
    LOBYTE(v9) = a4;
    v12 = QwordHelpers::BoolToQword(v9);
    LOBYTE(v13) = a5;
    *a1 = v12;
    result = QwordHelpers::BoolToQword(v13);
  }
  a1[1] = result;
  return result;
}
