/*
 * XREFs of ?DecrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400F07F0
 * Callers:
 *     ?NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@H@Z @ 0x1400F0660 (-NotifyAllocationReclaimed@VIDMM_SEGMENT@@UEAAXPEAUVIDMM_GLOBAL_ALLOC@@H@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140042A50 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesResident(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION *a2,
        __int64 a3,
        char a4)
{
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rcx

  if ( *((_QWORD *)this + 33) < (unsigned __int64)(*((_QWORD *)this + 33) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 453;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
  }
  *((_QWORD *)this + 33) -= a3;
  if ( *((_DWORD *)this + 102) != -1 && !a4 )
  {
    v14 = *((_QWORD *)this + 34);
    if ( v14 < v14 - a3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 464;
      DxgkLogInternalTriageEvent(v15, 0x40000LL);
    }
    v16 = *((_QWORD *)this + 34) - a3;
    *((_QWORD *)this + 34) = v16;
    if ( v16 <= qword_1400815C8 && v14 > qword_1400815C8 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)this + 3) + 40032LL))(
        *(_QWORD *)(*((_QWORD *)this + 3) + 40080LL),
        *((unsigned int *)this + 102));
    if ( !*((_QWORD *)this + 34) )
      VIDMM_GLOBAL::NotifyMemorySegmentIdle(*((VIDMM_GLOBAL **)this + 3), this);
  }
  v9 = *((_QWORD *)this + 3);
  v10 = *((unsigned __int16 *)this + 210);
  v11 = *((int *)this + 129);
  v12 = *(_QWORD *)(*(_QWORD *)(v9 + 40232) + 8 * v10);
  if ( (*(_BYTE *)(v12 + 24 * v11 + 552) & 1) != 0 )
    v13 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v9 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 344 * v10;
  else
    v13 = v12 + 344 * v11 + 584;
  if ( *(_QWORD *)(v13 + 128) < (unsigned __int64)(*(_QWORD *)(v13 + 128) - a3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 491;
    DxgkLogInternalTriageEvent(v17, 0x40000LL);
  }
  *(_QWORD *)(v13 + 128) -= a3;
}
