/*
 * XREFs of EtwpInitializeCompression @ 0x180115460
 * Callers:
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlCompressWorkSpaceSizeXpressLz @ 0x180115500 (RtlCompressWorkSpaceSizeXpressLz.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall EtwpInitializeCompression(__int64 a1)
{
  PVOID Heap; // rax
  int v4; // eax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  LODWORD(Size) = 0;
  RtlCompressWorkSpaceSizeXpressLz(0LL, &Size, &v6);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)Size);
  *(_QWORD *)(a1 + 416) = Heap;
  if ( !Heap )
    return -1073741801;
  v4 = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 432) = 2 * v4;
  RegionSize = (unsigned int)(2 * v4);
  return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 424), 0LL, &RegionSize, 0x1000u, 4u);
}
