/*
 * XREFs of DlrmHandlePowerStateAction @ 0x140138D50
 * Callers:
 *     StorAdapterDlrmSystemThread @ 0x140139A40 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     DlrmGetActionFromPowerMode @ 0x140138BC4 (DlrmGetActionFromPowerMode.c)
 *     DlrmRecordPciGenerationTime @ 0x140139030 (DlrmRecordPciGenerationTime.c)
 *     DlrmUpdateLinkInformation @ 0x1401390C0 (DlrmUpdateLinkInformation.c)
 *     StorDlrmSetLinkToDesiredSpeed @ 0x140139C04 (StorDlrmSetLinkToDesiredSpeed.c)
 */

void __fastcall DlrmHandlePowerStateAction(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // r9d

  if ( !a1 )
    return;
  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    return;
  if ( (int)DlrmUpdateLinkInformation() < 0 )
    return;
  v5 = *(_DWORD *)(a1 + 8);
  if ( (unsigned int)DlrmGetActionFromPowerMode(*(_DWORD *)(a1 + 76)) == a2 )
    return;
  switch ( a2 )
  {
    case 3:
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 76) = 1;
      break;
    case 4:
      v6 = *(_DWORD *)(a1 + 56);
      v7 = 2;
      *(_DWORD *)(a1 + 76) = 2;
      if ( v6 < 2 )
        v7 = v6;
      *(_DWORD *)(a1 + 60) = v7;
      break;
    case 5:
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 76) = 3;
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 12), 0);
      goto LABEL_14;
    default:
      return;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 12), 0);
LABEL_14:
  v8 = *(_DWORD *)(a1 + 60);
  if ( v5 != v8 && (int)StorDlrmSetLinkToDesiredSpeed(a1, *(_QWORD *)(v2 + 6216), a2, v8, *(_WORD *)(a1 + 4)) >= 0 )
    DlrmRecordPciGenerationTime(a1, v5);
}
