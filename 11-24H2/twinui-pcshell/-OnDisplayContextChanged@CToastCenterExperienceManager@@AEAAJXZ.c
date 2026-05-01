/*
 * XREFs of ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x180384BA8
 * Callers:
 *     ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801F08E8 (-OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceExecutor@Holographic@Shell@Internal@Windows@@@Z @ 0x180384FE0 (-RegisterHolographicExecutor@CToastCenterExperienceManager@@UEAAJPEAUIHolographicCoreExperienceE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x180350F28 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1803839CC (-ChangeDisplayContext@CToastCenterExperienceManager@@AEAAJW4UserDisplayContext@Holographic@Shell.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnDisplayContextChanged(
        CToastCenterExperienceManager *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int UserDisplayContext; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 1;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v7,
                         a2);
  if ( UserDisplayContext < 0 )
  {
    v4 = 1688LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  UserDisplayContext = CToastCenterExperienceManager::ChangeDisplayContext((__int64)this, v7);
  if ( UserDisplayContext < 0 )
  {
    v4 = 1689LL;
    goto LABEL_3;
  }
  return 0LL;
}
