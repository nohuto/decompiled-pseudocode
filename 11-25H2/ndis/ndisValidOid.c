/*
 * XREFs of ndisValidOid @ 0x140061A40
 * Callers:
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x140166D10 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidOid(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // eax
  _DWORD *v7; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(v3 + 32) < 6u && (a2 & 0xFF000000) == 0xFF000000 || (*(_DWORD *)(v3 + 120) & 0x80u) != 0 )
    return 1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_DWORD *)(v4 + 4);
  v6 = 0;
  if ( v5 )
  {
    v7 = *(_DWORD **)(v4 + 16);
    do
    {
      if ( *v7 == a2 )
        break;
      ++v6;
      ++v7;
    }
    while ( v6 < v5 );
  }
  return v6 < v5;
}
