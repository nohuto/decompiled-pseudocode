/*
 * XREFs of ?Commit@SetDesktopWallpaperService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800A2380
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800A2BBC (-NotifyForDesktopSpotlightUpdates@SetDesktopWallpaperService@Actions@CreativeFramework@@AEAAJXZ.c)
 */

void __fastcall CreativeFramework::Actions::SetDesktopWallpaperService::Commit(
        CreativeFramework::Actions::SetDesktopWallpaperService *this)
{
  int v1; // eax
  int v2; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 104) )
  {
    v1 = CreativeFramework::Actions::SetDesktopWallpaperService::NotifyForDesktopSpotlightUpdates(this);
    if ( v1 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\desktopactions.cpp",
        (const char *)(unsigned int)v1,
        v2);
  }
}
