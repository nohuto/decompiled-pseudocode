/*
 * XREFs of ViCtxCheckAndReleaseIsrState @ 0x140BA3F50
 * Callers:
 *     ViCtxIsr @ 0x140BA4190 (ViCtxIsr.c)
 *     ViCtxIsrMessageBased @ 0x140BA41F0 (ViCtxIsrMessageBased.c)
 * Callees:
 *     RtlXSave @ 0x1403D3DF0 (RtlXSave.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     VfErrorStoreTriageInformation @ 0x140B955E0 (VfErrorStoreTriageInformation.c)
 *     ViCtxEqualExtendedState @ 0x140BA407C (ViCtxEqualExtendedState.c)
 */

__int64 __fastcall ViCtxCheckAndReleaseIsrState(__int64 a1, const void *a2)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v5; // si
  __int64 result; // rax
  __int64 v7; // r8
  int v8; // eax
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // rdx
  ULONG_PTR v11; // rax
  int v12; // ecx

  CurrentIrql = KeGetCurrentIrql();
  v5 = *(_BYTE *)(a1 + 8);
  *(_BYTE *)(a1 + 9) = CurrentIrql;
  if ( v5 != CurrentIrql
    || (result = *(unsigned int *)(a1 + 4), (result & 2) != 0)
    && (RtlXSave(*(_DWORD **)(a1 + 64), ViCtxXStateEnabledMask),
        v5 = *(_BYTE *)(a1 + 8),
        LOBYTE(v7) = v5 == 0,
        result = ViCtxEqualExtendedState(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 64), v7),
        !(_BYTE)result) )
  {
    v8 = *(unsigned __int8 *)(a1 + 9);
    if ( v5 == (_BYTE)v8 )
    {
      VfUtilDbgPrint(
        "Interrupt Service Routine %p has changed extended thread context.\n"
        "Context saved before executing ISR: 0x%p. Context saved after executing ISR: 0x%p.\n",
        a2,
        *(const void **)(a1 + 32),
        *(const void **)(a1 + 64));
      v9 = *(_QWORD *)(a1 + 32);
      v10 = 272LL;
      v11 = *(_QWORD *)(a1 + 64);
    }
    else
    {
      VfUtilDbgPrint(
        "Interrupt Service Routine %p has changed IRQL.\nIRQL before executing ISR: %d. IRQL after executing ISR: %d.\n",
        a2,
        v5,
        v8);
      v9 = *(unsigned __int8 *)(a1 + 8);
      v10 = 273LL;
      v11 = *(unsigned __int8 *)(a1 + 9);
    }
    result = VfErrorStoreTriageInformation(196LL, v10, (ULONG_PTR)a2, v9, v11);
    if ( (_DWORD)result )
    {
      CarReportRuleViolationFromNt(
        v12,
        qword_140FFEFB8,
        qword_140FFEFC0,
        qword_140FFEFC8,
        qword_140FFEFD0,
        7u,
        (__int64)a2);
      result = (unsigned int)_InterlockedExchange(&VfErrorBugcheckDataReady, 0);
    }
  }
  *(_DWORD *)(a1 + 4) &= ~2u;
  _InterlockedExchange((volatile __int32 *)a1, 0);
  return result;
}
