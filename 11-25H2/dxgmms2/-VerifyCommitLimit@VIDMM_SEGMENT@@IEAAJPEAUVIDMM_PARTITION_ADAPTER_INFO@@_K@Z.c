/*
 * XREFs of ?VerifyCommitLimit@VIDMM_SEGMENT@@IEAAJPEAUVIDMM_PARTITION_ADAPTER_INFO@@_K@Z @ 0x1400F6B40
 * Callers:
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x140101CD0 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::VerifyCommitLimit(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION_ADAPTER_INFO *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v3 = *((_QWORD *)this + 32);
  v7 = v3 + a3;
  if ( v3 + a3 > *((_QWORD *)this + 31) || v7 < v3 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7);
      v10[3] = this;
      v10[4] = a3;
      v10[5] = *((_QWORD *)this + 32);
      v10[6] = *((_QWORD *)this + 31);
      WdLogGlobalForLineNumber = 1159;
    }
  }
  else
  {
    if ( (*((_DWORD *)this + 26) & 0x1001) == 0 )
      return 0LL;
    v8 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
    if ( v8 + a3 <= *((_QWORD *)a2 + 2) && v8 + a3 >= v8 )
      return 0LL;
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8);
      v11[3] = this;
      v11[4] = a3;
      v11[5] = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
      v11[6] = *((_QWORD *)a2 + 2);
      WdLogGlobalForLineNumber = 1171;
    }
  }
  return 3221225773LL;
}
