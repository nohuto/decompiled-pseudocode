/*
 * XREFs of ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@UEAAJIPEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE@Z @ 0x180207740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18029177C (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@AEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
        TouchKeyboardExperienceManager *this,
        unsigned int a2,
        enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *a3,
        unsigned __int8 *a4)
{
  *a4 = TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
          (TouchKeyboardExperienceManager *)((char *)this - 200),
          a2,
          a3);
  return 0LL;
}
