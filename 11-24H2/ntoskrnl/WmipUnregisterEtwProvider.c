/*
 * XREFs of WmipUnregisterEtwProvider @ 0x140A49BD8
 * Callers:
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x140A49B80 (WmipUnlinkInstanceSetFromGuidEntry.c)
 * Callees:
 *     WmipQueueLegacyEtwWork @ 0x140A8AB68 (WmipQueueLegacyEtwWork.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall WmipUnregisterEtwProvider(__int64 a1)
{
  __int64 v1; // rbx
  __int64 Pool2; // rax

  v1 = *(_QWORD *)(a1 + 56);
  if ( (*(_DWORD *)(v1 + 152))-- == 1 )
  {
    *(_QWORD *)(v1 + 112) = 0LL;
    *(_QWORD *)(v1 + 120) = 0LL;
    Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x70696D57u);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 16) = 1;
      WmipQueueLegacyEtwWork(Pool2, v1, 0LL);
    }
  }
}
