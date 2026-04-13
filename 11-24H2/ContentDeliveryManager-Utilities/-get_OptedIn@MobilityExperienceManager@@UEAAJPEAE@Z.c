/*
 * XREFs of ?get_OptedIn@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x1800A8120
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAE@Z @ 0x1800A7BE8 (-GetMobilityValue@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAE@Z.c)
 */

__int64 __fastcall MobilityExperienceManager::get_OptedIn(
        MobilityExperienceManager *this,
        wchar_t *a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  int MobilityValue; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)a2 = 0;
  MobilityValue = CreativeFramework::MobilityExperienceSettings::GetMobilityValue(this, L"OptedIn", a2, a4);
  v5 = MobilityValue;
  if ( MobilityValue >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)MobilityValue);
  return v5;
}
