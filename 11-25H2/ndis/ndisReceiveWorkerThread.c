/*
 * XREFs of ndisReceiveWorkerThread @ 0x140060670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140026510 (WPP_RECORDER_SF_d.c)
 *     ndisTraceWorkItemExecStart @ 0x140060930 (ndisTraceWorkItemExecStart.c)
 *     ndisTraceWorkItemExecEnd @ 0x1400609B0 (ndisTraceWorkItemExecEnd.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x140060A20 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x140160790 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

int *__fastcall ndisReceiveWorkerThread(ULONG a1)
{
  KSPIN_LOCK *v2; // rdi
  KSPIN_LOCK v3; // rbx
  KIRQL v4; // si
  KSPIN_LOCK *v5; // rcx
  KSPIN_LOCK v6; // rcx
  unsigned __int64 v7; // rcx
  struct _WORK_QUEUE_ITEM *v8; // rdx
  char *v9; // rcx
  LARGE_INTEGER v10; // rdx
  int *result; // rax
  __int64 v12; // [rsp+28h] [rbp-60h]
  char v13[4]; // [rsp+28h] [rbp-60h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-58h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-50h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-40h] BYREF

  ProcNumber = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = a1;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xCu,
      0x10u,
      (struct _GUID *)&WPP_2fb632d9e69632cc5880b19a4ac60799_Traceguids,
      *(_DWORD *)v13);
  }
  Affinity.Mask = 1LL << ProcNumber.Number;
  v2 = (KSPIN_LOCK *)((char *)qword_140125540 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    ndisWaitForKernelObject(v2 + 4);
    v3 = 0LL;
    v4 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel(v2 + 2);
    v5 = (KSPIN_LOCK *)*v2;
    if ( (KSPIN_LOCK *)*v2 != v2 )
    {
      v3 = *v2;
      if ( (KSPIN_LOCK *)v5[1] != v2 || (v6 = *v5, *(_QWORD *)(v6 + 8) != v3) )
        __fastfail(3u);
      *v2 = v6;
      *(_QWORD *)(v6 + 8) = v2;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)v3 = 0LL;
      --*((_DWORD *)v2 + 6);
    }
    v7 = (unsigned __int64)a1 << 7;
    if ( (KSPIN_LOCK *)*v2 == v2 )
    {
      *((_DWORD *)qword_140125538 + a1) = 0;
      KeCancelTimer((PKTIMER)((char *)qword_140125530 + v7));
    }
    else
    {
      v9 = (char *)qword_140125530 + v7;
      v10.QuadPart = -1LL;
      if ( DueTime.QuadPart )
        v10 = DueTime;
      KeSetTimer((PKTIMER)v9, v10, (PKDPC)v9 + 1);
    }
    KeReleaseSpinLockFromDpcLevel(v2 + 2);
    if ( v3 )
      break;
LABEL_16:
    if ( v4 != 2 )
      KeLowerIrql(v4);
  }
  v8 = (struct _WORK_QUEUE_ITEM *)((char *)ndisPerCpuPoisonPills + 32 * a1);
  if ( (struct _WORK_QUEUE_ITEM *)v3 != v8 )
  {
    if ( (_BYTE)word_140127114 )
      ndisTraceWorkItemExecStart(0LL);
    (*(void (__fastcall **)(_QWORD))(v3 + 16))(*(_QWORD *)(v3 + 24));
    if ( (_BYTE)word_140127114 )
      ndisTraceWorkItemExecEnd();
    goto LABEL_16;
  }
  if ( (KSPIN_LOCK *)*v2 != v2 )
  {
    ndisInsertInWorkQueue((struct _NDIS_WORK_QUEUE *)v2, v8, 1u);
    goto LABEL_16;
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = a1;
    return (int *)WPP_RECORDER_SF_d(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0xCu,
                    0x11u,
                    (struct _GUID *)&WPP_2fb632d9e69632cc5880b19a4ac60799_Traceguids,
                    v12);
  }
  return result;
}
