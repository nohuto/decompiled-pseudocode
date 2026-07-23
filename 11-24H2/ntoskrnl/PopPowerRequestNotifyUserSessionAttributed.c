/*
 * XREFs of PopPowerRequestNotifyUserSessionAttributed @ 0x140AB6528
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x140769F48 (TtmNotifySessionPowerRequestPresent.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 */

char __fastcall PopPowerRequestNotifyUserSessionAttributed(int a1, PVOID a2, void *a3)
{
  PVOID *v4; // rbx
  char v5; // di
  PVOID *i; // rax
  char result; // al
  int v10; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v5 = 0;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerRequestLock);
  for ( i = (PVOID *)PopPowerRequestObjectList; i != &PopPowerRequestObjectList; i = (PVOID *)*i )
  {
    v4 = i;
    if ( *((_DWORD *)i + 26) == a1 && i[14] == a2 )
    {
      i[15] = a3;
      v5 = 1;
      break;
    }
  }
  result = PopReleaseRwLock(&PopPowerRequestLock);
  if ( v5 )
  {
    result = TtmIsEnabled();
    if ( result )
      return TtmNotifySessionPowerRequestPresent(
               *((_DWORD *)v4 + 4),
               *((_DWORD *)v4 + 9),
               *((_DWORD *)v4 + 26),
               (int)v4[14],
               (__int64)v4[15],
               v10,
               1);
  }
  return result;
}
