/*
 * XREFs of ?ndisMIndicateOffloadChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEAXK@Z @ 0x14007BF70
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140072EB0 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisMIndicateOffloadChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2, _WORD *a3, unsigned int a4)
{
  unsigned __int8 v8; // si
  KIRQL v9; // r15
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  int v11; // ebp
  size_t v12; // rsi
  char v14; // r12
  _NDIS_MINIPORT_OFFLOAD *v15; // rax

  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  Offload = a1->Offload;
  a1->MiniportThread = KeGetCurrentThread();
  if ( Offload && a4 >= 0x70 && *(_BYTE *)a3 == 0xA7 && a3[1] >= 0x70u && *((_BYTE *)a3 + 1) )
  {
    v11 = -7;
    v12 = 220LL;
    if ( (a1->DeviceFlags & 2) == 0 )
      v11 = -1;
    if ( a2 == 1073872902 )
    {
      memset(&Offload->MiniportCurrentConfig, 0, sizeof(Offload->MiniportCurrentConfig));
      if ( a3[1] < 0xDCu )
        v12 = (unsigned __int16)a3[1];
      memmove(&a1->Offload->MiniportCurrentConfig, a3, v12);
      a1->Offload->MiniportCurrentConfig.Flags &= v11;
    }
    else
    {
      v14 = Offload->MiniportHardwareCapabilities.Flags & 1;
      memset(&Offload->MiniportHardwareCapabilities, 0, sizeof(Offload->MiniportHardwareCapabilities));
      if ( a3[1] < 0xDCu )
        v12 = (unsigned __int16)a3[1];
      memmove(&a1->Offload->MiniportHardwareCapabilities, a3, v12);
      v15 = a1->Offload;
      if ( v14 )
        v15->MiniportHardwareCapabilities.Flags |= 1u;
      else
        v15->MiniportHardwareCapabilities.Flags &= ~1u;
      a1->Offload->MiniportHardwareCapabilities.Flags &= v11;
    }
    v8 = 1;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v9);
  return v8;
}
