/*
 * XREFs of EtwpApcPoolThunk @ 0x14030A360
 * Callers:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 *     EtwpFinalizePendingStackwalkApc @ 0x14030A338 (EtwpFinalizePendingStackwalkApc.c)
 *     PsIsThreadTerminating @ 0x14030A670 (PsIsThreadTerminating.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x14030BEC0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall EtwpApcPoolThunk(__int64 a1, _QWORD *a2, char *a3, _DWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rcx
  unsigned int **v10; // rbx
  __int64 (__fastcall *v11)(__int16 **, __int64, unsigned __int8 *, _DWORD *, _DWORD *); // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *v13; // r14
  __int64 v14; // rsi
  char v15; // di
  int v16; // edx
  signed __int32 v17[8]; // [rsp+0h] [rbp-2A8h] BYREF
  __int64 v18; // [rsp+20h] [rbp-288h]
  __int64 v19; // [rsp+90h] [rbp-218h] BYREF
  _DWORD *v20; // [rsp+98h] [rbp-210h]
  _BYTE v21[40]; // [rsp+A0h] [rbp-208h] BYREF
  GUID v22; // [rsp+C8h] [rbp-1E0h]
  __int64 v23; // [rsp+F0h] [rbp-1B8h]
  int v24; // [rsp+120h] [rbp-188h]
  char v25; // [rsp+124h] [rbp-184h]
  __int16 v26; // [rsp+126h] [rbp-182h]
  int v27; // [rsp+128h] [rbp-180h]
  __m128i si128; // [rsp+130h] [rbp-178h]
  __int64 v29; // [rsp+228h] [rbp-80h]
  __int64 retaddr; // [rsp+2A8h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v7 = (__int64)a5;
  v20 = a5;
  v10 = *(unsigned int ***)(a1 + 128);
  v11 = *(__int64 (__fastcall **)(__int16 **, __int64, unsigned __int8 *, _DWORD *, _DWORD *))(a1 + 136);
  *a2 = 0LL;
  _InterlockedOr(v17, 0);
  if ( !(*v10)[80] )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 2, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v10 + 2);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)v10 + 2);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v10 + 1, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)v10 + 1, retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v7 = (__int64)v20;
  }
  if ( v11 == EtwpStackWalkApc )
  {
    memset_0(v21, 0, 0x1A8uLL);
    v13 = KeGetCurrentThread();
    v14 = (__int64)*v10;
    v15 = *a3;
    HIDWORD(v19) = *a4;
    LODWORD(v19) = *v20;
    if ( !PsIsThreadTerminating(v13) )
    {
      if ( v15 )
      {
        v23 = v19;
        v22 = EventTracingProvGuid;
        LOBYTE(v16) = 1;
        v29 = *(_QWORD *)(v14 + 1360);
        v26 = *(_WORD *)v14;
        v24 = 1;
        v27 = 68;
        v25 = -1;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        EtwpEventWriteFull(
          (unsigned int)v21,
          v16,
          0,
          0,
          (__int64)ETW_EVENT_USER_STACK_TRACE,
          0,
          0,
          0LL,
          0LL,
          0,
          0LL,
          0LL,
          0LL,
          0LL,
          0,
          0LL,
          0LL);
      }
      else
      {
        EtwpTraceStackWalk(v14, 4096LL, (__int64)v13, &v19);
      }
    }
    EtwpFinalizePendingStackwalkApc(v14, (__int64)CurrentThread, v15);
  }
  else
  {
    v18 = v7;
    guard_dispatch_icall_no_overrides(v10, CurrentThread);
  }
  _InterlockedDecrement((volatile signed __int32 *)v10 + 44);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v10 + 2, (PSLIST_ENTRY)(a1 + 112));
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)*v10 + 170) + 448LL) + 8LL * **v10),
    1u);
}
