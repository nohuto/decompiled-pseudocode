/*
 * XREFs of ?GetRequiredApplicationShellTraits@CApplicationTracker@@EEAAJPEAW4ApplicationShellTraits@@@Z @ 0x180085FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationTracker::GetRequiredApplicationShellTraits(
        CApplicationTracker *this,
        enum ApplicationShellTraits *a2)
{
  *(_DWORD *)a2 = (*(unsigned __int8 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 376LL))(g_PolicyManager) != 0
                ? 1
                : 4;
  return 0LL;
}
