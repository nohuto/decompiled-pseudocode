/*
 * XREFs of HalpVpptTimerRegister @ 0x1405465BC
 * Callers:
 *     HalpTimerSelectRoles @ 0x140539128 (HalpTimerSelectRoles.c)
 * Callees:
 *     ExtEnvInitializeSpinLock @ 0x14055D9E4 (ExtEnvInitializeSpinLock.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HalpVpptTimerRegister(_DWORD *a1, char a2)
{
  int v4; // edi
  int v5; // eax
  _DWORD v6[2]; // [rsp+20h] [rbp-69h] BYREF
  __int64 (__fastcall *v7)(__int64); // [rsp+28h] [rbp-61h]
  __int64 (__fastcall *v8)(__int64); // [rsp+38h] [rbp-51h]
  __int64 (__fastcall *v9)(__int64 *, int, __int64); // [rsp+40h] [rbp-49h]
  __int64 (__fastcall *v10)(__int64); // [rsp+48h] [rbp-41h]
  __int128 *v11; // [rsp+78h] [rbp-11h]
  int v12; // [rsp+80h] [rbp-9h]
  int v13; // [rsp+84h] [rbp-5h]
  __int64 v14; // [rsp+88h] [rbp-1h]
  int v15; // [rsp+94h] [rbp+Bh]
  int v16; // [rsp+98h] [rbp+Fh]
  int v17; // [rsp+9Ch] [rbp+13h]
  int v18; // [rsp+A0h] [rbp+17h]
  int v19; // [rsp+A4h] [rbp+1Bh]
  int v20; // [rsp+A8h] [rbp+1Fh]
  int v21; // [rsp+ACh] [rbp+23h]
  __int128 v22; // [rsp+B0h] [rbp+27h] BYREF
  __int128 v23; // [rsp+C0h] [rbp+37h]
  __int128 v24; // [rsp+D0h] [rbp+47h]

  if ( !a1 )
    return 3221225485LL;
  if ( a2 && (a1[56] & 0x8000) == 0 )
    return 3221225659LL;
  if ( (a1[56] & 1) != 0 )
    return 3221225659LL;
  v4 = a1[56] & 0xB00;
  if ( !v4 )
    return 3221225659LL;
  if ( _InterlockedExchange(&HalpVpptRegistered, 1) )
    return 3221227288LL;
  HalpVpptPhysicalTimerTarget = -1;
  *(_QWORD *)&HalpVpptPhysicalTimer = a1;
  ExtEnvInitializeSpinLock(&HalpVpptLock);
  qword_140FC16F8 = (__int64)&HalpVpptQueue;
  *(_QWORD *)&HalpVpptQueue = &HalpVpptQueue;
  memset_0(v6, 0, 0x90uLL);
  v21 = 0;
  v7 = HalpVpptInitialize;
  v6[0] = 1;
  v6[1] = 144;
  v9 = HalpVpptArmTimer;
  v13 = 64;
  v10 = HalpVpptStop;
  v8 = HalpVpptAcknowledgeInterrupt;
  v5 = a1[56] & 0x8000;
  v12 = 48;
  v20 = 12;
  v14 = 10000000LL;
  v15 = v4 | v5 | 0x210031;
  v19 = a1[24];
  v18 = a1[23];
  v17 = a1[22];
  v16 = a1[21];
  v23 = 0LL;
  LODWORD(v23) = -1;
  v11 = &v22;
  v22 = 0LL;
  v24 = 0LL;
  return HalpTimerRegister(v6, 0LL);
}
