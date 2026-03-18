/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x1402AB660
 * Callers:
 *     VslpLockPagesForTransfer @ 0x1402D3E38 (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x1402D4138 (VslpLockMdlForTransfer.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x1403A142C (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     HalpFlushMapBuffers @ 0x14054D128 (HalpFlushMapBuffers.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058ED8C (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     SmKmIssueVolumeIo @ 0x140601980 (SmKmIssueVolumeIo.c)
 *     DifMmBuildMdlForNonPagedPoolWrapper @ 0x140626C00 (DifMmBuildMdlForNonPagedPoolWrapper.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140703488 (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407A0280 (EtwpBuildMdlForTraceBuffer.c)
 *     MiCreateMdl @ 0x140A2A938 (MiCreateMdl.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A62AD8 (MiReplaceRotateWithDemandZero.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 * Callees:
 *     MiQueuePinDriverAddressLog @ 0x1402ABB78 (MiQueuePinDriverAddressLog.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // rsi
  PMDL v2; // r8
  char *v3; // rdx
  PMDL v4; // r14
  __int64 v5; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  int v7; // ebp
  ULONG_PTR v8; // rsi
  ULONG_PTR v9; // rax
  int v10; // ecx
  __int64 v11; // rdi
  int v12; // r10d
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  signed __int64 v19; // rax
  int v20; // r10d
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r11
  __int64 i; // rcx
  __int16 v26; // ax
  __int64 v27; // rax
  __int64 v28; // rax
  _KPROCESS *v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v35; // rdx
  signed __int64 v36; // rtt
  _QWORD v37[4]; // [rsp+28h] [rbp-90h]
  _QWORD v38[6]; // [rsp+48h] [rbp-70h]
  int v40; // [rsp+C8h] [rbp+10h]
  PMDL v41; // [rsp+D0h] [rbp+18h]
  ULONG_PTR v42; // [rsp+D8h] [rbp+20h]

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  v41 = MemoryDescriptorList + 1;
  v4 = MemoryDescriptorList;
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v3;
  v5 = -1LL;
  BugCheckParameter4 = 0LL;
  v7 = 0;
  v8 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = v8 + 8 * ((((unsigned __int16)v3 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  v10 = 0;
  v40 = 0;
  v42 = v9;
  while ( v8 < v9 )
  {
    if ( !v7 )
    {
      v11 = 4LL;
      v12 = 4;
      v13 = (__int64)(v8 << 25) >> 16;
      v14 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v37[1] = v14;
      v15 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v37[2] = v15;
      v16 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v37[3] = v16;
      v38[0] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      while ( 1 )
      {
        v17 = v37[v11--];
        --v12;
        v18 = *(_QWORD *)v17;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v32 = *(_QWORD *)v17;
          if ( (v18 & 1) == 0 )
            goto LABEL_9;
          if ( ((v18 & 0x42) == 0 || (v18 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v35 = *(_QWORD *)(KernelWaitTime + 8 * ((v17 >> 3) & 0x1FF));
                if ( (v35 & 0x20) != 0 )
                  LOBYTE(v32) = v18 | 0x20;
                LOBYTE(v18) = v32 | 0x42;
                if ( (v35 & 0x42) == 0 )
                  LOBYTE(v18) = v32;
              }
            }
          }
        }
        if ( (v18 & 1) == 0 )
          goto LABEL_9;
        if ( (v18 & 0x80u) != 0LL )
          break;
        if ( v11 == 1 )
          goto LABEL_9;
      }
      if ( !v12 )
      {
LABEL_9:
        BugCheckParameter4 = *(_QWORD *)v8;
        if ( v13 < 0xFFFF800000000000uLL )
        {
          v10 = 0;
          v40 = 0;
        }
        else
        {
          v10 = byte_140E38768[((v13 >> 39) & 0x1FF) - 256];
          v40 = v10;
          if ( v10 == 4 )
          {
            v7 = 3;
            v40 = 4;
LABEL_12:
            v2 = v41;
            goto LABEL_13;
          }
        }
        v7 = 2;
        goto LABEL_12;
      }
      v20 = 4;
      v38[1] = v14;
      v21 = 4LL;
      v38[2] = v15;
      v38[3] = v16;
      v38[4] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v22 = v38[v21--];
        --v20;
        v23 = *(_QWORD *)v22;
        if ( v22 >= 0xFFFFF6FB7DBED000uLL && v22 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v28 = *(_QWORD *)v22;
          if ( (v23 & 1) != 0 && ((v23 & 0x42) == 0 || (v23 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            v29 = KeGetCurrentThread()->ApcState.Process;
            if ( v29->AddressPolicy != 1 )
            {
              v30 = v29[2].KernelWaitTime;
              if ( v30 )
              {
                v31 = *(_QWORD *)(v30 + 8 * ((v22 >> 3) & 0x1FF));
                if ( (v31 & 0x20) != 0 )
                  v28 = v23 | 0x20;
                v23 = v28 | 0x42;
                if ( (v31 & 0x42) == 0 )
                  v23 = v28;
              }
            }
          }
        }
      }
      while ( v21 && (v23 & 0x80u) == 0LL );
      v4 = MemoryDescriptorList;
      v5 = (v23 >> 12) & 0xFFFFFFFFFFLL;
      if ( v21 )
      {
        v24 = v13 >> 12;
        for ( i = 1LL; v20; --v20 )
        {
          v26 = v24;
          v24 >>= 9;
          v27 = i * (v26 & 0x1FF);
          i <<= 9;
          v5 += v27;
        }
      }
      v7 = 1;
      goto LABEL_33;
    }
    if ( v7 < 2 )
      goto LABEL_35;
LABEL_13:
    if ( (BugCheckParameter4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)v4, v8, BugCheckParameter4);
    if ( v7 == 3 )
    {
      v19 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 0x200LL) == 0 )
      {
        do
        {
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v36 = v19;
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v19 | 0x220, v19);
        }
        while ( v36 != v19 && (v19 & 0x200) == 0 );
        v10 = v40;
      }
    }
    BugCheckParameter4 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)v4, v8, *(_QWORD *)v8);
    v5 = (BugCheckParameter4 >> 12) & 0xFFFFFFFFFFLL;
    if ( v10 == 11 )
    {
      MiQueuePinDriverAddressLog((__int64)(v8 << 25) >> 16, *(_QWORD *)v8, 1LL);
LABEL_33:
      v10 = v40;
      v2 = v41;
    }
    v9 = v42;
LABEL_35:
    v2->Next = (struct _MDL *)v5;
    v8 += 8LL;
    v2 = (PMDL)((char *)v2 + 8);
    v41 = v2;
    if ( (v8 & 0xFFF) != 0 )
    {
      if ( v7 == 1 )
        ++v5;
    }
    else
    {
      v7 = 0;
    }
  }
  v4->MdlFlags |= 4u;
}
