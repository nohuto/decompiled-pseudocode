/*
 * XREFs of PdcPoSetPowerAction @ 0x14075C220
 * Callers:
 *     <none>
 * Callees:
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoSetPowerAction(_DWORD *a1, __int64 a2, _DWORD *a3, int a4, unsigned int a5)
{
  unsigned int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v14; // [rsp+20h] [rbp-18h]

  v7 = a2;
  PopAcquirePolicyLock(a1, a2);
  PopExecutePowerAction(a1, v7, a3, a4, a5);
  return PopReleasePolicyLock(v10, v9, v11, v12, v14);
}
