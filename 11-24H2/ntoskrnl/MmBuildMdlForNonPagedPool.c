/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x140293640
 * Callers:
 *     VslpLockPagesForTransfer @ 0x14025E3AC (VslpLockPagesForTransfer.c)
 *     VslpLockMdlForTransfer @ 0x14025E6AC (VslpLockMdlForTransfer.c)
 *     ?SmCompressCtxCompleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU_SM_WORK_ITEM@1@KKJ@Z @ 0x140383954 (-SmCompressCtxCompleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_CTX@1@PEAU.c)
 *     HalpFlushMapBuffers @ 0x14054D3C8 (HalpFlushMapBuffers.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14058F5E0 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 *     SmKmIssueVolumeIo @ 0x14060BF6C (SmKmIssueVolumeIo.c)
 *     DifMmBuildMdlForNonPagedPoolWrapper @ 0x140631180 (DifMmBuildMdlForNonPagedPoolWrapper.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14070CEF8 (HvlpDynamicUpdateMicrocode.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407AFAA0 (EtwpBuildMdlForTraceBuffer.c)
 *     MiCreateMdl @ 0x14098FB34 (MiCreateMdl.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 * Callees:
 *     MiQueuePinDriverAddressLog @ 0x140293B70 (MiQueuePinDriverAddressLog.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  int v11; // edi
  __int64 v12; // r10
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v22; // rdx
  int v23; // r10d
  __int64 v24; // r8
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // r11
  __int64 i; // rcx
  __int16 v30; // ax
  __int64 v31; // rax
  _KPROCESS *v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  signed __int64 v35; // rax
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
      v11 = 4;
      v12 = 4LL;
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
        v17 = v37[v12--];
        --v11;
        v18 = *(_QWORD *)v17;
        if ( v17 >= 0xFFFFF6FB7DBED000uLL && v17 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v19 = *(_QWORD *)v17;
          if ( (v18 & 1) == 0 )
            goto LABEL_10;
          if ( ((v18 & 0x42) == 0 || (v18 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v22 = *(_QWORD *)(KernelWaitTime + 8 * ((v17 >> 3) & 0x1FF));
                if ( (v22 & 0x20) != 0 )
                  LOBYTE(v19) = v18 | 0x20;
                LOBYTE(v18) = v19 | 0x42;
                if ( (v22 & 0x42) == 0 )
                  LOBYTE(v18) = v19;
              }
            }
          }
        }
        if ( (v18 & 1) == 0 )
          goto LABEL_10;
        if ( (v18 & 0x80u) != 0LL )
          break;
        if ( v12 == 1 )
          goto LABEL_10;
      }
      if ( !v11 )
      {
LABEL_10:
        BugCheckParameter4 = *(_QWORD *)v8;
        if ( v13 < 0xFFFF800000000000uLL )
        {
          v10 = 0;
          v40 = 0;
        }
        else
        {
          v10 = byte_140E38AE8[((v13 >> 39) & 0x1FF) - 256];
          v40 = v10;
          if ( v10 == 4 )
          {
            v7 = 3;
            v40 = 4;
LABEL_13:
            v2 = v41;
            goto LABEL_14;
          }
        }
        v7 = 2;
        goto LABEL_13;
      }
      v23 = 4;
      v38[1] = v14;
      v24 = 4LL;
      v38[2] = v15;
      v38[3] = v16;
      v38[4] = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      do
      {
        v25 = v38[v24--];
        --v23;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL && v25 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          v27 = *(_QWORD *)v25;
          if ( (v26 & 1) != 0 && ((v26 & 0x42) == 0 || (v26 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
          {
            v32 = KeGetCurrentThread()->ApcState.Process;
            if ( v32->AddressPolicy != 1 )
            {
              v33 = v32[2].KernelWaitTime;
              if ( v33 )
              {
                v34 = *(_QWORD *)(v33 + 8 * ((v25 >> 3) & 0x1FF));
                if ( (v34 & 0x20) != 0 )
                  v27 = v26 | 0x20;
                v26 = v27 | 0x42;
                if ( (v34 & 0x42) == 0 )
                  v26 = v27;
              }
            }
          }
        }
      }
      while ( v24 && (v26 & 0x80u) == 0LL );
      v4 = MemoryDescriptorList;
      v5 = (v26 >> 12) & 0xFFFFFFFFFFLL;
      if ( v24 )
      {
        v28 = v13 >> 12;
        for ( i = 1LL; v23; --v23 )
        {
          v30 = v28;
          v28 >>= 9;
          v31 = i * (v30 & 0x1FF);
          i <<= 9;
          v5 += v31;
        }
      }
      v7 = 1;
      goto LABEL_42;
    }
    if ( v7 < 2 )
      goto LABEL_44;
LABEL_14:
    if ( (BugCheckParameter4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)v4, v8, BugCheckParameter4);
    if ( v7 == 3 )
    {
      v35 = *(_QWORD *)v8;
      if ( (*(_QWORD *)v8 & 0x200LL) == 0 )
      {
        do
        {
          if ( (MiFlags & 0x2000000) != 0 )
            _mm_lfence();
          v36 = v35;
          v35 = _InterlockedCompareExchange64((volatile signed __int64 *)v8, v35 | 0x220, v35);
        }
        while ( v36 != v35 && (v35 & 0x200) == 0 );
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
LABEL_42:
      v10 = v40;
      v2 = v41;
    }
    v9 = v42;
LABEL_44:
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
