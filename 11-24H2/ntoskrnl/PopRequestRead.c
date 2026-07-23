/*
 * XREFs of PopRequestRead @ 0x140B5FCCC
 * Callers:
 *     PopDecompressCallback @ 0x140B5E950 (PopDecompressCallback.c)
 *     PopRestoreHiberContext @ 0x140B683FC (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopGetIoLocation @ 0x140B5F010 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x140B5F13C (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x140B61060 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140B61244 (ProducerGetBuffer.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     PopHiberCheckForDebugBreak @ 0x140B6A908 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r14
  unsigned int v5; // r13d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rbp
  ULONG_PTR v8; // rsi
  int v9; // ecx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  unsigned __int64 v14; // rbp
  int v15; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 IoLocation; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r12
  unsigned __int64 v24; // r15
  __int64 v25; // rbp
  char v26; // r15
  int v27; // ebp
  unsigned __int64 v28; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v30; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v31; // [rsp+78h] [rbp+10h]
  unsigned int v32; // [rsp+80h] [rbp+18h]

  result = (unsigned __int64)&retaddr;
  v32 = a3;
  v31 = a2;
  v4 = *(_QWORD *)(BugCheckParameter3 + 352);
  v5 = 0;
  v6 = a3;
  v7 = a2;
  v8 = BugCheckParameter3;
  v30 = 0LL;
  while ( *(_QWORD *)(v8 + 432) )
  {
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
    ++PopWatchdogTimerCount;
    v9 = *(_DWORD *)(v8 + 360);
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        PopHiberChecksumHiberFileData(v8, 0, *(_QWORD *)(v8 + 408), *(_QWORD *)(v8 + 416), *(_QWORD *)(v8 + 392));
        v10 = __rdtsc();
        qword_140F0C0F0 += v10 - *(_QWORD *)(v8 + 368);
        ProducerConsumerBufferComplete(v7, v7 + 32, *(_QWORD *)(v8 + 416), *(unsigned int *)(v8 + 392));
        v11 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v11) << 32;
        qword_140F0C120 += (a2 | (unsigned int)v11) - v10;
        v12 = *(_QWORD *)(v8 + 392);
        v13 = *(_QWORD *)(v8 + 432) == v12;
        *(_QWORD *)(v8 + 432) -= v12;
        if ( v13 )
          *(_QWORD *)(v7 + 32) = *(_QWORD *)(v7 + 40);
        result = *(_QWORD *)(v8 + 384);
        *(_QWORD *)(v8 + 408) += result;
        *(_QWORD *)(v8 + 376) += result;
        *(_QWORD *)(v8 + 384) = 0LL;
        *(_DWORD *)(v8 + 360) = 0;
        continue;
      }
      ++qword_140F0C100;
      v14 = __rdtsc();
      v15 = guard_dispatch_icall_no_overrides(2LL, v8 + 400);
      BugCheckParameter4 = v15;
      if ( v15 < 0 )
      {
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(v8, 0x1F0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v8 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v8, BugCheckParameter4);
      }
      v17 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v17) << 32;
      result = (a2 | (unsigned int)v17) - v14;
      qword_140F0C118 += result;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return result;
    }
    else
    {
      PopHiberCheckForDebugBreak();
      IoLocation = PopGetIoLocation(*(_QWORD *)(v8 + 176), *(_QWORD *)(v8 + 408), &v30);
      v19 = (unsigned __int64)*(unsigned int *)(v8 + 440) << 12;
      *(_QWORD *)(v8 + 400) = IoLocation;
      v20 = *(_QWORD *)(v8 + 432);
      v21 = v19 - *(_QWORD *)(v8 + 376) % v19;
      if ( v21 >= v30 )
        v21 = v30;
      v22 = (unsigned int)v21;
      if ( v21 >= v20 )
        v22 = (unsigned int)v20;
      result = ProducerGetBuffer(v7, (unsigned int)v21, v22, v6);
      v23 = result;
      if ( !result )
        return result;
      *(_QWORD *)(v8 + 416) = result;
      *(_QWORD *)v4 = 0LL;
      *(_DWORD *)(v4 + 40) = v21;
      *(_QWORD *)(v4 + 24) = result;
      *(_WORD *)(v4 + 10) = 1;
      v24 = (v21 + (result & 0xFFF) + 4095) >> 12;
      *(_QWORD *)(v4 + 32) = result & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v4 + 44) = result & 0xFFF;
      *(_WORD *)(v4 + 8) = 8 * (v24 + 6);
      if ( v24 )
      {
        v25 = 0LL;
        do
        {
          ++v5;
          *(_QWORD *)(v4 + 8 * v25 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v23 + (v25 << 12))).QuadPart >> 12;
          v25 = v5;
        }
        while ( v5 < v24 );
        v6 = v32;
      }
      v26 = *(_BYTE *)(v8 + 424);
      v5 = 0;
      *(_QWORD *)(v8 + 368) = __rdtsc();
      v27 = guard_dispatch_icall_no_overrides(v26 != 0, v8 + 400);
      if ( v27 == -1073741637 )
      {
        if ( !v26 )
          goto LABEL_33;
        *(_BYTE *)(v8 + 424) = 0;
        *(_QWORD *)(v8 + 368) = __rdtsc();
        v27 = guard_dispatch_icall_no_overrides(0LL, v8 + 400);
      }
      if ( v27 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_33:
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v8 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v8, v27);
      }
      v28 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v28) << 32;
      qword_140F0C118 += (a2 | (unsigned int)v28) - *(_QWORD *)(v8 + 368);
      result = v21;
      BugCheckParameter3 = *(_QWORD *)(v8 + 432);
      *(_QWORD *)(v8 + 384) = v21;
      if ( v21 >= BugCheckParameter3 )
        result = BugCheckParameter3;
      *(_QWORD *)(v8 + 392) = result;
      if ( v26 && v27 )
      {
        v7 = v31;
        *(_DWORD *)(v8 + 360) = 1;
        continue;
      }
    }
    v7 = v31;
    *(_DWORD *)(v8 + 360) = 2;
  }
  return result;
}
