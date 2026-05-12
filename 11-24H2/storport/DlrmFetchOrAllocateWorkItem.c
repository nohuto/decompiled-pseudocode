/*
 * XREFs of DlrmFetchOrAllocateWorkItem @ 0x140138B64
 * Callers:
 *     DlrmCheckAndScheduleScaleDown @ 0x1401388A8 (DlrmCheckAndScheduleScaleDown.c)
 *     DlrmCheckAndScheduleScaleUp @ 0x140138994 (DlrmCheckAndScheduleScaleUp.c)
 *     DlrmEffectivePowerModeCallback @ 0x140138A90 (DlrmEffectivePowerModeCallback.c)
 *     DlrmProcessReadWriteRequest @ 0x140138EE0 (DlrmProcessReadWriteRequest.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14013A828 (StorProcessDripsCallbackForDlrm.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 */

__int64 __fastcall DlrmFetchOrAllocateWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    result = (__int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 120), (PKSPIN_LOCK)(a1 + 136));
    if ( result )
    {
LABEL_5:
      *(_DWORD *)(result + 16) = 0;
      return result;
    }
    result = RaidAllocatePool(64LL, 24LL, 1296851282LL, *(_QWORD *)(v1 + 8));
    if ( result )
    {
      *(_BYTE *)(result + 20) |= 1u;
      goto LABEL_5;
    }
  }
  return 0LL;
}
