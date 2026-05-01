/*
 * XREFs of _lambda_b00c0a52bd3e015b702ddb883117dd85_::operator() @ 0x18040C788
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b00c0a52bd3e015b702ddb883117dd85___::Run @ 0x18040E370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b00c0a52bd3e015b702ddb883117dd85___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x180098510 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18040BC1C (--$As@UIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@@WeakRef@WRL@Microsoft@@Q.c)
 *     ?FetchAllSessions@AppList@GamingAudio@@AEAAXXZ @ 0x18040CC64 (-FetchAllSessions@AppList@GamingAudio@@AEAAXXZ.c)
 *     ?UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ @ 0x18040E6A0 (-UpdateMasterListBasedOnSessionMap@AppList@GamingAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_b00c0a52bd3e015b702ddb883117dd85_::operator()(__int64 a1)
{
  int updated; // eax
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  wil::EnterCriticalSection(&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)a1 + 112LL));
  GamingAudio::AppList::FetchAllSessions(*(GamingAudio::AppList **)a1);
  updated = GamingAudio::AppList::UpdateMasterListBasedOnSessionMap(*(GamingAudio::AppList **)a1);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x240,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
      (const char *)(unsigned int)updated);
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( *(_BYTE *)(a1 + 8) )
  {
    lpCriticalSection = 0LL;
    v3 = Microsoft::WRL::WeakRef::As<Windows::Internal::GamingOverlay::IGamingOverlayExperienceManager>(
           (Microsoft::WRL::WeakRef *)(*(_QWORD *)a1 + 104LL),
           (struct IInspectable **)&lpCriticalSection);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x252,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
        (const char *)(unsigned int)v3);
    if ( lpCriticalSection )
    {
      v4 = ((__int64 (__fastcall *)(LPCRITICAL_SECTION, __int64))lpCriticalSection->DebugInfo[8].CriticalSection)(
             lpCriticalSection,
             0xFFFFFFFFLL);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x257,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\audio.cpp",
          (const char *)(unsigned int)v4);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&lpCriticalSection);
  }
}
