/*
 * XREFs of DlrmHandleScaleAction @ 0x140138E3C
 * Callers:
 *     StorAdapterDlrmSystemThread @ 0x140139A40 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     DlrmRecordPciGenerationTime @ 0x140139030 (DlrmRecordPciGenerationTime.c)
 *     DlrmUpdateLinkInformation @ 0x1401390C0 (DlrmUpdateLinkInformation.c)
 *     StorDlrmSetLinkToDesiredSpeed @ 0x140139C04 (StorDlrmSetLinkToDesiredSpeed.c)
 */

void __fastcall DlrmHandleScaleAction(__int64 a1, int a2)
{
  __int64 v2; // rbp
  int v5; // edi
  int v6; // r9d

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      if ( (*(_DWORD *)(a1 + 12) & 1) != 0 && (int)DlrmUpdateLinkInformation() >= 0 )
      {
        v5 = *(_DWORD *)(a1 + 8);
        if ( a2 == 1 )
        {
          v6 = *(_DWORD *)(a1 + 60);
          if ( v5 == v6 )
            return;
          goto LABEL_10;
        }
        if ( a2 == 2 && v5 > 1 )
        {
          v6 = v5 - 1;
LABEL_10:
          if ( (int)StorDlrmSetLinkToDesiredSpeed(a1, *(_QWORD *)(v2 + 6216), a2, v6, *(_WORD *)(a1 + 4)) >= 0 )
            DlrmRecordPciGenerationTime(a1, (unsigned int)v5);
        }
      }
    }
  }
}
