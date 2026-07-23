/*
 * XREFs of KiDisconnectInterruptCommon @ 0x1404449DC
 * Callers:
 *     KeDisconnectInterrupt @ 0x1404448BC (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x140444EC8 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140205754 (HalpReleaseHighLevelLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x140443A78 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x140444734 (KiAcquireSecondaryInterruptConnectLock.c)
 *     KiDisconnectInterruptInternal @ 0x140444BF8 (KiDisconnectInterruptInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiSignalWaitDisconnectLock @ 0x1405BE05C (KiSignalWaitDisconnectLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v5; // rcx
  unsigned int v7; // r14d
  char v8; // r12
  __int64 v9; // rbx
  KSPIN_LOCK *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int8 v17[8]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v18; // [rsp+28h] [rbp-58h] BYREF
  char *v19; // [rsp+38h] [rbp-48h]
  _QWORD v20[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+50h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+58h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+68h] [rbp-18h] BYREF

  v20[1] = a3;
  v19 = 0LL;
  v20[0] = 0LL;
  v18 = 0LL;
  v5 = *(struct _KTHREAD **)(a2 + 152);
  v21 = 0LL;
  v7 = -1073741585;
  v8 = 0;
  v17[0] = 0;
  PreviousAffinity = 0LL;
  if ( v5 != KeGetCurrentThread() )
  {
    LOWORD(v18) = 1;
    v19 = (char *)&v18 + 8;
    *((_QWORD *)&v18 + 1) = (char *)&v18 + 8;
    v20[0] = &v18;
    BYTE2(v18) = 6;
    DWORD1(v18) = 0;
  }
  if ( a1 )
  {
    v10 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v10, v17);
    CurrentIrql = v17[0];
  }
  else
  {
    v9 = *(unsigned int *)(a2 + 96);
    Affinity = 0LL;
    v10 = 0LL;
    v11 = KiProcessorBlock[v9];
    Affinity.Group = *(unsigned __int8 *)(v11 + 208);
    Affinity.Mask = *(_QWORD *)(v11 + 200);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    if ( (_DWORD)v9 != KeGetCurrentPrcb()->Number )
      __fastfail(0x28u);
    CurrentIrql = KeGetCurrentIrql();
    v14 = 15LL;
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v12);
    }
    v17[0] = CurrentIrql;
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( !*(_WORD *)(a2 + 102) )
    {
      if ( !a1 )
      {
        v7 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v7 = KiDisconnectSecondaryInterruptInternal(a2);
LABEL_24:
      HalpReleaseHighLevelLock((__int64)v10, CurrentIrql);
      goto LABEL_13;
    }
    _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
    CurrentIrql = v17[0];
    *(_QWORD *)(a2 + 144) = v20;
    v8 = 1;
  }
  if ( a1 )
    goto LABEL_24;
LABEL_10:
  if ( KiIrqlFlags )
  {
    LOBYTE(v14) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_13:
  if ( v20[0] && v8 )
  {
    LOBYTE(v15) = 1;
    KiSignalWaitDisconnectLock(v20[0], v15);
    return (unsigned int)v21;
  }
  return v7;
}
