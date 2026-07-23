/*
 * XREFs of PopRequestWrite @ 0x140B60100
 * Callers:
 *     PopCompressCallback @ 0x140B5E650 (PopCompressCallback.c)
 *     PopWriteHiberImage @ 0x140B60960 (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ConsumerGetBuffer @ 0x140B5E318 (ConsumerGetBuffer.c)
 *     PopGetIoLocation @ 0x140B5F010 (PopGetIoLocation.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B5F0A0 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopHiberChecksumHiberFileData @ 0x140B5F13C (PopHiberChecksumHiberFileData.c)
 *     PopRecordHibernateDiagnosticInfo @ 0x140B5FBD4 (PopRecordHibernateDiagnosticInfo.c)
 *     ProducerConsumerBufferComplete @ 0x140B61060 (ProducerConsumerBufferComplete.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 */

char __fastcall PopRequestWrite(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, char a3)
{
  __int64 v3; // r15
  ULONG_PTR RemainingHibernateRangeDataSize; // rsi
  char v5; // bl
  __int64 v6; // r14
  ULONG_PTR v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 IoLocation; // rax
  __int64 v18; // rbp
  unsigned __int64 v19; // rbp
  unsigned __int64 Buffer; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int v25; // r12d
  __int64 v26; // rdi
  __int64 v27; // r15
  unsigned __int64 v28; // r13
  ULONG_PTR v29; // rbp
  unsigned __int64 v30; // rax
  ULONG_PTR v31; // rbp
  unsigned __int64 v32; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-68h] BYREF
  __int64 v35; // [rsp+38h] [rbp-60h]
  ULONG MaxDataSize[2]; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v41; // [rsp+B8h] [rbp+20h] BYREF

  v39 = a2;
  v3 = *(_QWORD *)(BugCheckParameter3 + 352);
  RemainingHibernateRangeDataSize = 0LL;
  v5 = a3;
  *(_QWORD *)MaxDataSize = 0LL;
  v6 = a2;
  v41 = 0LL;
  v7 = BugCheckParameter3;
  v35 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(unsigned int *)(v7 + 360);
      if ( !(_DWORD)v8 )
        break;
      v9 = __rdtsc();
      v10 = v9;
      if ( (_DWORD)v8 == 1 )
      {
        BugCheckParameter4 = (int)guard_dispatch_icall_no_overrides(2LL, v7 + 400);
        v14 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v14) << 32;
        qword_140F0BFC0 += (a2 | (unsigned int)v14) - v10;
        if ( (BugCheckParameter4 & 0x80000000) != 0LL )
        {
          PopCheckpointSystemSleep(21LL);
          PopInternalAddToDumpFile(v7, 0x1F0u, 0LL);
          PopInternalAddToDumpFile(*(_QWORD *)(v7 + 184), 0x178u, 0LL);
          KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, BugCheckParameter4);
        }
        if ( (_DWORD)BugCheckParameter4 == 259 )
          return RemainingHibernateRangeDataSize;
        *(_DWORD *)(v7 + 360) = 2;
      }
      else
      {
        qword_140F0BFB8 += v9 - *(_QWORD *)(v7 + 368);
        ProducerConsumerBufferComplete(v6, v6 + 48, *(_QWORD *)(v7 + 416), *(unsigned int *)(v7 + 392));
        v11 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v11) << 32;
        qword_140F0BFE8 += (a2 | (unsigned int)v11) - v10;
        qword_140F0C190 += *(_QWORD *)(v7 + 392);
        dword_140F0C198 += (unsigned __int64)(*(_QWORD *)(v7 + 384) + 4095LL) >> 12;
        v12 = *(_QWORD *)(v7 + 384);
        *(_QWORD *)(v7 + 408) += v12;
        *(_QWORD *)(v7 + 376) += v12;
        *(_QWORD *)(v7 + 384) = 0LL;
        *(_DWORD *)(v7 + 360) = 0;
      }
    }
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      guard_dispatch_icall_no_overrides(v8, a2);
    v15 = *(_QWORD *)(v7 + 408);
    v16 = *(_QWORD *)(v7 + 176);
    ++PopWatchdogTimerCount;
    IoLocation = PopGetIoLocation(v16, v15, &v41);
    v18 = *(unsigned int *)(v7 + 440);
    *(_QWORD *)(v7 + 400) = IoLocation;
    v19 = (v18 << 12) - *(_QWORD *)(v7 + 376) % (unsigned __int64)(v18 << 12);
    v34 = v19;
    if ( v19 >= v41 )
    {
      v34 = v41;
      v19 = v41;
    }
    Buffer = ConsumerGetBuffer(v6, (unsigned int *)&v34, v5);
    v21 = Buffer;
    if ( !Buffer )
      break;
    v22 = *(_QWORD *)(v7 + 408);
    v23 = v34;
    *(_QWORD *)(v7 + 416) = Buffer;
    *(_QWORD *)(v7 + 392) = v23;
    if ( v22 + v19 > qword_140F0BB90 )
    {
      PopCheckpointSystemSleep(22LL);
      if ( (unsigned int)(*(_DWORD *)(v7 + 200) - 4) <= 1 )
        RemainingHibernateRangeDataSize = PopGetRemainingHibernateRangeDataSize(v7);
      *(_QWORD *)MaxDataSize = MmGetNumberOfPhysicalPages(0);
      IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)8);
      PopRecordHibernateDiagnosticInfo(v7);
      IoAddTriageDumpDataBlock((ULONG)&PopHibernateDiagnosticInfo, (PVOID)0x80);
      KeBugCheckEx(0xA0u, 0xBuLL, qword_140F0BB90, *(unsigned int *)(v7 + 200), RemainingHibernateRangeDataSize);
    }
    PopHiberChecksumHiberFileData(v7, 1, v22, Buffer, v23);
    *(_WORD *)(v3 + 10) = 1;
    *(_QWORD *)v3 = 0LL;
    *(_DWORD *)(v3 + 40) = v19;
    *(_QWORD *)(v3 + 24) = v21;
    *(_DWORD *)(v3 + 44) = v21 & 0xFFF;
    v24 = (v19 + (v21 & 0xFFF) + 4095) >> 12;
    v25 = 0;
    v37 = v24;
    *(_WORD *)(v3 + 8) = 8 * (v24 + 6);
    *(_QWORD *)(v3 + 32) = v21 & 0xFFFFFFFFFFFFF000uLL;
    if ( v24 )
    {
      v26 = v35;
      v27 = 0LL;
      do
      {
        ++v25;
        *(_QWORD *)(v26 + 8 * v27 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v21 + (v27 << 12))).QuadPart >> 12;
        v27 = v25;
      }
      while ( v25 < (v19 + (v21 & 0xFFF) + 4095) >> 12 );
      v5 = a3;
      v7 = BugCheckParameter3;
      v3 = v35;
    }
    *(_QWORD *)(v7 + 384) = v19;
    if ( !*(_BYTE *)(v7 + 424) )
      goto LABEL_25;
    v28 = __rdtsc();
    v29 = (int)guard_dispatch_icall_no_overrides(1LL, v7 + 400);
    v30 = __rdtsc();
    a2 = (unsigned __int64)HIDWORD(v30) << 32;
    qword_140F0BFC0 += (a2 | (unsigned int)v30) - v28;
    if ( (_DWORD)v29 == -1073741637 )
    {
      *(_BYTE *)(v7 + 424) = 0;
    }
    else
    {
      if ( (v29 & 0x80000000) != 0LL || PopSimulateHiberBugcheck == 2 )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(v7, 0x1F0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v7 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, v29);
      }
      *(_DWORD *)(v7 + 360) = ((_DWORD)v29 != 259) + 1;
    }
    if ( !*(_BYTE *)(v7 + 424) )
    {
LABEL_25:
      v28 = __rdtsc();
      v31 = (int)guard_dispatch_icall_no_overrides(v7 + 400, v3);
      v32 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v32) << 32;
      qword_140F0BFC0 += (a2 | (unsigned int)v32) - v28;
      if ( (v31 & 0x80000000) != 0LL )
      {
        PopCheckpointSystemSleep(21LL);
        PopInternalAddToDumpFile(v7, 0x1F0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v7 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v7, v31);
      }
      *(_DWORD *)(v7 + 360) = 2;
    }
    v6 = v39;
    *(_QWORD *)(v7 + 368) = v28;
  }
  LOBYTE(RemainingHibernateRangeDataSize) = v34 == 0;
  return RemainingHibernateRangeDataSize;
}
