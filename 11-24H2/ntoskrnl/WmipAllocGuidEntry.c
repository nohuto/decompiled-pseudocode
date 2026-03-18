/*
 * XREFs of WmipAllocGuidEntry @ 0x1409D0E2C
 * Callers:
 *     WmipOpenBlock @ 0x1409CD2D0 (WmipOpenBlock.c)
 *     WmipLinkDataSourceToList @ 0x1409CF724 (WmipLinkDataSourceToList.c)
 * Callees:
 *     WmipAllocEntry @ 0x1409D00A0 (WmipAllocEntry.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  void *Pool2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  v0 = 0LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v3 = WmipAllocEntry((__int64)&WmipGEChunkInfo);
    v0 = v3;
    if ( v3 )
    {
      v3[12] = Pool2;
      v3[8] = v3 + 7;
      v3[7] = v3 + 7;
      v3[6] = v3 + 5;
      v3[5] = v3 + 5;
      v3[18] = v3 + 17;
      v3[17] = v3 + 17;
      v4 = (_QWORD *)v3[12];
      v4[3] = 0LL;
      v4[5] = WmipLegacyEtwWorker;
      v4[6] = v0;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0x70696D57u);
    }
  }
  return v0;
}
