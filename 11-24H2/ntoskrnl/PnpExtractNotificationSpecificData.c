/*
 * XREFs of PnpExtractNotificationSpecificData @ 0x14071E1B0
 * Callers:
 *     PnpNotifyDriverCallback @ 0x1409EC7F0 (PnpNotifyDriverCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PnpExtractNotificationSpecificData(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  bool v5; // cf
  __int64 v6; // rax
  __int64 v7; // rax

  *a3 = 0LL;
  v4 = (_QWORD *)(a1 + 4);
  *a4 = 0LL;
  v5 = *(_WORD *)(a1 + 2) < 0x30u;
  *a2 = a1 + 4;
  if ( !v5 )
  {
    v6 = *v4 - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( *v4 == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
      v6 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( !v6 )
      goto LABEL_8;
    v7 = *v4 - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( *v4 == *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1 )
      v7 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v7 )
    {
LABEL_8:
      *a3 = a1 + 20;
      *a4 = *(_QWORD *)(a1 + 40);
    }
  }
}
