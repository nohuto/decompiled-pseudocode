/*
 * XREFs of StorPortAdapterPowerRequiredStep1 @ 0x140037670
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     StorPortAdapterPowerRequiredStep2 @ 0x1400377A8 (StorPortAdapterPowerRequiredStep2.c)
 *     RaidAdapterEnableIoResourceAutoReclaim @ 0x14005A21C (RaidAdapterEnableIoResourceAutoReclaim.c)
 *     McTemplateK0pqtx_EtwWriteTransfer @ 0x140076068 (McTemplateK0pqtx_EtwWriteTransfer.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x140077988 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 */

__int64 __fastcall StorPortAdapterPowerRequiredStep1(unsigned __int64 Context, unsigned __int64 a2, int a3)
{
  char *v3; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rdx

  v3 = (char *)(Context + 4960);
  v4 = (_QWORD *)Context;
  if ( *(_QWORD *)(Context + 5248) )
  {
    a2 = *(unsigned int *)(*(_QWORD *)v3 + 20LL);
    if ( (a2 & 8) != 0 || (*(_BYTE *)(Context + 108) & 1) != 0 )
    {
      Context = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(Context + 5248);
      a2 = Context / 0x2710;
      v4[657] += Context / 0x2710;
      if ( Context / 0x2710 >= 0x2710 )
        ++*((_DWORD *)v4 + 1328);
      if ( !v4[655] )
        v4[655] = v4[652];
    }
    v4[656] = 0LL;
  }
  ++*((_DWORD *)v4 + 1326);
  if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
    McTemplateK0pqtx_EtwWriteTransfer(
      Context,
      (unsigned int)&EventAdapterPowerRequiredStart,
      a3,
      **(_QWORD **)v3,
      *((_DWORD *)v4 + 14));
  if ( *((_DWORD *)v4 + 242) > 1u )
  {
    LOBYTE(a2) = 1;
    RaidAdapterEnableIoResourceAutoReclaim(v4, a2);
  }
  *(_DWORD *)(*(_QWORD *)v3 + 20LL) |= 2u;
  if ( RaidIsAdapterControlSupported((__int64)(v4 + 47), 7) )
  {
    LOBYTE(v5) = 1;
    RaidAdapterSendPoFxPowerRequiredToMiniport(v4, v5);
  }
  return StorPortAdapterPowerRequiredStep2(v4);
}
