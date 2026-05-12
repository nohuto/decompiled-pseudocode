/*
 * XREFs of StorPortAdapterDirectedPowerUp @ 0x140079C00
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x140076068 (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x140077988 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     StorPortAdapterDirectedPowerUpRequestD0 @ 0x140079DD0 (StorPortAdapterDirectedPowerUpRequestD0.c)
 */

__int64 __fastcall StorPortAdapterDirectedPowerUp(unsigned __int64 Context, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  int v6; // [rsp+20h] [rbp-28h]

  v3 = (_QWORD **)(Context + 4960);
  v4 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5328) )
  {
    if ( (*((_DWORD *)*v3 + 5) & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5248);
      v4[667] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v4 + 1328);
      if ( !v4[665] )
        v4[665] = v4[652];
    }
    v4[666] = 0LL;
  }
  ++*((_DWORD *)v4 + 1326);
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
  {
    v6 = *((_DWORD *)v4 + 14);
    McTemplateK0pqtx_EtwWriteTransfer(Context, &EventAdapterDirectedPowerUpStart, a3, **v3, v6);
  }
  *((_DWORD *)*v3 + 5) |= 2u;
  if ( RaidIsAdapterControlSupported((__int64)(v4 + 47), 7) )
    RaidAdapterSendPoFxPowerRequiredToMiniport((__int64)v4);
  return StorPortAdapterDirectedPowerUpRequestD0(v4);
}
