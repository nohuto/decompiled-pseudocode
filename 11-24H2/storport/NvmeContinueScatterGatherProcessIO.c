/*
 * XREFs of NvmeContinueScatterGatherProcessIO @ 0x14011C250
 * Callers:
 *     <none>
 * Callees:
 *     AllocateNewNVMePrpListBufferEntry @ 0x140119600 (AllocateNewNVMePrpListBufferEntry.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x14011A100 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeChainedIoSplitContext @ 0x14011A240 (FreeNVMeChainedIoSplitContext.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeSendSplitIo @ 0x140124340 (NvmeSendSplitIo.c)
 *     NvmeSubmitIoToSQ @ 0x140126050 (NvmeSubmitIoToSQ.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeContinueScatterGatherProcessIO(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 *v5; // rdi
  char v7; // r10
  IRP *v8; // rbp
  __int64 v9; // r14
  _QWORD *v10; // r13
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  char v14; // r10
  __int64 v15; // r11
  __int64 v16; // rax
  int v17; // r9d
  _MDL *MdlAddress; // rax
  PSLIST_ENTRY v19; // rax
  __int64 NewNVMePrpListBufferEntry; // rax
  int v21; // r15d
  __int64 v22; // r8
  unsigned __int16 *v23; // rax
  __int64 QuadPart; // rbx
  int v25; // esi
  bool v26; // zf
  char v27; // bl
  KIRQL v28; // r13
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v35; // rcx
  __int64 v36; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v37; // rcx
  __int64 v38; // rcx
  char v39[4]; // [rsp+60h] [rbp-68h] BYREF
  int v40; // [rsp+64h] [rbp-64h]
  int v41; // [rsp+68h] [rbp-60h]
  __int64 v42; // [rsp+70h] [rbp-58h]
  __int64 v43; // [rsp+78h] [rbp-50h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  _QWORD *v45; // [rsp+88h] [rbp-40h]
  char v46; // [rsp+D0h] [rbp+8h]
  char v48; // [rsp+E8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(__int64 **)(a4 + 32);
  v7 = *(_BYTE *)(a4 + 126);
  v8 = *(IRP **)(a4 + 40);
  v9 = *(unsigned int *)(a4 + 120);
  v10 = (_QWORD *)v5[2];
  v11 = *(_QWORD *)(a4 + 64);
  v12 = *(_QWORD *)(a4 + 72);
  v45 = v10;
  v44 = v4;
  v39[0] = 0;
  v48 = 0;
  *(_QWORD *)(a4 + 24) = a3;
  if ( (v7 & 2) != 0 )
  {
    v48 = 1;
    v13 = NvmeSendSplitIo(*(_QWORD *)(a4 + 88), v9, v12, v11, (__int64)v39, 0LL, 0LL, 0LL, 1);
    goto LABEL_13;
  }
  v14 = v7 & 1;
  v15 = *(unsigned int *)(a4 + 116);
  v41 = *(_DWORD *)(a4 + 112);
  v42 = *(_QWORD *)(a4 + 104);
  v16 = *(_QWORD *)(a4 + 96);
  v17 = 0;
  v43 = v16;
  MdlAddress = v8->MdlAddress;
  v46 = v14;
  v40 = v15;
  if ( ((v15 + 4095 + ((LODWORD(MdlAddress->StartVa) + MdlAddress->ByteOffset) & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL) <= 0x2000 )
  {
LABEL_8:
    if ( !v11 )
    {
      v22 = v5[2];
      if ( (*(_BYTE *)(v22 + 136) & 2) != 0 )
        v12 = *(_QWORD *)(v22 + 728) + 192 * v9;
      else
        LODWORD(v12) = 192 * *(unsigned __int16 *)(*(_QWORD *)(v22 + 872) + 2 * v9) + *(_DWORD *)(v22 + 728) - 192;
    }
    v13 = NvmeSubmitIoToSQ((_DWORD)v5, (_DWORD)v8, v12, v17, v9, 0, v15, v43, v42, v41, v14, v11);
LABEL_13:
    v21 = v13;
    if ( v13 == 259 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v19 = ExpInterlockedPopEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(v5[2] + 880) + 8 * v9));
  v17 = (int)v19;
  if ( v19
    || (NewNVMePrpListBufferEntry = AllocateNewNVMePrpListBufferEntry(v5[2], v9),
        v17 = NewNVMePrpListBufferEntry,
        NewNVMePrpListBufferEntry) )
  {
    LODWORD(v15) = v40;
    v14 = v46;
    goto LABEL_8;
  }
  NvmeNamespaceQueueIo(v5, v8, (unsigned int)v9);
  v21 = -2147483631;
LABEL_14:
  v23 = *(unsigned __int16 **)(a4 + 64);
  if ( v23 )
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a4 + 72) + 64LL),
      (PSLIST_ENTRY)(*(_QWORD *)(*(_QWORD *)(a4 + 72) + 32LL) + ((unsigned __int64)*v23 << 7)));
LABEL_16:
  if ( (int)(v21 + 0x80000000) >= 0 && v21 != -2147483631 )
  {
    if ( v48 )
    {
      if ( !v39[0] )
        return;
      QuadPart = v8->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
      v25 = *(_DWORD *)(QuadPart + 112);
      FreeAllSglAndContextInChainedSplitIoContext(v10, QuadPart);
      FreeNVMeChainedIoSplitContext((__int64)v10, v9, QuadPart, (__int64)v8);
      v26 = FeatureFixFUAForReadIoPerf == 0;
      v8->IoStatus.Information = 0LL;
      if ( !v26 && IoGetIoPriorityHint(v8) > IoPriorityLow )
        _InterlockedDecrement(*(volatile signed __int32 **)(v5[85] + 8 * v9));
      v8->IoStatus.Status = v25;
    }
    else
    {
      v27 = *(_BYTE *)(a4 + 126);
      v28 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(_QWORD, __int64, bool))(*(_QWORD *)(*(_QWORD *)(v44 + 1144) + 8LL) + 96LL))(
        *(_QWORD *)(v44 + 1144),
        a3,
        (v27 & 1) == 0);
      if ( v28 < 2u )
        KeLowerIrql(v28);
      v29 = *(_QWORD *)(*(_QWORD *)(a4 + 40) + 184LL);
      *(_QWORD *)(v29 + 8) = *(_QWORD *)(a4 + 48);
      *(_QWORD *)(v29 + 24) = *(_QWORD *)(a4 + 56);
      v30 = *(unsigned int *)(a4 + 120);
      v31 = v45;
      *(_QWORD *)(a4 + 24) = 0LL;
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_BYTE *)(a4 + 126) = 0;
      ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(v31[112] + 8 * v30), (PSLIST_ENTRY)a4);
      v26 = FeatureFixFUAForReadIoPerf == 0;
      v8->IoStatus.Information = 0LL;
      if ( !v26 && IoGetIoPriorityHint(v8) > IoPriorityLow )
        _InterlockedDecrement(*(volatile signed __int32 **)(v5[85] + 8 * v9));
      v8->IoStatus.Status = v21;
    }
    IofCompleteRequest(v8, 0);
    v32 = v5[16];
    if ( !*(_BYTE *)v32
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v32 + 24) + 8 * v9), 0xFFFFFFFF) == 1 )
    {
      v33 = *(_QWORD *)(v5[2] + 128);
      v34 = v5[16];
      if ( v34 )
      {
        if ( *(_QWORD *)(v34 + 8) )
        {
          v35 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v34 + 40);
          if ( v35 )
          {
            if ( ExAcquireRundownProtectionCacheAware(v35) )
            {
              PoFxIdleComponent(**(_QWORD **)(v5[16] + 8), 0LL, 2LL);
              v36 = v5[16];
              if ( v36 )
              {
                if ( *(_QWORD *)(v36 + 8) )
                {
                  v37 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v36 + 40);
                  if ( v37 )
                    ExReleaseRundownProtectionCacheAware(v37);
                }
              }
            }
          }
        }
      }
      v38 = *(_QWORD *)(v33 + 160);
      if ( *(_BYTE *)v38 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v38 + 8), 0LL, 2LL);
    }
  }
}
