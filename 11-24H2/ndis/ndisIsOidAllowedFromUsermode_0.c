/*
 * XREFs of ndisIsOidAllowedFromUsermode_0 @ 0x140051710
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x14015A1F0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
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
  for ( i = &unk_1400F6AD0; ; ++i )
  {
    if ( i == (_DWORD *)&unk_1400F6AD4 )
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
