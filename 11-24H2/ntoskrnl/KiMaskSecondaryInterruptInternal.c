/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x1402B4D5C
 * Callers:
 *     KeMaskInterrupt @ 0x1402B3740 (KeMaskInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140374A2C (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  unsigned int v10; // ebx

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = v3 + KiGlobalSecondaryIDT;
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v3 + KiGlobalSecondaryIDT));
  if ( *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) || (v7 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    LOBYTE(v5) = 0;
    HalpReleaseHighLevelLock(v4, v5);
    return 0LL;
  }
  else
  {
    v8 = (__int64 *)(v7 + 8);
    v9 = (__int64 *)(v7 + 8);
    while ( (v9[12] & 1) != 0 )
    {
      v9 = (__int64 *)*v9;
      if ( v9 == v8 )
      {
        *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 1;
        v10 = 0;
        goto LABEL_9;
      }
    }
    v10 = 296;
LABEL_9:
    LOBYTE(v8) = 0;
    HalpReleaseHighLevelLock(v4, v8);
    if ( !v10 )
      guard_dispatch_icall_no_overrides(a2, 0LL);
    return v10;
  }
}
