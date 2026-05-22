/*
 * XREFs of ??_E?$ListProxy@UTouchInjectionContact@Input@Internal@UI@Windows@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x18019CB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$ListProxyCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UTouchInjectionContact@Input@Internal@UI@Windows@@@Bamo@Microsoft@@UEAA@XZ @ 0x18019CAD8 (--1-$ListProxyCommon@VBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft.c)
 */

__int64 *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListProxy<Windows::UI::Internal::Input::TouchInjectionContact>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  Microsoft::Bamo::ListProxyCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact>::~ListProxyCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy,Windows::UI::Internal::Input::TouchInjectionContact>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
