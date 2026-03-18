/*
 * XREFs of PopRequestRead @ 0x140B5DC4C
 * Callers:
 *     PopDecompressCallback @ 0x140B5C8E0 (PopDecompressCallback.c)
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopGetIoLocation @ 0x140B5CF94 (PopGetIoLocation.c)
 *     PopHiberChecksumHiberFileData @ 0x140B5D0C0 (PopHiberChecksumHiberFileData.c)
 *     ProducerConsumerBufferComplete @ 0x140B5EFE0 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140B5F1C4 (ProducerGetBuffer.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     PopHiberCheckForDebugBreak @ 0x140B691F0 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall PopRequestRead(ULONG_PTR BugCheckParameter3, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // r14
  unsigned int v6; // r13d
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbp
  ULONG_PTR v9; // rsi
  int v10; // ecx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  unsigned __int64 v15; // rbp
  int v16; // eax
  ULONG_PTR BugCheckParameter4; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 IoLocation; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r12
  unsigned __int64 v26; // r15
  __int64 v27; // rbp
  char v28; // r15
  int v29; // ebp
  unsigned __int64 v30; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v32; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp+10h]
  unsigned int v34; // [rsp+80h] [rbp+18h]

  result = (unsigned __int64)&retaddr;
  v34 = a3;
  v33 = a2;
  v5 = *(_QWORD *)(BugCheckParameter3 + 352);
  v6 = 0;
  v7 = a3;
  v8 = a2;
  v9 = BugCheckParameter3;
  v32 = 0LL;
  while ( *(_QWORD *)(v9 + 432) )
  {
    if ( (PopWatchdogTimerCount & 0x1F) == 0 )
      guard_dispatch_icall_no_overrides(BugCheckParameter3, a2, a3, a4);
    ++PopWatchdogTimerCount;
    v10 = *(_DWORD *)(v9 + 360);
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        PopHiberChecksumHiberFileData(v9, 0, *(_QWORD *)(v9 + 408), *(_QWORD *)(v9 + 416), *(_QWORD *)(v9 + 392));
        v11 = __rdtsc();
        qword_140F0B4B0 += v11 - *(_QWORD *)(v9 + 368);
        ProducerConsumerBufferComplete(v8, v8 + 32, *(_QWORD *)(v9 + 416), *(unsigned int *)(v9 + 392));
        v12 = __rdtsc();
        a2 = (unsigned __int64)HIDWORD(v12) << 32;
        qword_140F0B4E0 += (a2 | (unsigned int)v12) - v11;
        v13 = *(_QWORD *)(v9 + 392);
        v14 = *(_QWORD *)(v9 + 432) == v13;
        *(_QWORD *)(v9 + 432) -= v13;
        if ( v14 )
          *(_QWORD *)(v8 + 32) = *(_QWORD *)(v8 + 40);
        result = *(_QWORD *)(v9 + 384);
        *(_QWORD *)(v9 + 408) += result;
        *(_QWORD *)(v9 + 376) += result;
        *(_QWORD *)(v9 + 384) = 0LL;
        *(_DWORD *)(v9 + 360) = 0;
        continue;
      }
      ++qword_140F0B4C0;
      v15 = __rdtsc();
      v16 = guard_dispatch_icall_no_overrides(2LL, v9 + 400, v5, a4);
      BugCheckParameter4 = v16;
      if ( v16 < 0 )
      {
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(v9, 0x1F0u, 0LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v9 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v9, BugCheckParameter4);
      }
      v18 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v18) << 32;
      result = (a2 | (unsigned int)v18) - v15;
      qword_140F0B4D8 += result;
      if ( (_DWORD)BugCheckParameter4 == 259 )
        return result;
    }
    else
    {
      PopHiberCheckForDebugBreak();
      IoLocation = PopGetIoLocation(*(_QWORD *)(v9 + 176), *(_QWORD *)(v9 + 408), &v32);
      v20 = (unsigned __int64)*(unsigned int *)(v9 + 440) << 12;
      *(_QWORD *)(v9 + 400) = IoLocation;
      v21 = *(_QWORD *)(v9 + 432);
      v22 = v20 - *(_QWORD *)(v9 + 376) % v20;
      if ( v22 >= v32 )
        v22 = v32;
      v23 = (unsigned int)v22;
      if ( v22 >= v21 )
        v23 = (unsigned int)v21;
      result = ProducerGetBuffer(v8, (unsigned int)v22, v23, v7);
      v25 = result;
      if ( !result )
        return result;
      *(_QWORD *)(v9 + 416) = result;
      *(_QWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 40) = v22;
      *(_QWORD *)(v5 + 24) = result;
      *(_WORD *)(v5 + 10) = 1;
      v26 = (v22 + (result & 0xFFF) + 4095) >> 12;
      *(_QWORD *)(v5 + 32) = result & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)(v5 + 44) = result & 0xFFF;
      *(_WORD *)(v5 + 8) = 8 * (v26 + 6);
      if ( v26 )
      {
        v27 = 0LL;
        do
        {
          ++v6;
          *(_QWORD *)(v5 + 8 * v27 + 48) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v25 + (v27 << 12))).QuadPart >> 12;
          v27 = v6;
        }
        while ( v6 < v26 );
        v7 = v34;
      }
      v28 = *(_BYTE *)(v9 + 424);
      v6 = 0;
      *(_QWORD *)(v9 + 368) = __rdtsc();
      v29 = guard_dispatch_icall_no_overrides(v28 != 0, v9 + 400, v5, v24);
      if ( v29 == -1073741637 )
      {
        if ( !v28 )
          goto LABEL_33;
        *(_BYTE *)(v9 + 424) = 0;
        *(_QWORD *)(v9 + 368) = __rdtsc();
        v29 = guard_dispatch_icall_no_overrides(0LL, v9 + 400, v5, a4);
      }
      if ( v29 < 0 || PopSimulateHiberBugcheck == 8 )
      {
LABEL_33:
        PopCheckpointSystemSleep(29LL);
        PopInternalAddToDumpFile(*(_QWORD *)(v9 + 184), 0x178u, 0LL);
        KeBugCheckEx(0xA0u, 0x10AuLL, 0xAuLL, v9, v29);
      }
      v30 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v30) << 32;
      qword_140F0B4D8 += (a2 | (unsigned int)v30) - *(_QWORD *)(v9 + 368);
      result = v22;
      BugCheckParameter3 = *(_QWORD *)(v9 + 432);
      *(_QWORD *)(v9 + 384) = v22;
      if ( v22 >= BugCheckParameter3 )
        result = BugCheckParameter3;
      *(_QWORD *)(v9 + 392) = result;
      if ( v28 && v29 )
      {
        v8 = v33;
        *(_DWORD *)(v9 + 360) = 1;
        continue;
      }
    }
    v8 = v33;
    *(_DWORD *)(v9 + 360) = 2;
  }
  return result;
}
