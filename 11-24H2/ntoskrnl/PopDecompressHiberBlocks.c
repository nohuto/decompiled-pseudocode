/*
 * XREFs of PopDecompressHiberBlocks @ 0x140B5C904
 * Callers:
 *     PopRestoreHiberContext @ 0x140B662BC (PopRestoreHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     RtlDecompressBufferEx @ 0x14039DAE0 (RtlDecompressBufferEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x1404F8788 (MmMapMemoryDumpMdlEx2.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405CCEA0 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x1405F1200 (RtlDecompressBufferProgress.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopReadProducerConsumerBuffer @ 0x140B5DAE0 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140B5EFE0 (ProducerConsumerBufferComplete.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140B5F0B4 (ProducerConsumerCopyFromContextBuffer.c)
 *     PopCheckpointSystemSleep @ 0x140B6675C (PopCheckpointSystemSleep.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140B690BC (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140B691F0 (PopHiberCheckForDebugBreak.c)
 *     BgDisplayProgressIndicator @ 0x140BB0628 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(ULONG_PTR BugCheckParameter3, _QWORD *a2, int a3, char a4, __int64 a5)
{
  int *ProducerConsumerBuffer; // r12
  unsigned int v9; // esi
  int v10; // r9d
  __int64 Number; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned int v16; // edi
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // r9
  _QWORD *v20; // r8
  int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned int v26; // edi
  unsigned int v27; // ecx
  unsigned __int64 v28; // rdi
  __int64 v29; // r9
  char *v30; // rdx
  _DWORD *v31; // rcx
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // r13
  unsigned int v37; // eax
  int v38; // eax
  int v39; // ecx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  int v42; // eax
  _BOOL8 v43; // rcx
  unsigned __int64 v44; // rdx
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v48; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v49; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v50; // [rsp+68h] [rbp-98h]
  int v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  unsigned __int64 v53; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+88h] [rbp-78h]
  char *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  __int64 v57; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v58; // [rsp+A8h] [rbp-58h]
  __int16 v59; // [rsp+AAh] [rbp-56h]
  __int64 v60; // [rsp+B8h] [rbp-48h]
  __int64 v61; // [rsp+C0h] [rbp-40h]
  unsigned int v62; // [rsp+C8h] [rbp-38h]
  int v63; // [rsp+CCh] [rbp-34h]
  char v64; // [rsp+D0h] [rbp-30h] BYREF
  char v65; // [rsp+150h] [rbp+50h] BYREF

  v52 = a5;
  memset_0(&v57, 0, 0xB0uLL);
  LODWORD(ProducerConsumerBuffer) = (_DWORD)qword_140F0ADE8;
  v9 = 0;
  v51 = 0;
  v54 = 0LL;
  v47 = 0;
  v49 = qword_140F0ADE8;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140F0B500 && *(_DWORD *)(BugCheckParameter3 + 208) == KeGetCurrentPrcb()->Number && byte_140F0AD80 )
      qword_140F0B500 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( *(_DWORD *)(BugCheckParameter3 + 208) == (_DWORD)Number
      && !byte_140F0AD81
      && (!byte_140F0AD80 || (unsigned int)dword_140F0AD64 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_140E65DB0 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140E65DA9 = 1;
      }
      v13 = __rdtsc();
      qword_140F0B4E8 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
    }
    v48 = 4;
    v14 = ConsumerPeekAndConsumeBuffer((_DWORD)ProducerConsumerBuffer, (unsigned int)&v48, a3, v10, (__int64)a2);
    v15 = v14;
    if ( !v14 )
      break;
    ProducerConsumerBuffer = (int *)PopReadProducerConsumerBuffer(
                                      v14,
                                      4,
                                      (unsigned int)&v51,
                                      (_DWORD)ProducerConsumerBuffer,
                                      (__int64)a2,
                                      1);
    v16 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v17 = PopReadProducerConsumerBuffer((int)v15 + 4, v16, (unsigned int)&v65, (_DWORD)v49, (__int64)a2, 1);
    v19 = &v64;
    v20 = (_QWORD *)v17;
    v21 = *ProducerConsumerBuffer;
    v50 = v15 + v16 + 4LL;
    v22 = 0LL;
    if ( (_BYTE)v21 )
    {
      v23 = (unsigned __int8)v21;
      do
      {
        v24 = *v20 >> 4;
        v18 = v24 + (*v20 & 0xFLL) + 1;
        v22 += (*v20 & 0xFLL) + 1;
        while ( v24 < v18 )
        {
          *(_QWORD *)v19 = v24++;
          v19 += 8;
        }
        ++v20;
        --v23;
      }
      while ( v23 );
    }
    if ( v22 > *(unsigned int *)(BugCheckParameter3 + 316) )
    {
      PopCheckpointSystemSleep(31LL);
      PopInternalAddToDumpFile(BugCheckParameter3, 0x1F0u, 0LL);
      KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, BugCheckParameter3, 0LL);
    }
    v25 = a2[1];
    v26 = (_DWORD)v22 << 12;
    v56 = v26;
    v57 = 0LL;
    v58 = 8 * (((unsigned __int64)v26 >> 12) + 6);
    v59 = 0;
    v61 = 0LL;
    v63 = 0;
    v62 = v26;
    MmMapMemoryDumpMdlEx2(v25, v18, (__int64)&v57, 1);
    v27 = ((unsigned int)*ProducerConsumerBuffer >> 8) & 0x1FFFFF;
    v53 = __rdtsc();
    v55 = (char *)(v49 + 12);
    if ( v27 == v26 )
    {
      ProducerConsumerBuffer = v49;
      ProducerConsumerCopyFromContextBuffer(v60, v26, v49, v50);
      a2[9] = __rdtsc() + a2[9] - v53;
      v28 = __rdtsc();
      ProducerConsumerBufferComplete(ProducerConsumerBuffer, ProducerConsumerBuffer + 12, v15, v48);
      a2[10] = __rdtsc() + a2[10] - v28;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(a2[3], v27, v49, v50);
      v29 = v48;
      v30 = v55;
      v50 = __rdtsc();
      v31 = v49;
      a2[9] = v50 + a2[9] - v53;
      ProducerConsumerBufferComplete(v31, v30, v15, v29);
      v33 = __rdtsc();
      v34 = v52;
      a2[10] = v33 + a2[10] - v50;
      if ( v34 )
      {
        guard_dispatch_icall_no_overrides(BugCheckParameter3, (unsigned __int64)HIDWORD(v33) << 32, v34, v32);
        v34 = v52;
        v54 = qword_140F0B4D8;
      }
      v35 = (unsigned int)*ProducerConsumerBuffer;
      v36 = __rdtsc();
      if ( *(_BYTE *)(BugCheckParameter3 + 486) && ((v37 = (unsigned int)v35 >> 29) == 0 || v37 == 1 || v37 == 4) )
        v38 = RtlDecompressBufferEx(
                *((_WORD *)qword_140028E98 + (v35 >> 29)),
                v60,
                v26,
                a2[3],
                ((unsigned int)v35 >> 8) & 0x1FFFFF,
                (__int64)&v47);
      else
        v38 = RtlDecompressBufferProgress(
                *((_WORD *)qword_140028E98 + (v35 >> 29)),
                v60,
                v26,
                a2[3],
                ((unsigned int)v35 >> 8) & 0x1FFFFF,
                (__int64)&v47,
                a2[2],
                v34,
                BugCheckParameter3);
      v39 = v38;
      v40 = __rdtsc();
      if ( v39 < 0 || v47 != v26 )
      {
        *(_DWORD *)(BugCheckParameter3 + 204) = -1073741246;
        PopCheckpointSystemSleep(31LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1F0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, BugCheckParameter3, 0LL);
      }
      v41 = v40 + a2[8] - v36;
      a2[8] = v41;
      if ( v52 )
        a2[8] = v54 + v41 - qword_140F0B4D8;
      v42 = *ProducerConsumerBuffer;
      LODWORD(ProducerConsumerBuffer) = (_DWORD)v49;
      v43 = (v42 & 0xE0000000) >= 0x40000000;
      v44 = v40 - v50;
      a2[v43 + 18] += v56;
      a2[v43 + 16] += v44;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
