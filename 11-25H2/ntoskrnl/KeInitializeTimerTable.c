/*
 * XREFs of KeInitializeTimerTable @ 0x140A79D74
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 *     KeInitSystem @ 0x140C4FA10 (KeInitSystem.c)
 * Callees:
 *     KeInitializeDpc @ 0x140454E30 (KeInitializeDpc.c)
 *     KiInitializeTimer2Data @ 0x1405C0CF0 (KiInitializeTimer2Data.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     KiInitializeForceIdle @ 0x140A79EA4 (KiInitializeForceIdle.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall KeInitializeTimerTable(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rdi
  void *Pool2; // rdx
  __int64 v8; // rcx

  if ( !*(_DWORD *)(a1 + 36) )
  {
    if ( KiSerializeTimerExpiration )
    {
      if ( KiSerializeTimerExpiration != 1 )
        KiSerializeTimerExpiration = 0;
    }
    else
    {
      KiSerializeTimerExpiration = (unsigned __int8)guard_dispatch_icall_no_overrides(a1) != 0;
    }
    KiInitializeTimer2Data();
  }
  if ( !KiPendingTimerBitmaps[2 * *(unsigned __int8 *)(a1 + 208) + 1] )
  {
    v6 = 0x4000LL;
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
        v6 = 32LL;
    }
    v8 = 2LL * *(unsigned __int8 *)(a1 + 208);
    KiPendingTimerBitmaps[v8] = 8 * v6;
    KiPendingTimerBitmaps[v8 + 1] = (__int64)Pool2;
  }
  *(_DWORD *)(a1 + 14528) = MEMORY[0xFFFFF78000000320];
  KeInitializeDpc((PRKDPC)(a1 + 33776), (PKDEFERRED_ROUTINE)KiTimerExpirationDpc, 0LL);
  if ( !*(_QWORD *)(a1 + 33832) )
    *(_WORD *)(a1 + 33778) = *(_DWORD *)(a1 + 36) + 2048;
  v2 = a1 + 17160;
  v3 = 2LL;
  do
  {
    v4 = 256LL;
    do
    {
      *(_QWORD *)(v2 - 8) = 0LL;
      *(_QWORD *)(v2 + 8) = v2;
      *(_QWORD *)v2 = v2;
      *(_DWORD *)(v2 + 20) = -1;
      *(_DWORD *)(v2 + 16) = 0;
      v2 += 32LL;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  KiInitializeForceIdle(a1);
  return 0LL;
}
