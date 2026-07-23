/*
 * XREFs of KdpReport @ 0x1404CE548
 * Callers:
 *     KdpTrap @ 0x140B772B8 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x1406AB0E0 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1406AB1B0 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140B77008 (KdExitDebugger.c)
 *     KdpCopyContext @ 0x140B771E8 (KdpCopyContext.c)
 *     KdpReportExceptionStateChange @ 0x140B7C1E0 (KdpReportExceptionStateChange.c)
 *     KdEnterDebugger @ 0x140B7C96C (KdEnterDebugger.c)
 */

char __fastcall KdpReport(__int64 a1, __int64 a2, int *a3, __int64 a4, int a5, char a6)
{
  int v6; // r10d
  char v9; // di
  char v10; // al
  struct _KPRCB *CurrentPrcb; // rbx
  char v12; // r15
  __int64 v13; // r8
  char v14; // al
  int v15; // edi
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  char result; // al

  v6 = *a3;
  if ( *a3 == -2147483645
    || v6 == -1073740768
    || v6 == -2147483644
    || (unsigned int)(v6 - 1073741854) <= 1
    || (NtGlobalFlag & 1) != 0 )
  {
    v9 = a6;
    if ( a6 || (unsigned int)v6 > 0x4000001D && v6 != -1073741769 && v6 < 1073741856 )
      goto LABEL_7;
    return 0;
  }
  v9 = a6;
  if ( !a6 )
    return 0;
LABEL_7:
  v10 = KdEnterDebugger(a1, a2);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = v10;
  KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a4 + 48), a4);
  KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v13) = v9;
  v14 = KdpReportExceptionStateChange(a3, CurrentPrcb->Context, v13);
  v15 = *(_DWORD *)(a4 + 48);
  v16 = v14;
  KdpCopyContext(a4, CurrentPrcb->ContextFlagsInit & v15, CurrentPrcb->Context);
  *(_DWORD *)(a4 + 48) = v15;
  if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 && (v15 & 0x100080) == 0x100080 )
  {
    v17 = *(_QWORD *)(a4 + 248);
    v18 = a4 + *(int *)(a4 + 1256);
    if ( *(_QWORD *)(v18 + 1240) != v17 )
    {
      *(_WORD *)(v18 + 1250) |= 1u;
      *(_QWORD *)(v18 + 1240) = v17;
    }
  }
  KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v19) = v12;
  KdExitDebugger(v19);
  result = v16;
  KdpControlCPressed = 0;
  return result;
}
