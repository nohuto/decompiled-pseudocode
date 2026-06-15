/*
 * XREFs of ?SetAccessibilityAudioMonoMixState@CPolicyConfig@@UEAAJH@Z @ 0x180106940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolicyConfig::SetAccessibilityAudioMonoMixState(CPolicyConfig *this)
{
  return (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 192LL))(g_PolicyManager);
}
