/*
 * XREFs of PspCallJobHierarchyCallbacks @ 0x14085D828
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PspEnforceLimitsJobPreCallback @ 0x14085DA00 (PspEnforceLimitsJobPreCallback.c)
 *     PspQueryProcessIdListCallback @ 0x14085DDD0 (PspQueryProcessIdListCallback.c)
 *     PspEnforceLimitsProcessCallback @ 0x14085DE20 (PspEnforceLimitsProcessCallback.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x14085EBE0 (PspQueryProcessAccountingInformationCallback.c)
 *     PspLockJobShared @ 0x14085EE04 (PspLockJobShared.c)
 */

__int64 __fastcall PspCallJobHierarchyCallbacks(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD),
        __int64 (__fastcall *a3)(PVOID Object),
        __int64 (__fastcall *a4)(_QWORD, _QWORD),
        __int64 a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // ebx
  __int64 (__fastcall *v9)(PVOID); // r13
  int v12; // edi
  int v13; // eax
  _QWORD *i; // r14
  _QWORD *v18; // rcx
  int ProcessIdListCallback; // eax

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v9 = a3;
  v12 = 0;
  if ( !a2 && !a4 )
    goto LABEL_21;
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
    {
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    }
    else
    {
      PspLockJobShared(a1, CurrentThread);
    }
  }
  if ( !a2
    || (a2 != PspEnforceLimitsJobPreCallback
      ? (v13 = guard_dispatch_icall_no_overrides(a1, a5))
      : (v13 = PspEnforceLimitsJobPreCallback(a1, a5)),
        v12 = v13,
        v13 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v18 = i - 107;
        if ( a4 == PspQueryProcessIdListCallback )
        {
          ProcessIdListCallback = PspQueryProcessIdListCallback(v18, a5);
        }
        else if ( a4 == PspEnforceLimitsProcessCallback )
        {
          ProcessIdListCallback = PspEnforceLimitsProcessCallback(v18, a5);
        }
        else
        {
          ProcessIdListCallback = a4 == PspQueryProcessAccountingInformationCallback
                                ? PspQueryProcessAccountingInformationCallback(v18, a5)
                                : guard_dispatch_icall_no_overrides(v18, a5);
        }
        v12 = ProcessIdListCallback;
        if ( ProcessIdListCallback < 0 )
          break;
      }
      v9 = a3;
    }
  }
  if ( (a6 & 1) == 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    if ( CurrentThread )
    {
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
  }
  if ( v12 < 0 )
  {
    if ( v12 != -1073741536 )
      return (unsigned int)v12;
    return v7;
  }
  else
  {
LABEL_21:
    if ( v9 )
    {
      if ( v9 == PspEnforceLimitsJobPostCallback )
        return (unsigned int)PspEnforceLimitsJobPostCallback((PVOID)a1);
      else
        return (unsigned int)guard_dispatch_icall_no_overrides(a1, a5);
    }
  }
  return (unsigned int)v12;
}
