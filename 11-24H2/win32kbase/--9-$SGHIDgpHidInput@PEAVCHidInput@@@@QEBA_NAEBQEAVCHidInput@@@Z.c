/*
 * XREFs of ??9?$SGHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x140149F08
 * Callers:
 *     ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x14012C1A0 (-EnvironmentChanged@CPTPProcessor@@SAXXZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x1401443F8 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     CHidInput_Destroy @ 0x14020F700 (CHidInput_Destroy.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGHIDgpHidInput<CHidInput *>::operator!=(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1) + 16840) != *a2;
}
