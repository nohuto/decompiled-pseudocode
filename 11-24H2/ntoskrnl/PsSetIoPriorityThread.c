/*
 * XREFs of PsSetIoPriorityThread @ 0x140330D1C
 * Callers:
 *     IoSetIoPriorityHintIntoThread @ 0x14032F240 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x140330C20 (IoApplyPriorityInfoThread.c)
 *     CmpSetIoPriorityThread @ 0x1404A8898 (CmpSetIoPriorityThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x1404D4698 (CcApplyLowIoPriorityToThread.c)
 *     NtSetInformationThread @ 0x1408E8B60 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140330DCC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     EtwTracePriority @ 0x140330F04 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // ebx

  v4 = *(_DWORD *)(a1 + 1440);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1440), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = 0;
  v7 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v7, a2, 0LL);
  if ( a2 != v7 )
  {
    if ( a2 < 2 )
    {
      if ( v7 >= 2 )
        goto LABEL_10;
    }
    else if ( v7 < 2 )
    {
      v6 = 1;
LABEL_10:
      KeAbProcessBaseIoPriorityChangeInternal(a1, v6);
    }
  }
  return v7;
}
