/*
 * XREFs of MiReleaseVadEventBlocks @ 0x14099A250
 * Callers:
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14040EEF0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MiGetVadWakeList @ 0x140443B20 (MiGetVadWakeList.c)
 *     MiFreeAweView @ 0x1406F3720 (MiFreeAweView.c)
 *     MiFreeVadEventBitmapCharges @ 0x14099A3EC (MiFreeVadEventBitmapCharges.c)
 *     MiFreePlaceholderVadEvent @ 0x14099A43C (MiFreePlaceholderVadEvent.c)
 *     MiFreeLargePageView @ 0x14099A530 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseVadEventBlocks(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  _KPROCESS *Process; // rsi
  int v6; // r15d
  unsigned __int64 VadWakeList; // r14
  int v8; // ecx
  unsigned __int64 v9; // r12
  _SLIST_ENTRY *v10; // rcx

  v3 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 0;
  VadWakeList = MiGetVadWakeList(a1, -546);
  if ( VadWakeList )
  {
    do
    {
      v9 = *(_QWORD *)VadWakeList;
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x10) != 0 )
      {
        v6 = 1;
        MiFreeLargePageView(Process, a1, VadWakeList, a2 != 0);
      }
      if ( (*(_DWORD *)(VadWakeList + 80) & 8) != 0 )
      {
        v10 = *(_SLIST_ENTRY **)(VadWakeList + 8);
        if ( v10 )
          MiFreeInPageSupportBlock(v10);
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0x218uLL);
      }
      if ( (*(_DWORD *)(VadWakeList + 80) & 4) != 0 )
        MiFreeVadEventBitmapCharges(Process, VadWakeList);
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x40) != 0 )
        MiFreeVadEventBitmapCharges(Process, VadWakeList);
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x100) != 0 )
        MiFreeAweView((_QWORD *)VadWakeList);
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x80u) != 0 )
        MiFreePlaceholderVadEvent(VadWakeList);
      ExFreePoolWithTag((PVOID)VadWakeList, 0);
      VadWakeList = v9;
    }
    while ( v9 );
  }
  v8 = *(_DWORD *)(a1 + 48);
  if ( (v8 & 0x200000) != 0 && ((v8 & 0x180000u) >= 0x100000 || (v8 & 0x800000) != 0) && (v8 & 0x70) == 0 && !v6 )
  {
    LOBYTE(v3) = a2 != 0;
    MiFreeLargePageView(Process, a1, 0LL, v3);
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
      --Process[2].ActiveProcessors[3].StaticBitmap[27];
  }
}
