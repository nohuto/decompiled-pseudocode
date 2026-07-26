/*
 * XREFs of ndisReceiveWorkerThread @ 0x1400470F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ndisTraceWorkItemExecStart @ 0x1400473B0 (ndisTraceWorkItemExecStart.c)
 *     ndisTraceWorkItemExecEnd @ 0x140047430 (ndisTraceWorkItemExecEnd.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1400474A0 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140153F20 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

_UNKNOWN **__fastcall ndisReceiveWorkerThread(ULONG a1)
{
  int v2; // edx
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK v4; // rbx
  KIRQL v5; // si
  KSPIN_LOCK *v6; // rcx
  KSPIN_LOCK v7; // rcx
  unsigned __int64 v8; // rcx
  struct _WORK_QUEUE_ITEM *v9; // rdx
  char *v10; // rcx
  LARGE_INTEGER v11; // rdx
  _UNKNOWN **result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-58h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  ProcNumber = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v2,
      12,
      16,
      (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids,
      a1);
  }
  Affinity.Mask = 1LL << ProcNumber.Number;
  v3 = (KSPIN_LOCK *)((char *)qword_14011B500 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    ndisWaitForKernelObject(v3 + 4);
    v4 = 0LL;
    v5 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel(v3 + 2);
    v6 = (KSPIN_LOCK *)*v3;
    if ( (KSPIN_LOCK *)*v3 != v3 )
    {
      v4 = *v3;
      if ( (KSPIN_LOCK *)v6[1] != v3 || (v7 = *v6, *(_QWORD *)(v7 + 8) != v4) )
        __fastfail(3u);
      *v3 = v7;
      *(_QWORD *)(v7 + 8) = v3;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      --*((_DWORD *)v3 + 6);
    }
    v8 = (unsigned __int64)a1 << 7;
    if ( (KSPIN_LOCK *)*v3 == v3 )
    {
      *((_DWORD *)qword_14011B4F8 + a1) = 0;
      KeCancelTimer((PKTIMER)((char *)qword_14011B4F0 + v8));
    }
    else
    {
      v10 = (char *)qword_14011B4F0 + v8;
      v11.QuadPart = -1LL;
      if ( DueTime.QuadPart )
        v11 = DueTime;
      KeSetTimer((PKTIMER)v10, v11, (PKDPC)v10 + 1);
    }
    KeReleaseSpinLockFromDpcLevel(v3 + 2);
    if ( v4 )
      break;
LABEL_16:
    if ( v5 != 2 )
      KeLowerIrql(v5);
  }
  v9 = (struct _WORK_QUEUE_ITEM *)((char *)ndisPerCpuPoisonPills + 32 * a1);
  if ( (struct _WORK_QUEUE_ITEM *)v4 != v9 )
  {
    if ( (_BYTE)word_14011D064 )
      ndisTraceWorkItemExecStart(0LL);
    (*(void (__fastcall **)(_QWORD))(v4 + 16))(*(_QWORD *)(v4 + 24));
    if ( (_BYTE)word_14011D064 )
      ndisTraceWorkItemExecEnd();
    goto LABEL_16;
  }
  if ( (KSPIN_LOCK *)*v3 != v3 )
  {
    ndisInsertInWorkQueue((struct _NDIS_WORK_QUEUE *)v3, v9, 1u);
    goto LABEL_16;
  }
  if ( v5 != 2 )
    KeLowerIrql(v5);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_d(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          (int)v9,
                          12,
                          17,
                          (struct _GUID *)&WPP_1e166df1927f351decd9b39e99e51e5f_Traceguids,
                          a1);
  }
  return result;
}
