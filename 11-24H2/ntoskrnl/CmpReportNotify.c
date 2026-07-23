/*
 * XREFs of CmpReportNotify @ 0x14086D768
 * Callers:
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     CmpReportNotifyForKcbStack @ 0x14086CA6C (CmpReportNotifyForKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x140872050 (CmpStartKcbStackForTopLayerKcb.c)
 */

void __fastcall CmpReportNotify(__int64 a1, __int64 a2, int a3, __int64 a4)
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
  CmpStartKcbStackForTopLayerKcb(&v6, a1);
  CmpReportNotifyForKcbStack((__int64)&v6, 0, a3, a4);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
}
