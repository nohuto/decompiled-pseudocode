/*
 * XREFs of KiAdjustUserIsolationDomainThread @ 0x1405BFC80
 * Callers:
 *     PspSynchronizeThreadIsolationDomains @ 0x14032C988 (PspSynchronizeThreadIsolationDomains.c)
 *     KeEnableCoreIsolationMitigationPolicyThread @ 0x1405BF6F0 (KeEnableCoreIsolationMitigationPolicyThread.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiIpiSendPacket @ 0x14045D668 (KiIpiSendPacket.c)
 *     KiIpiStallOnPacketTargets @ 0x14045F44C (KiIpiStallOnPacketTargets.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KiAdjustUserIsolationDomainThread(__int64 a1, __int64 a2, char a3)
{
  char v3; // r13
  __int64 v4; // rdi
  __int64 v6; // r12
  unsigned __int8 v7; // r15
  __int64 v8; // rdi
  volatile __int64 *v9; // rsi
  unsigned __int64 v10; // rcx
  char v11; // al
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rax
  unsigned __int8 v19; // dl
  unsigned __int8 CurrentIrql; // cl
  __int64 v21; // rcx
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v27[3]; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v29[264]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v30; // [rsp+1C8h] [rbp+C8h] BYREF

  v30 = a2;
  v3 = a3;
  v4 = a2;
  memset_0(&v28, 0, 0x108uLL);
  v24 = 0LL;
  v25 = 0LL;
  if ( !v3 )
  {
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v4 = v30;
    v3 = a3;
  }
  v6 = *(_QWORD *)(a1 + 1816);
  if ( v6 == v4 )
    goto LABEL_57;
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 1816) = v30;
    goto LABEL_57;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *(_BYTE *)(a1 + 388);
        v8 = 0LL;
        v9 = 0LL;
        v10 = (unsigned int)v7 - 1;
        if ( v7 == 1 )
          break;
        if ( v7 == 2 )
        {
LABEL_17:
          v12 = *(unsigned int *)(a1 + 536);
          if ( (int)v12 >= 0 )
          {
            v8 = KiProcessorBlock[v12];
            KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, (unsigned __int64 *)&v24);
            if ( a1 == *(_QWORD *)(v8 + 8) )
              goto LABEL_49;
            if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v12 )
              __fastfail(0x4Au);
            goto LABEL_47;
          }
        }
        else
        {
          v10 = (unsigned int)v7 - 3;
          if ( v7 != 3 )
          {
            if ( v7 != 5 )
              goto LABEL_49;
            v11 = *(_BYTE *)(a1 + 112) & 7;
            if ( v11 == 1 || (unsigned __int8)(v11 - 3) <= 3u )
              goto LABEL_49;
            v7 = 2;
            goto LABEL_17;
          }
          v13 = *(unsigned int *)(a1 + 536);
          if ( (int)v13 >= 0 )
          {
            v8 = KiProcessorBlock[v13];
            KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, (unsigned __int64 *)&v24);
            if ( a1 == *(_QWORD *)(v8 + 16) )
              goto LABEL_49;
            if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v13 )
              __fastfail(0x1Eu);
            goto LABEL_47;
          }
        }
      }
      v14 = *(unsigned int *)(a1 + 536);
      if ( (int)v14 < 0 )
        break;
      v8 = KiProcessorBlock[v14];
      KiAcquirePrcbLocksForIsolationUnit(v8, 0LL, (unsigned __int64 *)&v24);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
        goto LABEL_49;
LABEL_47:
      KiReleasePrcbLocksForIsolationUnit(&v24);
    }
    v15 = (unsigned int)v14;
    LODWORD(v15) = v14 & 0x7FFFFFFF;
    v16 = KiProcessorBlock[v15];
    v9 = *(volatile __int64 **)(v16 + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v25 + 1) = *(_QWORD *)(v16 + 36424);
      *(_QWORD *)&v25 = 0LL;
      v17 = (_QWORD *)_InterlockedExchange64(v9, (__int64)&v25);
      if ( v17 )
        KxWaitForLockOwnerShip((__int64)&v25, v17);
    }
    else
    {
      v27[0] = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      {
        do
          KeYieldProcessorEx(v27);
        while ( *v9 );
      }
      v3 = a3;
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v14 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(&v25);
      v18 = v25;
      if ( (_QWORD)v25 )
      {
LABEL_42:
        *(_QWORD *)&v25 = 0LL;
        v19 = BYTE8(v25);
        if ( ((v19 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v18 + 8), *((__int64 *)&v25 + 1))) & 4) != 0 )
          KeWakeAddressAll(v18 + 8, 2LL);
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(
                              *((volatile signed __int64 **)&v25 + 1),
                              0LL,
                              (signed __int64)&v25) != &v25 )
      {
        v18 = KxWaitForLockChainValid((__int64 *)&v25);
        goto LABEL_42;
      }
    }
    else
    {
      _InterlockedAnd64(v9, 0LL);
    }
  }
  v8 = 0LL;
LABEL_49:
  if ( v7 == 2 )
  {
    v28 = 2097153LL;
    memset_0(v29, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&v28, *(_DWORD *)(v8 + 36));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
    KiIpiSendPacket(0, (char *)&v28, (__int64)KiIpiUpdateUserIsolationDomain, a1, (__int64)&v30, 0LL);
    KiIpiStallOnPacketTargets(v21);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 2u);
    __writecr8(2uLL);
  }
  else
  {
    *(_QWORD *)(a1 + 1816) = v30;
  }
  KiReleaseThreadStateLock(v10, v8, &v24, v9, (volatile signed __int64 **)&v25);
LABEL_57:
  if ( !v3 )
    *(_QWORD *)(a1 + 64) = 0LL;
  return v6;
}
