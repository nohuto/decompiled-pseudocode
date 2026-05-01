/*
 * XREFs of CrmStateMonitorDisconnectedStandbyCallback @ 0x180068400
 * Callers:
 *     <none>
 * Callees:
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 *     CrmStateMonitorStateSet @ 0x18002D220 (CrmStateMonitorStateSet.c)
 *     CrmStateRoutineSebLevel @ 0x1800684B8 (CrmStateRoutineSebLevel.c)
 */

__int64 __fastcall CrmStateMonitorDisconnectedStandbyCallback(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int *v6; // rdi
  BOOL v7; // eax
  BOOL v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = 64LL;
  if ( a2 != 8 )
    v3 = 88LL;
  v6 = (unsigned int *)(a1 - v3);
  CempLockAcquireExclusive(a1 - v3 + 8);
  if ( a2 == 8 )
    v6[28] = (unsigned int)(*a3 - 1) <= 0xFFFFFFFD;
  else
    v6[29] = CrmStateRoutineSebLevel(a3);
  v7 = v6[28] && !v6[29];
  v9 = v7;
  CrmStateMonitorStateSet(v6, &v9, 4uLL, 1);
  v6[4] = 0;
  return RtlReleaseSRWLockExclusive(v6 + 2);
}
