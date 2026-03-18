/*
 * XREFs of ?Destroy@CBatchCommand@@AEAAXXZ @ 0x180146FF0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180052D80 (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ??R?$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z @ 0x180146F30 (--R-$default_delete@VCBatchCommand@@@std@@QEBAXPEAVCBatchCommand@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180146F60 (--1-$out_param_t@V-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@@de.c)
 *     ??1?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ @ 0x180146FB0 (--1-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBatchCommand@@@std@@@std@@QEAA@XZ.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801479F8 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBatchCommand::Destroy(CBatchCommand *this)
{
  int v2; // ecx
  char *v3; // rsi
  _DWORD *v4; // rdi
  __int64 v5; // rcx
  HANDLE ProcessHeap; // rax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_DWORD *)this;
  if ( !v2 )
    return;
  if ( v2 == 4 )
  {
    v3 = (char *)*((_QWORD *)this + 12);
    v4 = (_DWORD *)((char *)this + 104);
    if ( (char *)this + 104 != v3 )
    {
      if ( v3 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v3);
      }
      *((_QWORD *)this + 12) = v4;
      *v4 = 0;
    }
    goto LABEL_8;
  }
  v7 = v2 - 1;
  if ( !v7 )
  {
LABEL_8:
    v5 = *((_QWORD *)this + 1);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return;
  }
  v8 = v7 - 1;
  if ( v8 && (v9 = v8 - 1) != 0 )
  {
    if ( v9 != 2 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 1);
  }
  else
  {
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 1);
  }
}
