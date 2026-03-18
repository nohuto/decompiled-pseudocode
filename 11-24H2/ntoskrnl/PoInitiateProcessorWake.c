/*
 * XREFs of PoInitiateProcessorWake @ 0x1405CDBE0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     HalRequestIpi @ 0x1403B67D0 (HalRequestIpi.c)
 *     PpmIdleTransitionStall @ 0x1405CECAC (PpmIdleTransitionStall.c)
 *     PpmIdleUpdateSynchronizationState @ 0x1405CEEC4 (PpmIdleUpdateSynchronizationState.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+30h] [rbp-D0h]
  struct _KAFFINITY_EX v18; // [rsp+40h] [rbp-C0h] BYREF

  memset_0(&v18, 0, sizeof(v18));
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
          *(_QWORD *)&v18.Count = 2097153LL;
          memset_0(&v18.8, 0, sizeof(v18.8));
          KiCopyAffinityEx(&v18, v18.Size, (struct _KAFFINITY_EX *)(v5 + 72));
          if ( !(unsigned int)KeIsEmptyAffinityEx(&v18.Count) )
            HalRequestIpi(0, &v18.Count);
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
        v16[0] = 0LL;
        v16[1] = PopIdleTransitionTimeout;
        v17 = (unsigned __int64)Prcb;
        while ( !(unsigned __int8)guard_dispatch_icall_no_overrides(v9, v2, v3, v11) )
        {
          if ( HIBYTE(*v6) != 8 )
            return v8;
          PpmIdleTransitionStall(v16);
        }
        return guard_dispatch_icall_no_overrides(v9, v12, v13, v14);
      }
      LOBYTE(v7) = updated;
    }
    _mm_pause();
  }
  return v8;
}
