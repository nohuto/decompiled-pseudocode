/*
 * XREFs of CmpReportNotify @ 0x14086DEF4
 * Callers:
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpReportNotifyForKcbStack @ 0x14086F944 (CmpReportNotifyForKcbStack.c)
 */

void __fastcall CmpReportNotify(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 72);
    a1 = *(_QWORD *)(a1 + 72);
  }
  CmpStartKcbStackForTopLayerKcb((__int64)&v6, a1);
  CmpReportNotifyForKcbStack(&v6, 0LL, a3, a4);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
}
