/*
 * XREFs of ?IsSessionGlobalsAreaAllocated@Base@Gre@@YA_NXZ @ 0x14008A370
 * Callers:
 *     MultiUserNtGreCleanup @ 0x140089C68 (MultiUserNtGreCleanup.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     GreNotifyCleanupLogonProcess @ 0x14019F14C (GreNotifyCleanupLogonProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall Gre::Base::IsSessionGlobalsAreaAllocated(Gre::Base *this)
{
  return *(_QWORD *)(W32GetSessionState(this) + 88) != 0LL;
}
