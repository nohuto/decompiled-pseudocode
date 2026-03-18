/*
 * XREFs of PopRequestWrite @ 0x140B5E080
 * Callers:
 *     PopCompressCallback @ 0x140B5C5E0 (PopCompressCallback.c)
 *     PopWriteHiberImage @ 0x140B5E8E0 (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     MmGetNumberOfPhysicalPages @ 0x14045F260 (MmGetNumberOfPhysicalPages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ConsumerGetBuffer @ 0x140B5C2A8 (ConsumerGetBuffer.c)
 *     PopGetIoLocation @ 0x140B5CF94 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B5D024 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopHiberChecksumHiberFileData @ 0x140B5D0C0 (PopHiberChecksumHiberFileData.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140B5DB54 (PopRecordHibernateDiagnosticInfo.c)
 *     ProducerConsumerBufferComplete @ 0x140B5EFE0 (ProducerConsumerBufferComplete.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  char v6; // bl
  __int64 v7; // r14
  ULONG_PTR v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 IoLocation; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  unsigned __int64 Buffer; // rax
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rdi
  __int64 v28; // r15
  unsigned __int64 v29; // r13
  ULONG_PTR v30; // rbp
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // rbp
  unsigned __int64 v33; // rax
  unsigned __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  __int64 v36; // [rsp+38h] [rbp-60h]
  ULONG MaxDataSize[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v40; // [rsp+A8h] [rbp+10h]
  char v41; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v42; // [rsp+B8h] [rbp+20h] BYREF

  v41 = a3;
  v40 = a2;
  v4 = *(_QWORD *)(BugCheckParameter3 + 352);
  RemainingHibernateRangeDataSize = 0LL;
  v6 = a3;
  *(_QWORD *)MaxDataSize = 0LL;
  v7 = a2;
  v42 = 0LL;
  v8 = BugCheckParameter3;
  v36 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = *(unsigned int *)(v8 + 360);
      if ( !(_DWORD)v9 )
        break;
      v10 = __rdtsc();
      v11 = v10;
      if ( (_DWORD)v9 == 1 )
      {
        BugCheckParameter4 = (int)guard_dispatch_icall_no_overrides(2LL, v8 + 400, v4, 0LL);
        v15 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v15) << 32;
        qword_140F0B380 += (a2 | (unsigned int)v15) - v11;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21LL);
          PopInternalAddToDumpFile(v8, 0x1F0u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(v8 + 184), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v8, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return RemainingHibernateRangeDataSize;
        *(_DWORD *)(v8 + 360) = 2;
      }
      else
      {
        qword_140F0B378 += v10 - *(_QWORD *)(v8 + 368);
        ProducerConsumerBufferComplete(v7, v7 + 48, *(_QWORD *)(v8 + 416), *(unsigned int *)(v8 + 392));
        v12 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v12) << 32;
        qword_140F0B3A8 += (a2 | (unsigned int)v12) - v11;
        qword_140F0B550 += *(_QWORD *)(v8 + 392);
        dword_140F0B558 += (unsigned __int64)(*(_QWORD *)(v8 + 384) + 4095LL) >> 12;
        v13 = *(_QWORD *)(v8 + 384);
        *(_QWORD *)(v8 + 408) += v13;
        *(_QWORD *)(v8 + 376) += v13;
        *(_QWORD *)(v8 + 384) = 0LL;
        *(_DWORD *)(v8 + 360) = 0;
      }
    }
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      guard_dispatch_icall_no_overrides(v9, a2, a3, a4);
    v16 = *(_QWORD *)(v8 + 408);
    v17 = *(_QWORD *)(v8 + 176);
    ++PopWatchdogTimerCount;
    IoLocation = PopGetIoLocation(v17, v16, &v42);
    v19 = *(unsigned int *)(v8 + 440);
    *(_QWORD *)(v8 + 400) = IoLocation;
    v20 = (v19 << 12) - *(_QWORD *)(v8 + 376) % (unsigned __int64)(v19 << 12);
    v35 = v20;
    if ( v20 >= v42 )
    {
      v35 = v42;
      v20 = v42;
    }
    Buffer = ConsumerGetBuffer(v7, (unsigned int *)&v35, v6);
    v22 = Buffer;
    if ( !Buffer )
      break;
    v23 = *(_QWORD *)(v8 + 408);
    v24 = v35;
    *(_QWORD *)(v8 + 416) = Buffer;
    *(_QWORD *)(v8 + 392) = v24;
    if ( v23 + v20 > qword_140F0AD50 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v8 + 200) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(v8);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v8);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140F0AD50, *(unsigned int *)(v8 + 200), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(v8, 1, v23, Buffer, v24);
    a3 = 4095LL;
    *(_WORD *)(v4 + 10) = 1;
    *(_QWORD *)v4 = 0LL;
    *(_DWORD *)(v4 + 40) = v20;
    *(_QWORD *)(v4 + 24) = v22;
    *(_DWORD *)(v4 + 44) = v22 & 0xFFF;
    v25 = (v20 + (v22 & 0xFFF) + 4095) >> 12;
    v26 = 0;
    v38 = v25;
    *(_WORD *)(v4 + 8) = 8 * (v25 + 6);
    *(_QWORD *)(v4 + 32) = v22 & 0xFFFFFFFFFFFFF000uLL;
    if ( v25 )
    {
      v27 = v36;
      v28 = 0LL;
      do
      {
        ++v26;
        *(_QWORD *)(v27 + 8 * v28 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v22 + (v28 << 12))).QuadPart >> 12;
        v28 = v26;
      }
      while ( v26 < (v20 + (v22 & 0xFFF) + 4095) >> 12 );
      v6 = v41;
      v8 = BugCheckParameter3;
      v4 = v36;
    }
    *(_QWORD *)(v8 + 384) = v20;
    if ( !*(_BYTE *)(v8 + 424) )
      goto LABEL_25;
    v29 = __rdtsc();
    v30 = (int)guard_dispatch_icall_no_overrides(1LL, v8 + 400, v4, 0LL);
    v31 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v31) << 32;
    qword_140F0B380 += (a2 | (unsigned int)v31) - v29;
    if ( (_DWORD)v30 == -1073741637 )
    {
      *(_BYTE *)(v8 + 424) = 0;
    }
    else
    {
      if ( (v30 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(v8, 0x1F0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v8 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v8, v30);
      }
      *(_DWORD *)(v8 + 360) = ((_DWORD)v30 != 259) + 1;
    }
    if ( !*(_BYTE *)(v8 + 424) )
    {
LABEL_25:
      v29 = __rdtsc();
      v32 = (int)guard_dispatch_icall_no_overrides(v8 + 400, v4, a3, a4);
      v33 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v33) << 32;
      qword_140F0B380 += (a2 | (unsigned int)v33) - v29;
      if ( (v32 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(v8, 0x1F0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v8 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v8, v32);
      }
      *(_DWORD *)(v8 + 360) = 2;
    }
    v7 = v40;
    *(_QWORD *)(v8 + 368) = v29;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v35 == 0;
  return RemainingHibernateRangeDataSize;
}
