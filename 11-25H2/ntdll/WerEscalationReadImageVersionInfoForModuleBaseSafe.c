/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E014C
 * Callers:
 *     WerEscalationLazyInit @ 0x1800DF9C0 (WerEscalationLazyInit.c)
 *     LdrpRecordUnloadEvent @ 0x1800DFF40 (LdrpRecordUnloadEvent.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E01D0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 */

NTSTATUS __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(BaseOfImage);
    return 0;
  }
  return result;
}
