/*
 * XREFs of KdpCommandString @ 0x140B78E2C
 * Callers:
 *     KdpTrap @ 0x140B752B8 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x1406AA140 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1406AA210 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdpCopyContext @ 0x140B751E8 (KdpCopyContext.c)
 *     KdpReportCommandStringStateChange @ 0x140B77AAC (KdpReportCommandStringStateChange.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 */

void __fastcall KdpCommandString(__int64 a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // al
  struct _KPRCB *CurrentPrcb; // rdi
  char v11; // bp
  int v12; // edx
  int v13; // ebx
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // r8

  if ( !a3 && !(_BYTE)KdDebuggerNotPresent )
  {
    v9 = KdEnterDebugger(a5, a6);
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v9;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v12);
    KdpCopyContext((char *)CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a4 + 48), (_BYTE *)a4);
    KdpReportCommandStringStateChange(a1, a2, (__int64)CurrentPrcb->Context);
    v13 = *(_DWORD *)(a4 + 48);
    KdpCopyContext((char *)a4, CurrentPrcb->ContextFlagsInit & v13, CurrentPrcb->Context);
    *(_DWORD *)(a4 + 48) = v13;
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    LOBYTE(v14) = v11;
    KdExitDebugger(v14, v15, v16);
  }
}
