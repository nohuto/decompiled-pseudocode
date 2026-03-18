/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x14046E528
 * Callers:
 *     KeConnectInterrupt @ 0x1403B6EEC (KeConnectInterrupt.c)
 *     KeUnmaskInterrupt @ 0x14046E464 (KeUnmaskInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14046E6B8 (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rsi
  volatile signed __int64 *v4; // rbp
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rax
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // r9

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = (volatile signed __int64 *)(v3 + KiGlobalSecondaryIDT);
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v3 + KiGlobalSecondaryIDT));
  if ( !*(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) )
  {
    v5 = 296;
LABEL_4:
    HalpReleaseHighLevelLock(v4, 0);
    return v5;
  }
  v6 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40);
  if ( !v6 )
    goto LABEL_4;
  v7 = (__int64 *)(v6 + 8);
  v8 = (__int64 *)(v6 + 8);
  while ( 1 )
  {
    v9 = -(v8[12] & 1);
    if ( (v8[12] & 1) == 0 )
      break;
    v8 = (__int64 *)*v8;
    if ( v8 == v7 )
      goto LABEL_10;
  }
  *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 0;
LABEL_10:
  HalpReleaseHighLevelLock(v4, 0);
  if ( !v9 )
    return (unsigned int)guard_dispatch_icall_no_overrides(a2, 0LL, v10, v11);
  return v5;
}
