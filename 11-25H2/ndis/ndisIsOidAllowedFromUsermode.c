/*
 * XREFs of ndisIsOidAllowedFromUsermode @ 0x14006B380
 * Callers:
 *     ndisMethodDeviceOid @ 0x1400CCA34 (ndisMethodDeviceOid.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x140166D10 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode(int a1)
{
  _DWORD *i; // rax

  for ( i = &unk_1400FFF80; ; ++i )
  {
    if ( i == (_DWORD *)&unk_1400FFF84 )
      return 1;
    if ( *i == a1 )
      break;
  }
  return 0;
}
