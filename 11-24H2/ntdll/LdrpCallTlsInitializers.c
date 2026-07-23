/*
 * XREFs of LdrpCallTlsInitializers @ 0x18003F930
 * Callers:
 *     LdrpInitializeThread @ 0x18003F210 (LdrpInitializeThread.c)
 *     LdrpInitializeNode @ 0x18008C3E0 (LdrpInitializeNode.c)
 *     LdrShutdownThread @ 0x1800AB0D0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x1800ABBC0 (LdrShutdownProcess.c)
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 *     LdrpProcessDetachNode @ 0x1800DE6E4 (LdrpProcessDetachNode.c)
 * Callees:
 *     LdrpCallInitRoutine @ 0x18003F690 (LdrpCallInitRoutine.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlRaiseStatus @ 0x1800417E0 (RtlRaiseStatus.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 *     NtSetInformationThread @ 0x1801601F0 (NtSetInformationThread.c)
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 */

int __fastcall LdrpCallTlsInitializers(unsigned int a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *SchedulerSharedDataSlot; // r8
  unsigned int i; // r9d
  char v7; // cl
  _UNKNOWN **v8; // rbx
  _UNKNOWN **j; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  _BYTE *v12; // rsi
  struct _TEB *v13; // rax
  _QWORD *v14; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rsi
  unsigned int n; // ecx
  signed __int64 v18; // r8
  bool v19; // zf
  signed __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 k; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  signed __int64 v25; // rdx
  signed __int64 v26; // rax
  _RTL_SRWLOCK *v27; // r14
  unsigned __int64 v28; // r9
  _QWORD *v29; // r8
  __int64 m; // rcx
  __int64 v31; // rax
  signed __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rsi
  signed __int64 v35; // rax
  _QWORD ThreadInformation[5]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v38; // [rsp+88h] [rbp-40h]
  __int128 v39; // [rsp+90h] [rbp-38h]

  v4 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v4 = &SchedulerSharedDataSlot[i];
        break;
      }
    }
  }
  if ( v4 )
    *v4 = &LdrpTlsLock;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, 17LL, 0LL) )
    RtlpAcquireSRWLockSharedContended(&LdrpTlsLock);
  v7 = 0;
  v8 = 0LL;
  for ( j = (_UNKNOWN **)LdrpTlsList; j != &LdrpTlsList; j = (_UNKNOWN **)*j )
  {
    v8 = j;
    if ( j[7] == (_UNKNOWN *)a2 )
    {
      v7 = 1;
      break;
    }
  }
  if ( !v7 )
    v8 = 0LL;
  v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, 0LL, 17LL);
  v11 = v10;
  if ( v10 != 17 )
  {
    if ( (v10 & 1) == 0 )
      RtlRaiseStatus(-1073741212);
    while ( (v11 & 2) == 0 )
    {
      v18 = 0LL;
      if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0x10 )
        v18 = v11 - 16;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, v18, v11);
      v19 = v11 == v20;
      v11 = v20;
      if ( v19 )
        goto LABEL_18;
    }
    if ( (v11 & 8) != 0 )
    {
      v21 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0uLL);
      for ( k = *(_QWORD *)((v11 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !k; k = v21[1] )
        v21 = (_QWORD *)*v21;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(k + 32), 0xFFFFFFFF) > 1 )
        goto LABEL_18;
      v23 = -9LL;
    }
    else
    {
      v23 = -1LL;
    }
    while ( 1 )
    {
      if ( (v11 & 4) != 0 || (v24 = v23 + 4, (v11 & 2) == 0) )
        v24 = v23;
      v25 = v24 + v11;
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, v24 + v11, v11);
      if ( v11 == v26 )
        break;
      v11 = v26;
    }
    if ( (v11 & 6) == 2 )
    {
      v27 = &LdrpTlsLock;
      while ( 1 )
      {
        while ( (v25 & 1) != 0 )
        {
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, v25 - 4, v25);
          v19 = v25 == v35;
          v25 = v35;
          if ( v19 )
            goto LABEL_18;
        }
        v28 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
        v29 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0uLL);
        for ( m = *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !m; m = v29[1] )
        {
          v33 = v29;
          v29 = (_QWORD *)*v29;
          v29[2] = v33;
        }
        if ( v29 != (_QWORD *)v28 )
          *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = m;
        if ( (*(_DWORD *)(m + 36) & 1) != 0 )
        {
          v31 = *(_QWORD *)(m + 16);
          if ( v31 )
            break;
        }
        v27 = 0LL;
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)&LdrpTlsLock, 0LL, v25);
        v19 = v25 == v32;
        v25 = v32;
        if ( v19 )
          goto LABEL_65;
      }
      *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v31;
      *(_QWORD *)(m + 16) = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)&LdrpTlsLock, 0xFFFFFFFFFFFFFFFBuLL);
      do
      {
LABEL_65:
        ThreadInformation[2] = 0LL;
        ThreadInformation[3] = 0LL;
        v39 = 0LL;
        v34 = *(_QWORD *)(m + 16);
        ThreadInformation[4] = v34;
        v38 = *(_QWORD *)(m + 24);
        _interlockedbittestandset((volatile signed __int32 *)(m + 36), 2u);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)(m + 36), 1u) )
          ZwAlertThreadByThreadIdEx(v38, v27, v29, v28);
        m = v34;
      }
      while ( v34 );
    }
  }
LABEL_18:
  v12 = 0LL;
  v13 = NtCurrentTeb();
  v14 = v13->SchedulerSharedDataSlot;
  if ( v14 )
  {
    for ( n = 0; n < 8; ++n )
    {
      v13 = (struct _TEB *)(v14[n] & 0x7FFFFFFFFFFFFFFCLL);
      if ( v13 == (struct _TEB *)((unsigned __int64)&LdrpTlsLock & 0x7FFFFFFFFFFFFFFCLL) )
      {
        v12 = &v14[n];
        break;
      }
    }
  }
  if ( v12 )
  {
    *v12 |= 2u;
    if ( (char)v12[7] < 0 )
    {
      ThreadInformation[1] = 0LL;
      ThreadInformation[0] = (v12 - (char *)NtCurrentTeb()->SchedulerSharedDataSlot) >> 3;
      LODWORD(v13) = NtSetInformationThread(
                       (HANDLE)0xFFFFFFFFFFFFFFFELL,
                       ThreadUpdateLockOwnership,
                       ThreadInformation,
                       0x10u);
    }
    *(_QWORD *)v12 = 0LL;
  }
  if ( v8 )
  {
    v15 = (__int64 *)v8[5];
    if ( v15 )
    {
      while ( 1 )
      {
        v16 = *v15;
        if ( !*v15 )
          break;
        ++v15;
        LdrpLogInternal(
          "minkernel\\ldr\\ldrtls.c",
          1187LL,
          "LdrpCallTlsInitializers",
          2LL,
          "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
          v16,
          a2 + 72,
          *(_QWORD *)(a2 + 48));
        LODWORD(v13) = LdrpCallInitRoutine((__int64)ImageTlsCallbackCaller, *(_QWORD *)(a2 + 48), a1, v16);
      }
    }
  }
  return (int)v13;
}
