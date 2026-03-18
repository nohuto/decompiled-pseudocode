/*
 * XREFs of NVMeReservedSubmissionQueueCreate @ 0x14002BB3C
 * Callers:
 *     IoctlCreateReservedQueuePair @ 0x1400203C4 (IoctlCreateReservedQueuePair.c)
 * Callees:
 *     NVMeAllocateDmaBuffer @ 0x140006160 (NVMeAllocateDmaBuffer.c)
 *     WaitForCommandComplete @ 0x140008190 (WaitForCommandComplete.c)
 *     ProcessCommand @ 0x140009500 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x140009790 (LocalCommandReuse.c)
 *     NVMeFreeDmaBuffer @ 0x14000CF60 (NVMeFreeDmaBuffer.c)
 *     NVMeFreePool @ 0x14001DC5C (NVMeFreePool.c)
 *     memset @ 0x1400314C0 (memset.c)
 */

__int64 __fastcall NVMeReservedSubmissionQueueCreate(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  int v7; // r9d
  __int64 v8; // r13
  __int64 v9; // r8
  unsigned __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rcx

  v7 = a3;
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v8 = *(_QWORD *)(a2 + 64);
  else
    v8 = *(_QWORD *)(a2 + 24);
  v9 = 16LL * a6;
  v10 = (unsigned __int64)a5 << 6;
  v11 = *(unsigned __int16 *)(v9 + v8 + 86);
  *(_WORD *)(*(_QWORD *)(a1 + 960) + v10 + 42) = v7;
  *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960) + 16) = (unsigned int)(2 * *(_DWORD *)(a1 + 200) * v7)
                                                + *(_QWORD *)(a1 + 176)
                                                + 4096LL;
  v12 = *(_QWORD *)(v8 + 16 * (a6 + 3LL) + 28);
  if ( v12 )
  {
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960)) = v12;
    *(_QWORD *)(v10 + *(_QWORD *)(a1 + 960) + 8) = 0LL;
  }
  else if ( *(_WORD *)(v9 + v8 + 86) && (*(_DWORD *)(a1 + 128) & 1) != 0 )
  {
    NVMeAllocateDmaBuffer(a1, v11 << 6);
    return 8;
  }
  StorPortExtendedFunction(0LL, a1, (unsigned int)(32 * v11), 1701672526LL);
  return 1;
}
