/*
 * XREFs of KiDisconnectSecondaryInterrupt @ 0x140444EC8
 * Callers:
 *     KeDisconnectInterrupt @ 0x1404448BC (KeDisconnectInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x140443A1C (KiReleaseSecondaryPassiveConnectLock.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x140443A40 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140444734 (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectInterruptCommon @ 0x1404449DC (KiDisconnectInterruptCommon.c)
 *     HalDisableInterrupt @ 0x140444D30 (HalDisableInterrupt.c)
 */

__int64 __fastcall KiDisconnectSecondaryInterrupt(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  bool v5; // bl
  KSPIN_LOCK *v6; // rdi
  unsigned int v7; // ebx
  KSPIN_LOCK v9; // rax
  unsigned __int8 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = (unsigned int)(*(_DWORD *)(a1 + 88) - 256);
  v10 = 0;
  v5 = 0;
  v6 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48 * v3);
  KiAcquireSecondaryPassiveConnectLock((__int64)v6);
  KiAcquireSecondaryInterruptConnectLock(v6, &v10);
  if ( *(_BYTE *)(a1 + 95) )
  {
    v9 = v6[5];
    if ( v9 == a1 )
      v5 = *(_QWORD *)(v9 + 8) == v9 + 8;
  }
  HalpReleaseHighLevelLock((__int64)v6, v10);
  if ( v5 )
    HalDisableInterrupt(a2);
  v7 = KiDisconnectInterruptCommon(1, a1, (__int64)a2);
  KiReleaseSecondaryPassiveConnectLock((__int64)v6);
  return v7;
}
