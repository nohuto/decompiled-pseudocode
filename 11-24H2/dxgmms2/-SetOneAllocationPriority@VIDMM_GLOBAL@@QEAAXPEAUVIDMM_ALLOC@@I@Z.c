/*
 * XREFs of ?SetOneAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@I@Z @ 0x1400DA694
 * Callers:
 *     ?SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1400DA67C (-SetAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400DB060 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 */

void __fastcall VIDMM_GLOBAL::SetOneAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, unsigned int a3)
{
  int v5; // esi
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rax
  _QWORD v9[12]; // [rsp+30h] [rbp-68h] BYREF

  v5 = a3;
  if ( a3 >= 0xC8000000 && !SeSinglePrivilegeCheck((LUID)33LL, 1) )
  {
    WdLogSingleEntry1(3LL, a2);
    WdLogGlobalForLineNumber = 5442;
    v5 = -939524097;
  }
  memset(v9, 0, 0x58uLL);
  v6 = *a2;
  LODWORD(v9[0]) = 212;
  v9[2] = a2;
  v7 = *v6;
  v8 = a2[1];
  LODWORD(v9[4]) = v5;
  VIDMM_GLOBAL::QueueDeferredCommand(
    this,
    *(struct VIDMM_PAGING_QUEUE **)(32LL * (*(_DWORD *)(v7 + 24) & 0x3F) + v8[9]),
    (struct _VIDMM_DEFERRED_COMMAND *)v9,
    0,
    0LL);
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0pq_EtwWriteTransfer();
}
