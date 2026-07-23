/*
 * XREFs of EtwpApcPoolThunk @ 0x1403DD840
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140289C10 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     PsIsThreadTerminating @ 0x1403DDB60 (PsIsThreadTerminating.c)
 *     EtwpFinalizePendingStackwalkApc @ 0x1403DDB70 (EtwpFinalizePendingStackwalkApc.c)
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall EtwpApcPoolThunk(__int64 a1, _QWORD *a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v7; // rcx
  unsigned int **v10; // rbx
  __int64 (__fastcall *v11)(__int16 **, __int64, unsigned __int8 *, _DWORD *, _DWORD *); // rbp
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *v13; // rbp
  __int16 *v14; // rsi
  unsigned __int8 v15; // di
  signed __int32 v16[8]; // [rsp+0h] [rbp-3A8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-388h]
  __int64 v18; // [rsp+90h] [rbp-318h] BYREF
  _DWORD *v19; // [rsp+98h] [rbp-310h]
  _BYTE v20[40]; // [rsp+A0h] [rbp-308h] BYREF
  GUID v21; // [rsp+C8h] [rbp-2E0h]
  __int64 v22; // [rsp+F0h] [rbp-2B8h]
  int v23; // [rsp+120h] [rbp-288h]
  char v24; // [rsp+124h] [rbp-284h]
  __int16 v25; // [rsp+126h] [rbp-282h]
  int v26; // [rsp+128h] [rbp-280h]
  __m128i si128; // [rsp+130h] [rbp-278h]
  __int64 v28; // [rsp+328h] [rbp-80h]
  __int64 retaddr; // [rsp+3A8h] [rbp+0h]

  CurrentThread = KeGetCurrentThread();
  v7 = (__int64)a5;
  v19 = a5;
  v10 = *(unsigned int ***)(a1 + 128);
  v11 = *(__int64 (__fastcall **)(__int16 **, __int64, unsigned __int8 *, _DWORD *, _DWORD *))(a1 + 136);
  *a2 = 0LL;
  _InterlockedOr(v16, 0);
  if ( !(*v10)[80] )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10 + 2, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)v10 + 2, (__int64)a2, (__int64)a3, (__int64)a4);
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
    v7 = (__int64)v19;
  }
  if ( v11 == EtwpStackWalkApc )
  {
    memset_0(v20, 0, 0x2A8uLL);
    v13 = KeGetCurrentThread();
    v14 = (__int16 *)*v10;
    v15 = *a3;
    HIDWORD(v18) = *a4;
    LODWORD(v18) = *v19;
    if ( !PsIsThreadTerminating(v13) )
    {
      if ( v15 )
      {
        v22 = v18;
        v21 = EventTracingProvGuid;
        v28 = *((_QWORD *)v14 + 170);
        v25 = *v14;
        v23 = 1;
        v26 = 68;
        v24 = -1;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        EtwpEventWriteFull(
          (__int64)v20,
          1u,
          0,
          0,
          (unsigned __int16 *)ETW_EVENT_USER_STACK_TRACE,
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
        EtwpTraceStackWalk(v14, 4096LL, v13, &v18);
      }
    }
    EtwpFinalizePendingStackwalkApc(v14, CurrentThread, v15);
  }
  else
  {
    v17 = v7;
    guard_dispatch_icall_no_overrides(v10, CurrentThread);
  }
  _InterlockedDecrement((volatile signed __int32 *)v10 + 44);
  RtlpInterlockedPushEntrySList((PSLIST_HEADER)v10 + 2, (PSLIST_ENTRY)(a1 + 112));
  ExReleaseRundownProtectionCacheAwareEx(
    *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)*v10 + 170) + 704LL) + 8LL * **v10),
    1u);
}
