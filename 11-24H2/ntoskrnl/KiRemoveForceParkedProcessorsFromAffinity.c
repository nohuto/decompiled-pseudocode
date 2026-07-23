/*
 * XREFs of KiRemoveForceParkedProcessorsFromAffinity @ 0x14042B3A0
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405B5C94 (KiUpdateSystemAvailableCpuState.c)
 * Callees:
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140330300 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KiInitializeSystemSubNodeEnumerationContext @ 0x14042C414 (KiInitializeSystemSubNodeEnumerationContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiRemoveForceParkedProcessorsFromAffinity(_WORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v5[2]; // [rsp+28h] [rbp-30h] BYREF

  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  KiInitializeSystemSubNodeEnumerationContext(v5, KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
  while ( 1 )
  {
    result = KiEnumerateNextSchedulerSubNodeInSystem((unsigned __int16 *)v5, &v4);
    if ( (_DWORD)result )
      break;
    v2 = *(unsigned __int16 *)(v4 + 136);
    if ( *a1 > (unsigned __int16)v2 )
      *(_QWORD *)&a1[4 * v2 + 4] &= ~*(_QWORD *)(v4 + 104);
  }
  return result;
}
