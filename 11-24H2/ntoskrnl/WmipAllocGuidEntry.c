/*
 * XREFs of WmipAllocGuidEntry @ 0x1409AFDEC
 * Callers:
 *     WmipLinkDataSourceToList @ 0x1409B19AC (WmipLinkDataSourceToList.c)
 *     WmipOpenBlock @ 0x1409B25B0 (WmipOpenBlock.c)
 * Callees:
 *     WmipAllocEntry @ 0x1409B04E8 (WmipAllocEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  void *Pool2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  v0 = 0LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x38uLL, 0x70696D57u);
  if ( Pool2 )
  {
    v3 = (_QWORD *)WmipAllocEntry(&WmipGEChunkInfo);
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
