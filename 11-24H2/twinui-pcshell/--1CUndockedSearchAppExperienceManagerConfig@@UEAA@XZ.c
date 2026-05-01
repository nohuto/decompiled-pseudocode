/*
 * XREFs of ??1CUndockedSearchAppExperienceManagerConfig@@UEAA@XZ @ 0x1803B589C
 * Callers:
 *     ??_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z @ 0x1803B70F0 (--_GCUndockedSearchAppExperienceManagerConfig@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall CUndockedSearchAppExperienceManagerConfig::~CUndockedSearchAppExperienceManagerConfig(
        CUndockedSearchAppExperienceManagerConfig *this)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CUndockedSearchAppExperienceManagerConfig *)((char *)this + 24));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((CUndockedSearchAppExperienceManagerConfig *)((char *)this + 16));
  *(_QWORD *)this = &IUndockedSearchAppExperienceManagerConfig::`vftable';
}
