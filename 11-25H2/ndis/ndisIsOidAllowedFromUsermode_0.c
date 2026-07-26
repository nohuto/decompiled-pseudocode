/*
 * XREFs of ndisIsOidAllowedFromUsermode_0 @ 0x14006D2C0
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x140166D10 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsOidAllowedFromUsermode_0(_DWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  _DWORD *i; // rax

  v3 = 0LL;
LABEL_2:
  if ( v3 >= a2 )
    return 1;
  for ( i = &unk_1400FFF80; ; ++i )
  {
    if ( i == (_DWORD *)&unk_1400FFF84 )
    {
      ++v3;
      ++a1;
      goto LABEL_2;
    }
    if ( *i == *a1 )
      break;
  }
  return 0;
}
