/*
 * XREFs of ndisIsOidAllowedFromUsermode @ 0x140050AB0
 * Callers:
 *     ndisMethodDeviceOid @ 0x1400C5904 (ndisMethodDeviceOid.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode(int a1)
{
  _DWORD *i; // rax

  for ( i = &unk_1400F6AD0; ; ++i )
  {
    if ( i == (_DWORD *)&unk_1400F6AD4 )
      return 1;
    if ( *i == a1 )
      break;
  }
  return 0;
}
