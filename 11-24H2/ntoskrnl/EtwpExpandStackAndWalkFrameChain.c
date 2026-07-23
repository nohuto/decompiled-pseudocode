/*
 * XREFs of EtwpExpandStackAndWalkFrameChain @ 0x1403DD360
 * Callers:
 *     EtwpGetStackExtendedHeaderItem @ 0x1403DD150 (EtwpGetStackExtendedHeaderItem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x140232D30 (KeExpandKernelStackAndCalloutInternal.c)
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline @ 0x1403DE574 (Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall EtwpExpandStackAndWalkFrameChain(
        PVOID *Callers,
        ULONG Count,
        unsigned __int64 a3,
        ULONG a4,
        ULONG *a5)
{
  ULONG_PTR v5; // r15
  int v10; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  int v12; // edi
  ULONG v13; // eax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-48h] BYREF
  ULONG v16; // [rsp+48h] [rbp-30h]
  ULONG v17; // [rsp+4Ch] [rbp-2Ch]
  __int64 v18; // [rsp+50h] [rbp-28h]

  v5 = *(_QWORD *)(a3 + 24);
  v10 = 0;
  if ( !KeAreInterruptsEnabled()
    || KeGetCurrentIrql() > 2u
    || !(unsigned int)Feature_ETWStackExpandedStackwalks__private_IsEnabledDeviceUsageNoInline() )
  {
    v13 = RtlWalkFrameChain(Callers, Count, a4);
    goto LABEL_9;
  }
  v18 = 0LL;
  BugCheckParameter3[0] = (ULONG_PTR)Callers;
  BugCheckParameter3[1] = v5;
  v16 = Count;
  v17 = a4;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter3[2] = (ULONG_PTR)CurrentThread;
  CurrentThread[1].Spare18 = a3;
  v12 = CurrentThread->SameThreadTransientFlags & 1;
  v10 = KeExpandKernelStackAndCalloutInternal(
          (EXPAND_STACK_CALLOUT *)EtwpExpandedStackWalk,
          (ULONG_PTR)BugCheckParameter3,
          24576,
          1073741832,
          v5);
  if ( (*(_BYTE *)(v5 + 7) & 2) != 0 || v12 != (CurrentThread->SameThreadTransientFlags & 1) )
    KeBugCheckEx(0x11Du, 0xAuLL, v5, 0LL, 0LL);
  if ( v10 >= 0 )
  {
    v13 = v18;
LABEL_9:
    *a5 = v13;
  }
  return (unsigned int)v10;
}
