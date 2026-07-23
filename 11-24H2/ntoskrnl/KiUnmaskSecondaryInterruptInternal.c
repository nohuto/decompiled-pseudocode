/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x1402B5288
 * Callers:
 *     KeConnectInterrupt @ 0x1402B31A0 (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x1402B4B54 (KeUnmaskInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140374A2C (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rax
  int v10; // edi

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = v3 + KiGlobalSecondaryIDT;
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v3 + KiGlobalSecondaryIDT));
  v6 = KiGlobalSecondaryIDT;
  if ( !*(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) )
  {
    v5 = 296;
LABEL_4:
    LOBYTE(v6) = 0;
    HalpReleaseHighLevelLock(v4, v6);
    return v5;
  }
  v7 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40);
  if ( !v7 )
    goto LABEL_4;
  v8 = (__int64 *)(v7 + 8);
  v9 = (__int64 *)(v7 + 8);
  while ( 1 )
  {
    v10 = -(v9[12] & 1);
    if ( (v9[12] & 1) == 0 )
      break;
    v9 = (__int64 *)*v9;
    if ( v9 == v8 )
      goto LABEL_10;
  }
  *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 0;
LABEL_10:
  LOBYTE(v6) = 0;
  HalpReleaseHighLevelLock(v4, v6);
  if ( !v10 )
    return (unsigned int)guard_dispatch_icall_no_overrides(a2, 0LL);
  return v5;
}
