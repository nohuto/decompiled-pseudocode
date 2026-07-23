/*
 * XREFs of ViFreeMapRegisterFile @ 0x140B8AB9C
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140B87190 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140B87FE0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140B88490 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140B88540 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140B887E0 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B89980 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x140B89B50 (ViAdapterCallback.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     VfUtilFreePoolCheckIRQL @ 0x1404B5DA0 (VfUtilFreePoolCheckIRQL.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x140B8A474 (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x140B8ADE8 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, _SLIST_ENTRY *a2)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  __int64 v6; // r9
  _SLIST_ENTRY *Next; // r8
  __int64 v8; // rdi
  unsigned int v9; // esi
  char *i; // rdi
  __int64 v11; // rcx
  unsigned int v12; // r9d
  ULONG_PTR v13; // r8
  __int64 v14; // rdx
  _SLIST_ENTRY *v15; // rcx

  if ( !a2 || LODWORD(a2->Next) != -1393569779 )
    return 0LL;
  v4 = (KSPIN_LOCK *)(a1 + 152);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 152));
  v6 = *((_QWORD *)&a2->Next + 1);
  if ( *(_SLIST_ENTRY **)(v6 + 8) != (_SLIST_ENTRY *)(&a2->Next + 1)
    || (Next = a2[1].Next, Next->Next != (_SLIST_ENTRY *)(&a2->Next + 1)) )
  {
    __fastfail(3u);
  }
  Next->Next = (_SLIST_ENTRY *)v6;
  *(_QWORD *)(v6 + 8) = Next;
  KeReleaseSpinLock(v4, v5);
  LODWORD(a2->Next) = 0;
  v8 = *((_QWORD *)&a2[2].Next + 1);
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v8 + 24), *((PMDL *)&a2[2].Next + 1));
    IoFreeMdl((PMDL)v8);
  }
  MmUnmapLockedPages(a2[4].Next, *((PMDL *)&a2[3].Next + 1));
  v9 = 0;
  for ( i = (char *)(&a2[5].Next + 1); v9 < *((_DWORD *)&a2[1].Next + 3); i += 32 )
  {
    v11 = *((_QWORD *)i + 2);
    if ( *(_QWORD *)i )
    {
      v12 = *((_DWORD *)i + 2);
      v13 = v11 + (*(_DWORD *)i & 0xFFF) + 4096LL;
    }
    else
    {
      v13 = 0LL;
      v12 = 0;
    }
    ViCheckPadding(v11, 0x3000u, v13, v12);
    v14 = *((_QWORD *)i + 2);
    *((_DWORD *)i + 3) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v14, v9) )
      ExFreePoolWithTag(*((PVOID *)i + 2), 0);
    ++v9;
  }
  IoFreeMdl(*((PMDL *)&a2[3].Next + 1));
  v15 = (_SLIST_ENTRY *)*((_QWORD *)&a2[4].Next + 1);
  if ( v15 )
    VfUtilFreePoolCheckIRQL(v15);
  memset_0(a2, 0, 0x78uLL);
  VfUtilFreePoolCheckIRQL(a2);
  return 1LL;
}
