/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x1403B9038
 * Callers:
 *     KeDisconnectInterrupt @ 0x1403B8A3C (KeDisconnectInterrupt.c)
 * Callees:
 *     KiDisconnectInterruptCommon @ 0x1403B8B5C (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14046E6B8 (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1404B6320 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1404D0B20 (KiReleaseSecondaryPassiveConnectLock.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, _DWORD *a2)
{
  bool v4; // bl
  KSPIN_LOCK *v5; // rdi
  __int64 v6; // rdx
  unsigned int v7; // ebx
  KSPIN_LOCK v9; // rax

  v4 = 0;
  v5 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256));
  KiAcquireSecondaryPassiveConnectLock(v5);
  KiAcquireSecondaryInterruptConnectLock(v5);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v9 = v5[5];
    if ( v9 == a1 )
      v4 = *(_QWORD *)(v9 + 8) == v9 + 8;
  }
  LOBYTE(v6) = 0;
  HalpReleaseHighLevelLock(v5, v6);
  if ( v4 )
    HalDisableInterrupt(a2);
  v7 = KiDisconnectInterruptCommon(1, a1, (__int64)a2);
  KiReleaseSecondaryPassiveConnectLock(v5);
  return v7;
}
