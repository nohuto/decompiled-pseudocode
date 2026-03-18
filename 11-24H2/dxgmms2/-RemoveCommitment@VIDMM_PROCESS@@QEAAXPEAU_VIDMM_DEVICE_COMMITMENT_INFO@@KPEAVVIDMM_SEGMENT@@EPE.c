/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400B3278
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400B3090 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x14003BC78 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DF6F0 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        struct _VIDMM_DEVICE_COMMITMENT_INFO *a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v7; // r12
  __int64 v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  unsigned __int8 v15; // si
  __int64 v16; // rdx
  _QWORD *v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 *v21; // rsi
  __int64 v22; // r15
  __int64 AllocationPriorityClassFromPriority; // r8

  v7 = a3;
  v10 = *(_QWORD *)(*(_QWORD *)a6 + 16LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v11[3] = this;
    v11[4] = v7;
    v11[5] = a4;
    v11[6] = a5;
    v11[7] = v10;
    WdLogGlobalForLineNumber = 1074;
  }
  v12 = *(_QWORD **)(*((_QWORD *)this + 2) + 8 * v7);
  if ( v12 )
  {
    v12 = (_QWORD *)v12[2];
    v13 = v12[38 * *((unsigned __int16 *)a4 + 210)] + 184LL * *((unsigned __int16 *)a4 + 20);
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(v13 + 16) -= v10;
  --*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_9;
  v14 = (_QWORD *)((char *)a2 + 16);
  v15 = 1;
  --*(_DWORD *)(v13 + 8);
  v16 = *((_QWORD *)a2 + 2);
  if ( *(struct _VIDMM_DEVICE_COMMITMENT_INFO **)(v16 + 8) != (struct _VIDMM_DEVICE_COMMITMENT_INFO *)((char *)a2 + 16) )
    goto LABEL_21;
  v12 = (_QWORD *)*((_QWORD *)a2 + 3);
  if ( (_QWORD *)*v12 != v14 )
    goto LABEL_21;
  *v12 = v16;
  *(_QWORD *)(v16 + 8) = v12;
  *v14 = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  if ( *(_DWORD *)(v13 + 8) )
LABEL_9:
    v15 = 0;
  v17 = (_QWORD *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v18[3] = v17;
    v18[4] = a4;
    v18[5] = v15;
    v18[6] = v10;
    WdLogGlobalForLineNumber = 2709;
  }
  if ( v15 )
  {
    v19 = *v17;
    if ( *(_QWORD **)(*v17 + 8LL) == v17 )
    {
      v20 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v20 == v17 )
      {
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        *v17 = 0LL;
        v17[1] = 0LL;
        goto LABEL_16;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_16:
  v21 = *(__int64 **)(*((_QWORD *)this + 2) + 8 * v7);
  v22 = v21[2] + 304 * (*((_WORD *)a6 + 12) & 0x3FLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 8LL * *((int *)a4 + 129) + 208), -v10);
  if ( (byte_140081241 & 0x20) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v21[5], &EventVidMmProcessCommitmentChange, *v21);
  if ( (*((_DWORD *)a4 + 26) & 0x1001) != 0 && (*((_DWORD *)a6 + 6) & 0x400) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(*(unsigned int *)(*(_QWORD *)a6 + 48LL));
    *(_QWORD *)(v22 + 8 * AllocationPriorityClassFromPriority + 264) -= v10;
    if ( (byte_140081241 & 0x20) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *((_WORD *)a6 + 12) & 0x3F,
        &EventVidMmProcessDemotedCommitmentChange,
        AllocationPriorityClassFromPriority);
  }
}
