/*
 * XREFs of ?AppendMegaRectCommand@CMegaRectCollection@@QEAAXPEAVCMegaRectBatchCommand@@@Z @ 0x180042650
 * Callers:
 *     ?AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180108A2C (-AppendRenderCommand@CDrawListEntryBatch@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_del.c)
 * Callees:
 *     ?_Growmap@?$deque@PEAVCMegaRectBatchCommand@@V?$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@@AEAAX_K@Z @ 0x180042760 (-_Growmap@-$deque@PEAVCMegaRectBatchCommand@@V-$allocator@PEAVCMegaRectBatchCommand@@@std@@@std@.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 */

void __fastcall CMegaRectCollection::AppendMegaRectCommand(CMegaRectCollection *this, struct CMegaRectBatchCommand *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  HANDLE ProcessHeap; // rax
  LPVOID v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a2 + 21) == 5 )
  {
    v4 = *((_QWORD *)this + 6);
    if ( !v4 )
      *((_QWORD *)this + 5) = *((_QWORD *)this + 4);
    *((_QWORD *)this + 6) = v4 + 1;
  }
  v5 = *((_QWORD *)this + 4);
  if ( ((*((_BYTE *)this + 24) + (_BYTE)v5) & 1) == 0 && *((_QWORD *)this + 2) <= (unsigned __int64)(v5 + 2) >> 1 )
    std::deque<CMegaRectBatchCommand *>::_Growmap(this);
  v6 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 3) &= 2 * v6 - 1;
  v7 = *((_QWORD *)this + 4) + *((_QWORD *)this + 3);
  v8 = 8 * ((v7 >> 1) & (v6 - 1));
  if ( !*(_QWORD *)(v8 + *((_QWORD *)this + 1)) )
  {
    ProcessHeap = GetProcessHeap();
    v10 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
    if ( !v10 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    *(_QWORD *)(v8 + *((_QWORD *)this + 1)) = v10;
  }
  *(_QWORD *)(*(_QWORD *)(v8 + *((_QWORD *)this + 1)) + 8 * (v7 & 1)) = a2;
  ++*((_QWORD *)this + 4);
}
