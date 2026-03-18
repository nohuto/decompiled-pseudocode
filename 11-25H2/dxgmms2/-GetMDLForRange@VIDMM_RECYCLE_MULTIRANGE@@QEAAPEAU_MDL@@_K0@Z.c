/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1400EA8FC
 * Callers:
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAUVIDMM_HEAP_ALLOC@@_K1@Z @ 0x1400EA890 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAUVIDMM_HEAP_ALLOC@@_K1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z @ 0x1400EAA80 (-CopyPfnArray@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXPEA_K_K1@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(
        VIDMM_RECYCLE_MULTIRANGE *this,
        __int64 a2,
        unsigned __int64 a3)
{
  char *v6; // r14
  void *v7; // rcx
  unsigned __int64 *v8; // rdi
  char *v9; // r12
  __int64 v10; // r13
  __int64 Pool2; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx

  if ( *((_DWORD *)this + 50) != 4 )
    return 0LL;
  v6 = (char *)this + 104;
  v7 = (void *)*((_QWORD *)this + 13);
  v8 = (unsigned __int64 *)((char *)this + 120);
  if ( !v7 )
  {
    v9 = v6;
LABEL_4:
    v10 = 8 * (a3 >> 12) + 48;
    Pool2 = ExAllocatePool2(64LL, v10, 892561750LL);
    *(_QWORD *)v6 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 40) = a3;
      *(_WORD *)(*(_QWORD *)v6 + 8LL) = v10;
      v12 = *(_QWORD *)v6;
      v6 = v9;
      *(_QWORD *)(v12 + 16) = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 10) + 32LL) + 8LL) + 8LL);
LABEL_6:
      v13 = *(_QWORD *)v6;
      v14 = a2 + *((_QWORD *)this + 6);
      *((_QWORD *)this + 14) = a2;
      *v8 = a3;
      *(_QWORD *)(v13 + 32) = v14;
      VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::CopyPfnArray(
        (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 10) + 88LL),
        (unsigned __int64 *)(*(_QWORD *)v6 + 48LL),
        a2 + *((_QWORD *)this + 6),
        a2 + *((_QWORD *)this + 6) + a3);
      return *(struct _MDL **)v6;
    }
    _InterlockedIncrement(&dword_14008176C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 4392;
    DxgkLogInternalTriageEvent(0LL, 262145LL);
    return 0LL;
  }
  if ( *((_QWORD *)this + 14) != a2 )
  {
    if ( *v8 == a3 )
      goto LABEL_6;
    goto LABEL_13;
  }
  if ( *v8 != a3 )
  {
LABEL_13:
    ExFreePoolWithTag(v7, 0);
    v9 = (char *)this + 104;
    goto LABEL_4;
  }
  return (struct _MDL *)v7;
}
