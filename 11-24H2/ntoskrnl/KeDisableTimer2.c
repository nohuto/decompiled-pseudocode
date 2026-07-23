/*
 * XREFs of KeDisableTimer2 @ 0x1403AED68
 * Callers:
 *     ExDeleteTimer @ 0x1403AE2F0 (ExDeleteTimer.c)
 *     MiStoreEvictThread @ 0x140476E20 (MiStoreEvictThread.c)
 *     PopPowerButtonWorkCallback @ 0x1405D58C0 (PopPowerButtonWorkCallback.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140608594 (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     PopThermalZoneRemove @ 0x140752D30 (PopThermalZoneRemove.c)
 *     ExpDeleteTimer2 @ 0x140A3C900 (ExpDeleteTimer2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     EtwTraceTimedEvent @ 0x14039F830 (EtwTraceTimedEvent.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     KiUpdateTimer2Flags @ 0x1403AF1F0 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1403B04C0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1403B10E4 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1403B115C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTraceCancelTimer2 @ 0x14049F2D0 (KiTraceCancelTimer2.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r14
  char v12; // r13
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r14
  unsigned __int8 CurrentIrql; // r15
  __int64 v17; // rdx
  char v18; // r12
  unsigned int v19; // esi
  __int64 v20; // rdx
  char updated; // r14
  char v22; // r15
  unsigned __int64 v24; // rdi
  char v25; // al
  char v26; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+34h] [rbp-CCh]
  unsigned int v30; // [rsp+38h] [rbp-C8h]
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  _OWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[264]; // [rsp+88h] [rbp-78h] BYREF

  memset_0(&v36, 0, 0x108uLL);
  v7 = 0LL;
  v30 = 32;
  v32 = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  v9 = 0LL;
  v10 = 1LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  v26 = 0;
  v11 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 96);
    v12 = 1;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0LL;
  }
  else
  {
    v12 = 0;
  }
  v13 = 0x7E35C6C7F3DD7277LL;
  if ( a4 )
  {
    v14 = *a4;
    v15 = a4[1];
    if ( v12 && v14 )
    {
      LOBYTE(v34) = 8;
      v32 = v14;
      v33 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v15), KiWaitNever));
    }
    v6 = KiWaitNever;
    v10 = (unsigned int)KiWaitNever;
    v9 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v14), KiWaitNever);
    v11 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v15), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = 2;
    LOBYTE(v10) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v10, v6);
  }
  v29 = KiAcquireTimer2LockUnlessDisabled(a1, v6, v7, v13);
  if ( !v29 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v9;
      *(_QWORD *)(a1 + 120) = v11;
    }
    v18 = a2;
    if ( !a2 )
      goto LABEL_14;
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock((volatile signed __int64 *)&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_14:
        v19 = 6;
LABEL_15:
        if ( v12 )
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v35, 0x40020000u);
        updated = KiUpdateTimer2Flags(a1, v30, v19);
        if ( KiIrqlFlags )
        {
          LOBYTE(v20) = CurrentIrql;
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
        }
        __writecr8(CurrentIrql);
        v22 = a3;
        if ( a3 && !updated )
        {
          v36 = 2097153LL;
          memset_0(v37, 0, 0x100uLL);
          KeAddProcessorAffinityEx((unsigned __int16 *)&v36, KiClockTimerOwner);
          KeGenericProcessorCallback(&v36, (char (__fastcall *)(__int64, __int64))xHalTimerWatchdogStop, 0LL, 2);
        }
        goto LABEL_20;
      }
      v30 = 36;
    }
    v26 = 1;
    v19 = 4;
    goto LABEL_15;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v17) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
  }
  __writecr8(CurrentIrql);
  updated = 0;
  v22 = a3;
  v18 = a2;
LABEL_20:
  if ( v12 && !v29 )
  {
    v24 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ v8, KiWaitNever));
    if ( v26 )
      KiTraceCancelTimer2(a1, v24);
    v25 = v34;
    v31 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v24 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    if ( v18 )
    {
      v25 = v34 | 1;
      LOBYTE(v34) = v34 | 1;
    }
    if ( v22 )
    {
      v25 |= 2u;
      LOBYTE(v34) = v25;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)&v31, 32, 0x500E02u, (__int64)v35);
    }
    else
    {
      LOBYTE(v34) = v25 | 4;
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)&v31, 32, 0x602u, (__int64)v35);
    }
  }
  return v26;
}
