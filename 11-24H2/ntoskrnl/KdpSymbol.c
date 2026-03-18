/*
 * XREFs of KdpSymbol @ 0x140B79220
 * Callers:
 *     KdpTrap @ 0x140B752B8 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x1406AA140 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1406AA210 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140B75008 (KdExitDebugger.c)
 *     KdpCopyContext @ 0x140B751E8 (KdpCopyContext.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140B77C44 (KdpReportLoadSymbolsStateChange.c)
 *     KdEnterDebugger @ 0x140B7A96C (KdEnterDebugger.c)
 */

void __fastcall KdpSymbol(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  char v10; // al
  struct _KPRCB *CurrentPrcb; // rsi
  char v12; // r14
  int v13; // edx
  int v14; // ebx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v10 = KdEnterDebugger(a6, a7);
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = v10;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v13);
    KdpCopyContext((char *)CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a5 + 48), (_BYTE *)a5);
    KdpReportLoadSymbolsStateChange(a1, a2, a3, (__int64)CurrentPrcb->Context);
    v14 = *(_DWORD *)(a5 + 48);
    KdpCopyContext((char *)a5, CurrentPrcb->ContextFlagsInit & v14, CurrentPrcb->Context);
    *(_DWORD *)(a5 + 48) = v14;
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    LOBYTE(v15) = v12;
    KdExitDebugger(v15, v16, v17);
  }
}
