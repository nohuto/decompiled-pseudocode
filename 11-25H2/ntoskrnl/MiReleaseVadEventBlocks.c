/*
 * XREFs of MiReleaseVadEventBlocks @ 0x140901E30
 * Callers:
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiRemoveVadCharges @ 0x140901C48 (MiRemoveVadCharges.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403C5970 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFreeAweView @ 0x1406E9DC4 (MiFreeAweView.c)
 *     MiFreePlaceholderVadEvent @ 0x140902050 (MiFreePlaceholderVadEvent.c)
 *     MiFreeLargePageView @ 0x140A9CC88 (MiFreeLargePageView.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseVadEventBlocks(__int64 a1, int a2)
{
  unsigned int v3; // ebp
  _KPROCESS *Process; // rdi
  int v6; // r15d
  unsigned __int64 VadWakeList; // r14
  int v8; // edx
  _DWORD *v9; // rcx
  _DWORD *v10; // r14
  unsigned __int64 v11; // r12
  _SLIST_ENTRY *v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rax

  v3 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = 0;
  VadWakeList = MiGetVadWakeList(a1, -546);
  if ( VadWakeList )
  {
    do
    {
      v11 = *(_QWORD *)VadWakeList;
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x10) != 0 )
      {
        v6 = 1;
        MiFreeLargePageView(Process, a1, VadWakeList, a2 != 0);
      }
      if ( (*(_DWORD *)(VadWakeList + 80) & 8) != 0 )
      {
        v12 = *(_SLIST_ENTRY **)(VadWakeList + 8);
        if ( v12 )
          MiFreeInPageSupportBlock(v12);
        PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, 0x218uLL);
      }
      v13 = *(_DWORD *)(VadWakeList + 80);
      if ( (v13 & 4) == 0 )
        goto LABEL_26;
      if ( (v13 & 0x40) != 0 )
        goto LABEL_24;
      if ( v13 == 256 )
      {
        v14 = *(_QWORD *)(VadWakeList + 56);
        goto LABEL_25;
      }
      if ( !MmVadEventBlockFixEnabled )
LABEL_24:
        v14 = *(_QWORD *)(VadWakeList + 8);
      else
        v14 = *(_QWORD *)(VadWakeList + 16);
LABEL_25:
      PsReturnProcessNonPagedPoolQuota((ULONG_PTR)Process, 8 * ((v14 >> 6) + ((v14 & 0x3F) != 0) + 11LL));
LABEL_26:
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x40) != 0 )
        PsReturnProcessNonPagedPoolQuota(
          (ULONG_PTR)Process,
          8 * ((*(_QWORD *)(VadWakeList + 8) >> 6) + ((*(_QWORD *)(VadWakeList + 8) & 0x3F) != 0) + 11LL));
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x100) != 0 )
        MiFreeAweView((_QWORD *)VadWakeList);
      if ( (*(_DWORD *)(VadWakeList + 80) & 0x80u) != 0 )
        MiFreePlaceholderVadEvent(VadWakeList);
      ExFreePoolWithTag((PVOID)VadWakeList, 0);
      VadWakeList = v11;
    }
    while ( v11 );
  }
  v8 = *(_DWORD *)(a1 + 48);
  v9 = (_DWORD *)(a1 + 48);
  if ( (v8 & 0x200000) == 0 )
    goto LABEL_3;
  v10 = (_DWORD *)(a1 + 48);
  if ( (v8 & 0x180000u) < 0x100000 )
  {
    v9 = (_DWORD *)(a1 + 48);
    if ( (v8 & 0x800000) == 0 )
      goto LABEL_3;
    v10 = (_DWORD *)(a1 + 48);
  }
  v9 = (_DWORD *)(a1 + 48);
  if ( (v8 & 0x70) == 0 )
  {
    v9 = (_DWORD *)(a1 + 48);
    if ( !v6 )
    {
      LOBYTE(v3) = a2 != 0;
      MiFreeLargePageView(Process, a1, 0LL, v3);
      v9 = v10;
    }
  }
LABEL_3:
  if ( a2 )
  {
    if ( (*v9 & 0x70) == 0x10 )
      --Process[2].ActiveProcessors[3].StaticBitmap[27];
  }
}
