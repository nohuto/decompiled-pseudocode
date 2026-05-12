/*
 * XREFs of NvmeAdapterInitializeWmi @ 0x1400D3850
 * Callers:
 *     NvmeAdapterStartDevice @ 0x1400D812C (NvmeAdapterStartDevice.c)
 * Callees:
 *     RaidDeleteDeferredQueue @ 0x14003A6A4 (RaidDeleteDeferredQueue.c)
 *     RaidInitializeDeferredQueue @ 0x14006B018 (RaidInitializeDeferredQueue.c)
 */

__int64 __fastcall NvmeAdapterInitializeWmi(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // ebp
  unsigned __int64 v3; // rdx
  _QWORD *v5; // rdi
  __int64 v6; // r8

  v1 = (_QWORD *)(a1 + 144);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 144);
  v5 = (_QWORD *)(a1 + 144);
  if ( (v3 & 4) == 0 && *(_BYTE *)(a1 + 323) )
  {
    v2 = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), (v3 >> 2) & 2 | 1);
    if ( v2 >= 0 )
    {
      *v1 |= 8uLL;
      v2 = RaidInitializeDeferredQueue(a1 + 736, *(void **)(a1 + 8), v6, 0xA0u, (__int64)NvmeAdapterWmiDeferredRoutine);
      if ( v2 >= 0 )
        goto LABEL_9;
      v5 = (_QWORD *)(a1 + 144);
    }
    if ( (*(_BYTE *)v1 & 8) != 0 )
    {
      IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
      *v1 &= ~8uLL;
    }
    RaidDeleteDeferredQueue((union _SLIST_HEADER *)(a1 + 736));
  }
LABEL_9:
  *v5 |= 4uLL;
  return (unsigned int)v2;
}
