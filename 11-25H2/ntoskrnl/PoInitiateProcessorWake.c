/*
 * XREFs of PoInitiateProcessorWake @ 0x1405C9530
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestIpi @ 0x140205130 (HalRequestIpi.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmIdleTransitionStall @ 0x1405CA5FC (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x1405CA814 (PpmIdleUpdateSynchronizationState.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall PoInitiateProcessorWake(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 Prcb; // r14
  __int64 v5; // r15
  _DWORD *v6; // rsi
  int v7; // ebx
  char v8; // di
  __int64 v9; // r12
  char updated; // al
  _QWORD v12[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v13; // [rsp+30h] [rbp-D0h]
  struct _KAFFINITY_EX v14; // [rsp+40h] [rbp-C0h] BYREF

  memset_0(&v14, 0, sizeof(v14));
  Prcb = KeGetPrcb(a1);
  v5 = *(_QWORD *)(Prcb + 34880);
  v6 = (_DWORD *)(Prcb + 34956);
  v7 = HIBYTE(*(_DWORD *)(Prcb + 34956));
  v8 = 0;
  v9 = *(_QWORD *)(v5 + 664);
  while ( (unsigned __int8)(v7 - 2) <= 4u || (unsigned __int8)v7 >= 9u )
  {
    if ( (_BYTE)v7 == 2 )
    {
      v7 = HIBYTE(*v6);
    }
    else if ( (((_BYTE)v7 - 4) & 0xFD) != 0 )
    {
      if ( (_BYTE)v7 == 5 )
      {
        LOBYTE(v3) = 5;
        LOBYTE(v2) = 7;
        LOBYTE(v7) = PpmIdleUpdateSynchronizationState(v6, v2, v3);
        if ( (_BYTE)v7 == 5 )
        {
          *(_QWORD *)&v14.Count = 2097153LL;
          memset_0(&v14.8, 0, sizeof(v14.8));
          KiCopyAffinityEx(&v14, v14.Size, (struct _KAFFINITY_EX *)(v5 + 72));
          if ( !(unsigned int)KeIsEmptyAffinityEx(&v14.Count) )
            HalRequestIpi(0, &v14.Count);
          return v8;
        }
      }
    }
    else
    {
      LOBYTE(v3) = v7;
      LOBYTE(v2) = 8;
      updated = PpmIdleUpdateSynchronizationState(v6, v2, v3);
      if ( updated == (_BYTE)v7 )
      {
        if ( !*(_BYTE *)(Prcb + 34941) )
          return 1;
        v12[0] = 0LL;
        v12[1] = PopIdleTransitionTimeout;
        v13 = (unsigned __int64)Prcb;
        while ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v9) )
        {
          if ( HIBYTE(*v6) != 8 )
            return v8;
          PpmIdleTransitionStall(v12);
        }
        return guard_dispatch_icall_no_overrides(v9);
      }
      LOBYTE(v7) = updated;
    }
    _mm_pause();
  }
  return v8;
}
