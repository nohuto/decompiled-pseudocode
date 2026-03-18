/*
 * XREFs of KiSaveProcessorState @ 0x1405C5E20
 * Callers:
 *     KiFreezeTargetExecution @ 0x1405BDC20 (KiFreezeTargetExecution.c)
 *     KxNmiInterrupt @ 0x1406AB940 (KxNmiInterrupt.c)
 * Callees:
 *     KeContextFromKframes @ 0x14025EE60 (KeContextFromKframes.c)
 *     RtlXSave @ 0x14043BCB0 (RtlXSave.c)
 *     KiSaveProcessorControlState @ 0x14069EF40 (KiSaveProcessorControlState.c)
 */

__int64 __fastcall KiSaveProcessorState(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _CONTEXT *Context; // rbx
  unsigned int ContextFlagsInit; // r8d
  int v7; // r9d
  int v8; // r8d
  int v9; // eax
  unsigned int v10; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  Context = CurrentPrcb->Context;
  ContextFlagsInit = CurrentPrcb->ContextFlagsInit;
  Context->ContextFlags = ContextFlagsInit;
  if ( (*(_BYTE *)(a1 + 368) & 1) == 0 )
  {
    v7 = ContextFlagsInit & 0x100008;
    v8 = ContextFlagsInit & 0x100040;
    if ( v8 == 1048640 || v7 == 1048584 )
    {
      v9 = MEMORY[0xFFFFF780000003E0];
      if ( v7 == 1048584 )
        _fxsave(&Context->256);
      if ( v8 == 1048640 )
      {
        v10 = v9 & 0xFFFFFFFC;
        if ( v10 )
          RtlXSave(($80DBAA0B892FD5CD68CC438743E43770 *)((char *)&Context->1 + SLODWORD(Context[1].P3Home) + 464), v10);
      }
    }
  }
  KeContextFromKframes(a1, a2, (__int64)Context);
  return KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
}
