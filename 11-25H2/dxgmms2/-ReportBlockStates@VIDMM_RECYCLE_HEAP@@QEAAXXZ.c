/*
 * XREFs of ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1400FD570
 * Callers:
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1400FD460 (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043F1C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     ?ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ @ 0x1400FD614 (-ReportStates@VIDMM_RECYCLE_BLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ReportBlockStates(VIDMM_RECYCLE_HEAP *this)
{
  char *v1; // rdi
  char *i; // rbx
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]
  __int64 v8; // [rsp+38h] [rbp-10h]

  v1 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v1; i = *(char **)i )
  {
    if ( (byte_140081242 & 4) != 0 )
    {
      v4 = *((_QWORD *)i + 3);
      v5 = *((_QWORD *)i + 4) - v4;
      if ( (unsigned int)(*(_DWORD *)this - 3) <= 3 )
        v4 = *((_QWORD *)i + 5);
      LODWORD(v8) = 1;
      LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) + 8LL);
      LODWORD(v6) = *(_DWORD *)this;
      McTemplateK0pxqqt_EtwWriteTransfer(v5, &EventCreateProcessAllocation, (unsigned int)v7, v4, v5, v6, v7, v8);
    }
    VIDMM_RECYCLE_BLOCK::ReportStates((VIDMM_RECYCLE_BLOCK *)(i - 16));
  }
}
