/*
 * XREFs of ?ReserveTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401018B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::ReserveTemporaryResource(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(this);
    WdLogGlobalForLineNumber = 673;
    v5 = WdLogNewEntry5_WdTrace(v4);
    *(_QWORD *)(v5 + 24) = this;
    *(_QWORD *)(v5 + 32) = a2;
    WdLogGlobalForLineNumber = 676;
  }
  (*(void (__fastcall **)(VIDMM_SYSMEM_SEGMENT *, _QWORD))(*(_QWORD *)this + 56LL))(this, *(_QWORD *)a2);
  *((_QWORD *)a2 + 16) = -1LL;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_QWORD *)a2 + 18) = this;
  return 0LL;
}
