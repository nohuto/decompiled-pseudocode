/*
 * XREFs of LZNT1DecompressChunkWorkItem @ 0x140442170
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     LZNT1DecompressChunk @ 0x1406A90A0 (LZNT1DecompressChunk.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 */

void __fastcall LZNT1DecompressChunkWorkItem(char *P)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  size_t v5; // r8
  __int64 v6; // rcx

  v2 = LZNT1DecompressChunk(
         *((_QWORD *)P + 4),
         *((_QWORD *)P + 5),
         *((_QWORD *)P + 6),
         *((_QWORD *)P + 7),
         *((_QWORD *)P + 8));
  if ( v2 < 0 )
  {
    v6 = *((_QWORD *)P + 10);
    if ( *(int *)(v6 + 28) >= 0 )
      *(_DWORD *)(v6 + 28) = v2;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)P + 10) + 24LL), 0xFFFFFFFF) == 1 )
    KeSetEvent(*((PRKEVENT *)P + 10), 0, 0);
  ++unk_140E27F5C;
  if ( LOWORD(RtlLznt1DecompressChunkLookaside.Alignment) >= unk_140E27F50 )
  {
    ++unk_140E27F60;
    if ( (void (__stdcall *)(PVOID))unk_140E27F78 == ExFreePool )
      ExFreePool(P);
    else
      guard_dispatch_icall_no_overrides(P, v3);
  }
  else
  {
    if ( (void (__stdcall *)(PPRIVILEGE_SET))unk_140E27F78 == CmSiFreeMemory )
    {
      v4 = (unsigned __int64)(P + 8);
      if ( byte_140FCDC68 )
      {
        if ( v4 < 0xFFFF800000000000uLL )
          KeBugCheckEx(0x1F1u, 2uLL, 1uLL, (ULONG_PTR)(P + 8), 0LL);
        if ( (v4 & 7) != 0 )
          KeBugCheckEx(0x1F1u, 2uLL, 2uLL, (ULONG_PTR)(P + 8), 8uLL);
        if ( &P[dword_140E27F6C[0]] < P + 8 )
          KeBugCheckEx(0x1F1u, 2uLL, 3uLL, (ULONG_PTR)(P + 8), dword_140E27F6C[0] - 8LL);
        v5 = (dword_140E27F6C[0] - 8LL - (unsigned __int64)((LOBYTE(dword_140E27F6C[0]) - 9) & 7) + 7) >> 3;
        if ( v5 )
        {
          LOBYTE(v3) = -116;
          memset_0((void *)(KasaniShadow + ((unsigned __int64)(P + 0x800000000008LL) >> 3)), v3, v5);
        }
      }
    }
    RtlpInterlockedPushEntrySList(&RtlLznt1DecompressChunkLookaside, (PSLIST_ENTRY)P);
  }
}
