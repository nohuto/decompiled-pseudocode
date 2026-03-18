/*
 * XREFs of ?AddPendingTemporaryResource@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAUVIDMM_TEMPORARY_RESOURCE@@@Z @ 0x1400E6484
 * Callers:
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1400E58C4 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAUVIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_D.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::AddPendingTemporaryResource(
        VIDMM_PHYSICAL_ADAPTER ***this,
        struct VIDMM_TEMPORARY_RESOURCE *a2)
{
  _QWORD *v4; // rax
  VIDMM_PHYSICAL_ADAPTER **v5; // rcx

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v4[3] = *((_QWORD *)a2 + 4);
    v4[4] = *((unsigned int *)a2 + 6);
    v4[5] = *((int *)a2 + 7);
    WdLogGlobalForLineNumber = 4338;
  }
  v5 = this[212];
  if ( *v5 != (VIDMM_PHYSICAL_ADAPTER *)(this + 211) )
    __fastfail(3u);
  *(_QWORD *)a2 = this + 211;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = a2;
  this[212] = (VIDMM_PHYSICAL_ADAPTER **)a2;
}
