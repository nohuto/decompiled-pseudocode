/*
 * XREFs of PoUnregisterFromEffectivePowerModeNotifications @ 0x140745130
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     ExUnsubscribeWnfStateChange @ 0x140A63170 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoUnregisterFromEffectivePowerModeNotifications(unsigned __int64 *P)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( P && *((_DWORD *)P + 8) == -1122885 )
  {
    PopAcquireRwLockExclusive(P + 5);
    P[7] = 0LL;
    PopReleaseRwLock((signed __int64 *)P + 5);
    ExUnsubscribeWnfStateChange(P[3]);
    ExFreePoolWithTag(P, 0x74655350u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
