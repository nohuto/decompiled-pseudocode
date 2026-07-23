/*
 * XREFs of PiUpdateGuestAssignedState @ 0x140A5B948
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 * Callees:
 *     McTemplateK0z_EtwWriteTransfer @ 0x1404CE1B0 (McTemplateK0z_EtwWriteTransfer.c)
 *     PipSendGuestAssignedNotification @ 0x140734194 (PipSendGuestAssignedNotification.c)
 *     PipSetGuestAssignedProperty @ 0x140734238 (PipSetGuestAssignedProperty.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PiUpdateGuestAssignedState(__int64 a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v4; // r8
  unsigned int v5; // eax
  int v7; // ebx
  __int64 *v9; // rdx

  v2 = *(_DWORD *)(a1 + 704);
  v4 = v2;
  v5 = v2 | 0x2000;
  if ( !a2 )
    v5 = v2 & 0xFFFFDFFF;
  *(_DWORD *)(a1 + 704) = v5;
  if ( ((v2 & 0x2000) != 0) == a2 )
    return 0;
  if ( a2 )
  {
    if ( (byte_140EEFF64 & 8) != 0 )
    {
      v9 = KMPnPEvt_Guest_Assigned;
LABEL_11:
      LODWORD(v4) = v2 & 0xFFFFDFFF;
      McTemplateK0z_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)v9, v4, *(const wchar_t **)(a1 + 48));
    }
  }
  else if ( (byte_140EEFF64 & 8) != 0 )
  {
    v9 = KMPnPEvt_Guest_Unassigned;
    goto LABEL_11;
  }
  v7 = PipSetGuestAssignedProperty(a1, a2);
  if ( v7 < 0 || (v7 = PipSendGuestAssignedNotification(a1, a2), v7 < 0) )
    PnpRequestDeviceRemoval(a1, 0, 57, v7);
  return (unsigned int)v7;
}
