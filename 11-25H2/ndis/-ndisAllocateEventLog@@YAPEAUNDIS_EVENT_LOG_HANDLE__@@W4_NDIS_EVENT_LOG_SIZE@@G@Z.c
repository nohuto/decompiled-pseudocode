/*
 * XREFs of ?ndisAllocateEventLog@@YAPEAUNDIS_EVENT_LOG_HANDLE__@@W4_NDIS_EVENT_LOG_SIZE@@G@Z @ 0x14016D010
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x140181730 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ndisEventEntryCount@@YAKW4_NDIS_EVENT_LOG_SIZE@@@Z @ 0x14016D190 (-ndisEventEntryCount@@YAKW4_NDIS_EVENT_LOG_SIZE@@@Z.c)
 */

__int64 __fastcall ndisAllocateEventLog(unsigned int a1, __int16 a2)
{
  __int16 v3; // cx
  __int16 v4; // dx
  __int16 v5; // ax
  __int16 v6; // bx
  unsigned __int16 v7; // bp
  int v8; // esi
  __int16 v9; // di
  __int64 v10; // rcx
  size_t v11; // r14
  __int64 Pool2; // rbx

  if ( (a2 & 0xFFF8) != 0 || !ndisDebugLoggingMode )
    return 0LL;
  if ( ndisDebugLoggingMode == 2 )
    a2 |= 2u;
  v3 = a2 | 0x100;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v4 = v3 | 0x500;
  if ( (v3 & 2) == 0 )
    v4 = v3;
  v5 = v4 | 0x700;
  if ( (v4 & 4) == 0 )
    v5 = v4;
  v6 = v5;
  if ( (v5 & 0x200) != 0 )
  {
    v7 = 16;
  }
  else if ( (v5 & 0x400) != 0 )
  {
    v7 = 8;
  }
  else
  {
    v7 = 2;
    if ( (v5 & 0x100) != 0 )
      v7 = 4;
  }
  v8 = ndisEventEntryCount(a1);
  v9 = v6 | 0x1000;
  if ( (v6 & 2) == 0 )
    v9 = v6;
  v10 = v8 * (unsigned int)v7;
  v11 = (unsigned int)v10;
  Pool2 = ExAllocatePool2(64LL, v10 + 32, 1818575950);
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_OWORD *)Pool2 = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)(Pool2 + 16));
  *(_DWORD *)(Pool2 + 28) = 0;
  *(_WORD *)(Pool2 + 24) = v9;
  *(_WORD *)(Pool2 + 26) = v7;
  *(_DWORD *)(Pool2 + 12) = v8;
  *(_DWORD *)(Pool2 + 8) = -1;
  *(_QWORD *)Pool2 = MEMORY[0xFFFFF78000000014];
  if ( (v9 & 2) != 0 )
    memset((void *)(Pool2 + 32), 0, v11);
  return Pool2;
}
