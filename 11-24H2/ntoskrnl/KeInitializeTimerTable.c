/*
 * XREFs of KeInitializeTimerTable @ 0x140A7BB0C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x140C60CE0 (KeInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x140455470 (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x1405C5040 (KiInitializeTimer2Data.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     KiInitializeForceIdle @ 0x140A7BC3C (KiInitializeForceIdle.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // rdi
  void *Pool2; // rdx
  __int64 v11; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = (unsigned __int8)guard_dispatch_icall_no_overrides(a1, a2, a3, a4) != 0;
    }
    KiInitializeTimer2Data();
  }
  if ( !KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1] )
  {
    v9 = 0x4000LL;
    if ( *(_BYTE *)(a1 + 208) )
    {
      if ( KiSerializeTimerExpiration )
      {
        Pool2 = 0LL;
      }
      else
      {
        Pool2 = (void *)ExAllocatePool2(0x48uLL);
        if ( !Pool2 )
          return 3221225626LL;
      }
    }
    else
    {
      Pool2 = &KiPendingTimersMask0;
      if ( KiSerializeTimerExpiration )
        v9 = 32LL;
    }
    v11 = 2LL * *(unsigned __int8 *)(a1 + 208);
    KiPendingTimerBitmaps[v11] = 8 * v9;
    KiPendingTimerBitmaps[v11 + 1] = (__int64)Pool2;
  }
  *(_DWORD *)(a1 + 14528) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 33776), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 33832) )
    *(_WORD *)(a1 + 33778) = *(_DWORD *)(a1 + 36) + 2048;
  v5 = a1 + 17160;
  v6 = 2LL;
  do
  {
    v7 = 256LL;
    do
    {
      *(_QWORD *)(v5 - 8) = 0LL;
      *(_QWORD *)(v5 + 8) = v5;
      *(_QWORD *)v5 = v5;
      *(_DWORD *)(v5 + 20) = -1;
      *(_DWORD *)(v5 + 16) = 0;
      v5 += 32LL;
      --v7;
    }
    while ( v7 );
    --v6;
  }
  while ( v6 );
  KiInitializeForceIdle(a1);
  return 0LL;
}
