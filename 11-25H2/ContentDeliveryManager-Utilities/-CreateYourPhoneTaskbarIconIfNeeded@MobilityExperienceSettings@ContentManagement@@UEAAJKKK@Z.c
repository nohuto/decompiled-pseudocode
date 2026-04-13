/*
 * XREFs of ?CreateYourPhoneTaskbarIconIfNeeded@MobilityExperienceSettings@ContentManagement@@UEAAJKKK@Z @ 0x18002E790
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z @ 0x18002E7B4 (-CreateYourPhoneTaskbarIconIfNeeded@Pinning@Mobility@@YAXKKK@Z.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::CreateYourPhoneTaskbarIconIfNeeded(
        ContentManagement::MobilityExperienceSettings *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  Mobility::Pinning::CreateYourPhoneTaskbarIconIfNeeded((Mobility::Pinning *)a2, a3, a4, a4);
  return 0LL;
}
