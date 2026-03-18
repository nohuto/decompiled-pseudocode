/*
 * XREFs of ?RemoveCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400AAE78
 * Callers:
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AAC90 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     McTemplateK0xxpqhu_EtwWriteTransfer @ 0x14003DB68 (McTemplateK0xxpqhu_EtwWriteTransfer.c)
 *     ?GetAllocationPriorityClassFromPriority@@YA?AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1400DB390 (-GetAllocationPriorityClassFromPriority@@YA-AW4VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_PROCESS::RemoveCommitment(
        VIDMM_PROCESS *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_SEGMENT *a4,
        unsigned __int8 a5,
        struct VIDMM_GLOBAL_ALLOC *a6)
{
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v10; // rbp
  _QWORD *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  unsigned __int8 v15; // si
  _QWORD *v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rcx
  __int64 *v20; // rsi
  __int64 v21; // r15
  __int64 v22; // r9
  __int64 AllocationPriorityClassFromPriority; // r8

  v7 = a3;
  v8 = a2;
  v10 = *(_QWORD *)(*(_QWORD *)a6 + 16LL);
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v11[3] = this;
    v11[4] = v7;
    v11[5] = a4;
    v11[6] = a5;
    v11[7] = v10;
    WdLogGlobalForLineNumber = 1073;
  }
  v12 = *(__int64 **)(*((_QWORD *)this + 2) + 8 * v7);
  if ( v12 )
  {
    v12 = (__int64 *)v12[2];
    a2 = 304LL * *((unsigned __int16 *)a4 + 210);
    v13 = *(__int64 *)((char *)v12 + a2) + 184LL * *((unsigned __int16 *)a4 + 20);
  }
  else
  {
    v13 = 0LL;
  }
  *(_QWORD *)(v13 + 16) -= v10;
  --*(_DWORD *)(v13 + 56);
  if ( !a5 )
    goto LABEL_9;
  v14 = (_QWORD *)(v8 + 16);
  v15 = 1;
  --*(_DWORD *)(v13 + 8);
  a2 = *(_QWORD *)(v8 + 16);
  if ( *(_QWORD *)(a2 + 8) != v8 + 16 )
    goto LABEL_21;
  v12 = *(__int64 **)(v8 + 24);
  if ( (_QWORD *)*v12 != v14 )
    goto LABEL_21;
  *v12 = a2;
  *(_QWORD *)(a2 + 8) = v12;
  *v14 = 0LL;
  *(_QWORD *)(v8 + 24) = 0LL;
  if ( *(_DWORD *)(v13 + 8) )
LABEL_9:
    v15 = 0;
  v16 = (_QWORD *)(v13 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
    v17[3] = v16;
    v17[4] = a4;
    v17[5] = v15;
    v17[6] = v10;
    WdLogGlobalForLineNumber = 2710;
  }
  if ( v15 )
  {
    v18 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) == v16 )
    {
      v19 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v19 == v16 )
      {
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v16 = 0LL;
        v16[1] = 0LL;
        goto LABEL_16;
      }
    }
LABEL_21:
    __fastfail(3u);
  }
LABEL_16:
  v20 = *(__int64 **)(*((_QWORD *)this + 2) + 8 * v7);
  v21 = v20[2] + 304 * (*((_WORD *)a6 + 12) & 0x3FLL);
  v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8LL * *((int *)a4 + 129) + 208), -v10) - v10;
  if ( (byte_140081241 & 0x20) != 0 )
    McTemplateK0xxpqhu_EtwWriteTransfer(v20[5], &EventVidMmProcessCommitmentChange, *v20);
  if ( (*((_DWORD *)a4 + 26) & 0x1001) != 0 && (*((_DWORD *)a6 + 6) & 0x400) == 0 )
  {
    AllocationPriorityClassFromPriority = (unsigned __int8)GetAllocationPriorityClassFromPriority(
                                                             *(unsigned int *)(*(_QWORD *)a6 + 48LL),
                                                             a2,
                                                             v13,
                                                             v22);
    *(_QWORD *)(v21 + 8 * AllocationPriorityClassFromPriority + 264) -= v10;
    if ( (byte_140081241 & 0x20) != 0 )
      McTemplateK0xxpqhu_EtwWriteTransfer(
        *((_WORD *)a6 + 12) & 0x3F,
        &EventVidMmProcessDemotedCommitmentChange,
        AllocationPriorityClassFromPriority);
  }
}
