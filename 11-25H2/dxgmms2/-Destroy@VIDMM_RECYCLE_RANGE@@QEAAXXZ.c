/*
 * XREFs of ?Destroy@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1400C8B58
 * Callers:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1400C802C (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400C8210 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400285FC (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_RANGE::Destroy(VIDMM_RECYCLE_BLOCK **this)
{
  VIDMM_RECYCLE_BLOCK *v2; // rdi
  _QWORD *v3; // rcx
  VIDMM_RECYCLE_BLOCK *v4; // rcx
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rcx

  WdLogSingleEntry1(4LL, this);
  v2 = this[9];
  WdLogGlobalForLineNumber = 1105;
  v3 = (_QWORD *)*((_QWORD *)v2 + 17);
  if ( v3 )
  {
    v6 = *v3 + 144LL * v3[1];
    *(_DWORD *)v6 = 1;
    *(_QWORD *)(v6 + 8) = this;
    RtlCaptureStackBackTrace(1u, 0x10u, (PVOID *)(v6 + 16), 0LL);
    ++*(_QWORD *)(*((_QWORD *)v2 + 17) + 8LL);
    v7 = *((_QWORD *)v2 + 17);
    if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 48) )
    {
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_BYTE *)(*((_QWORD *)v2 + 17) + 16LL) = 1;
    }
  }
  v4 = this[9];
  v5 = (*(_QWORD *)v4)-- == 1LL;
  if ( v5 && !*((_QWORD *)v4 + 1) )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v4);
  *((_BYTE *)this + 168) = 1;
}
