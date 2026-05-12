/*
 * XREFs of NvmeNamespaceReservationReportCapabilities @ 0x14010D4B4
 * Callers:
 *     NvmeNamespacePersistentReserveInIoctl @ 0x140105350 (NvmeNamespacePersistentReserveInIoctl.c)
 * Callees:
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeControllerGetExtendedCommand @ 0x14012949C (NvmeControllerGetExtendedCommand.c)
 *     NvmeControllerReclaimExtendedCommand @ 0x140129B08 (NvmeControllerReclaimExtendedCommand.c)
 */

__int64 __fastcall NvmeNamespaceReservationReportCapabilities(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  _QWORD *ExtendedCommand; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax

  if ( *(_WORD *)(*(_QWORD *)(a2 + 24) + 10LL) >= 8u )
  {
    ExtendedCommand = (_QWORD *)NvmeControllerGetExtendedCommand(*(_QWORD *)(a1 + 16));
    v6 = ExtendedCommand;
    if ( ExtendedCommand )
    {
      v7 = *ExtendedCommand;
      v8 = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v7 + 4096) = 10;
      *(_DWORD *)(v7 + 4100) = v8;
      *(_BYTE *)(v7 + 4136) = -125;
      *(_DWORD *)(*v6 + 4256LL) |= 1u;
      *(_DWORD *)(*v6 + 4256LL) |= 0x20u;
      *(_DWORD *)(*v6 + 4256LL) &= ~2u;
      *(_QWORD *)(*v6 + 4184LL) = a2;
      *(_QWORD *)(*v6 + 4192LL) = NvmeNamespaceReservationReportCapabilitiesCompletion;
      *(_QWORD *)(*v6 + 4200LL) = v6;
      *(_QWORD *)(*v6 + 4216LL) = a1;
      v4 = NvmeControllerProcessCommandSync(*(_QWORD *)(a1 + 16), v6, 0);
      NvmeControllerReclaimExtendedCommand(*(_QWORD *)(a1 + 16), v6);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v4;
}
