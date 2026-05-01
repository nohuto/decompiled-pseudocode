/*
 * XREFs of ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180294380
 * Callers:
 *     ?RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180060A34 (-RegisterForApplicationStateChanges@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x1801EC718 (-CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA-AV-$ComPtr@UIApplicationFrameWrapper.c)
 *     ?GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z @ 0x180206730 (-GetIsSystemInputApp@TouchKeyboardExperienceManager@@UEAAJPEBGPEAH@Z.c)
 *     ?GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180207530 (-GetAppId@TouchKeyboardExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180251C20 (-EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180470388 (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180472E10 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800BADF8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::GetCurrentInputAppId(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi

  v4 = a1 + 13;
  EnterCriticalSection(a1 + 13);
  std::wstring::wstring(a2, (__int64)&a1[12].LockCount);
  if ( v4 )
    LeaveCriticalSection(v4);
  return a2;
}
