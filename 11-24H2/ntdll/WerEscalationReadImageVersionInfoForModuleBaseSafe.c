/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800E349C
 * Callers:
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 *     LdrpRecordUnloadEvent @ 0x1800E3290 (LdrpRecordUnloadEvent.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x1800E3520 (WerEscalationReadImageVersionInfoForModuleBase.c)
 */

__int64 __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  v6[0] = 0LL;
  if ( a2 || (result = RtlImageNtHeaderEx(3, a1, 0LL, v6), (int)result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(a1, a3);
    return 0LL;
  }
  return result;
}
