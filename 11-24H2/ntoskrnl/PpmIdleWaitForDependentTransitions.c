/*
 * XREFs of PpmIdleWaitForDependentTransitions @ 0x1405CEF08
 * Callers:
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x1405CE3DC (PpmIdleCheckCoordinatedStateEligibility.c)
 * Callees:
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PpmIdleTransitionStall @ 0x1405CECAC (PpmIdleTransitionStall.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PpmIdleWaitForDependentTransitions(__int64 a1)
{
  unsigned __int16 *v1; // rax
  unsigned int v2; // ebx
  __int64 Prcb; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int16 *v10[2]; // [rsp+20h] [rbp-40h] BYREF
  __int16 v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+32h] [rbp-2Eh]
  __int16 v13; // [rsp+36h] [rbp-2Ah]
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v15; // [rsp+48h] [rbp-18h]
  unsigned int v16; // [rsp+70h] [rbp+10h] BYREF

  v1 = *(unsigned __int16 **)(a1 + 8);
  v2 = 0;
  v12 = 0;
  v13 = 0;
  v16 = 0;
  v11 = 0;
  v10[1] = v1;
  v10[0] = (unsigned __int16 *)a1;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v16, v10) )
  {
    Prcb = KeGetPrcb(v16);
    v15 = 0LL;
    BYTE12(v15) = 1;
    v7 = Prcb;
    v8 = *(_QWORD *)(Prcb + 34880);
    v14[0] = 0LL;
    *(_QWORD *)&v15 = Prcb;
    v14[1] = PopIdleTransitionTimeout;
    while ( !(unsigned __int8)guard_dispatch_icall_no_overrides(*(_QWORD *)(v8 + 664), v4, v5, v6) )
    {
      if ( (*(_DWORD *)(v7 + 34956) & 0xFF000000) != 0x5000000 )
        return (unsigned int)-1073741782;
      PpmIdleTransitionStall((__int64)v14);
    }
  }
  return v2;
}
