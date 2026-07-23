/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x140374188
 * Callers:
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 * Callees:
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1402B5468 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1402B54A0 (KiReleaseSecondaryPassiveConnectLock.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     KiDisconnectInterruptCommon @ 0x140373CA8 (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140374A2C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, _DWORD *a2)
{
  bool v4; // bl
  KSPIN_LOCK *v5; // rdi
  unsigned int v6; // ebx
  KSPIN_LOCK v8; // rax

  v4 = 0;
  v5 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a1 + 88) - 256));
  KiAcquireSecondaryPassiveConnectLock((__int64)v5);
  KiAcquireSecondaryInterruptConnectLock(v5);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v8 = v5[5];
    if ( v8 == a1 )
      v4 = *(_QWORD *)(v8 + 8) == v8 + 8;
  }
  HalpReleaseHighLevelLock((volatile signed __int64 *)v5, 0);
  if ( v4 )
    HalDisableInterrupt(a2);
  v6 = KiDisconnectInterruptCommon(1, a1, (__int64)a2);
  KiReleaseSecondaryPassiveConnectLock((__int64)v5);
  return v6;
}
