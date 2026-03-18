/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x14046E5F4
 * Callers:
 *     KeMaskInterrupt @ 0x1403B748C (KeMaskInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x1403B9898 (HalpReleaseHighLevelLock.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14046E6B8 (KiAcquireSecondaryInterruptConnectLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rbx
  volatile signed __int64 *v4; // rdi
  __int64 v6; // rax
  __int64 *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9

  v3 = 48LL * (unsigned int)(a1 - 256);
  v4 = (volatile signed __int64 *)(v3 + KiGlobalSecondaryIDT);
  KiAcquireSecondaryInterruptConnectLock((PKSPIN_LOCK)(v3 + KiGlobalSecondaryIDT));
  if ( *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) || (v6 = *(_QWORD *)(v3 + KiGlobalSecondaryIDT + 40)) == 0 )
  {
    HalpReleaseHighLevelLock(v4, 0);
    return 0LL;
  }
  else
  {
    v7 = (__int64 *)(v6 + 8);
    while ( (v7[12] & 1) != 0 )
    {
      v7 = (__int64 *)*v7;
      if ( v7 == (__int64 *)(v6 + 8) )
      {
        *(_BYTE *)(v3 + KiGlobalSecondaryIDT + 32) = 1;
        v8 = 0;
        goto LABEL_9;
      }
    }
    v8 = 296;
LABEL_9:
    HalpReleaseHighLevelLock(v4, 0);
    if ( !v8 )
      guard_dispatch_icall_no_overrides(a2, 0LL, v9, v10);
    return v8;
  }
}
