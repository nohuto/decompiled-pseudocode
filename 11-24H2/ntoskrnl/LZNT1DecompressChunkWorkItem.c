/*
 * XREFs of LZNT1DecompressChunkWorkItem @ 0x140442480
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     LZNT1DecompressChunk @ 0x1406B4370 (LZNT1DecompressChunk.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

void __fastcall LZNT1DecompressChunkWorkItem(char *P)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  size_t v7; // r8
  __int64 v8; // rcx

  v2 = LZNT1DecompressChunk(
         *((_QWORD *)P + 4),
         *((_QWORD *)P + 5),
         *((_QWORD *)P + 6),
         *((_QWORD *)P + 7),
         *((_QWORD *)P + 8));
  if ( v2 < 0 )
  {
    v8 = *((_QWORD *)P + 10);
    if ( *(int *)(v8 + 28) >= 0 )
      *(_DWORD *)(v8 + 28) = v2;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)P + 10) + 24LL), 0xFFFFFFFF) == 1 )
    KeSetEvent(*((PRKEVENT *)P + 10), 0, 0);
  ++RtlLznt1DecompressChunkLookaside.L.TotalFrees;
  if ( LOWORD(RtlLznt1DecompressChunkLookaside.L.ListHead.Alignment) >= RtlLznt1DecompressChunkLookaside.L.Depth )
  {
    ++RtlLznt1DecompressChunkLookaside.L.FreeMisses;
    if ( (void (__stdcall *)(PVOID))RtlLznt1DecompressChunkLookaside.L.FreeEx == ExFreePool )
      ExFreePool(P);
    else
      guard_dispatch_icall_no_overrides(P, v3, v4, v5);
  }
  else
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))RtlLznt1DecompressChunkLookaside.L.FreeEx == CmSiFreeMemory )
    {
      v6 = (unsigned __int64)(P + 8);
      if ( byte_140FCDC28 )
      {
        if ( v6 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, (ULONG_PTR)(P + 8), 0LL);
        if ( (v6 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, (ULONG_PTR)(P + 8), 8uLL);
        if ( &P[RtlLznt1DecompressChunkLookaside.L.Size] < P + 8 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)(P + 8), RtlLznt1DecompressChunkLookaside.L.Size - 8LL);
        v7 = (RtlLznt1DecompressChunkLookaside.L.Size
            - 8LL
            - (unsigned __int64)((LOBYTE(RtlLznt1DecompressChunkLookaside.L.Size) - 9) & 7)
            + 7) >> 3;
        if ( v7 )
        {
          LOBYTE(v3) = -116;
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(P + 0x800000000008LL) >> 3)), v3, v7);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&RtlLznt1DecompressChunkLookaside.L.ListHead, (PSLIST_ENTRY)P);
  }
}
