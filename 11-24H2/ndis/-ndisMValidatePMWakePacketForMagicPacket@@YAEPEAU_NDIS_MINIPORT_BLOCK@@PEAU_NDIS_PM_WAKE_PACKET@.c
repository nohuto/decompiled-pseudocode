/*
 * XREFs of ?ndisMValidatePMWakePacketForMagicPacket@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054E50
 * Callers:
 *     ?ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054C90 (-ndisMUpdateNameOnPMWakePacket@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 *     ?ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z @ 0x140054F20 (-ndisMEvaluateMagicPacketWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_WAKE_PACKET@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

char __fastcall ndisMValidatePMWakePacketForMagicPacket(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_WAKE_PACKET *a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // r9
  char *v4; // rdx
  char v5; // si
  unsigned __int64 v6; // r8
  _NDIS_IF_BLOCK *IfBlock; // r14
  int v8; // eax
  char *v10; // rdi
  unsigned int i; // ebx
  int v12; // ecx

  v2 = *((unsigned int *)a2 + 37);
  if ( v2 < 0x2A )
    return 0;
  v3 = v2 - 42;
  v4 = (char *)a2 + *((unsigned int *)a2 + 38);
  v5 = 0;
  v6 = 0LL;
  IfBlock = a1->IfBlock;
  do
  {
    v8 = *(_DWORD *)v4 + 1;
    if ( *(_DWORD *)v4 == -1 )
      v8 = *((unsigned __int16 *)v4 + 2) - 0xFFFF;
    if ( !v8 )
    {
      v10 = v4 + 6;
      for ( i = 0; i < 6; ++i )
      {
        v12 = *(_DWORD *)v10 - *(_DWORD *)IfBlock->ifPhysAddress.Address;
        if ( *(_DWORD *)v10 == *(_DWORD *)IfBlock->ifPhysAddress.Address )
          v12 = *((unsigned __int16 *)v10 + 2) - *(unsigned __int16 *)&IfBlock->ifPhysAddress.Address[4];
        if ( v12 )
        {
          v5 = 0;
          goto LABEL_6;
        }
        v10 += 6;
        v5 = 1;
      }
      if ( v5 && i == 6 )
        break;
    }
LABEL_6:
    ++v4;
    ++v6;
  }
  while ( v6 <= v3 );
  return v5;
}
