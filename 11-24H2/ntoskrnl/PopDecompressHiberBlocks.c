/*
 * XREFs of PopDecompressHiberBlocks @ 0x140B5E974
 * Callers:
 *     PopRestoreHiberContext @ 0x140B683FC (PopRestoreHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     RtlDecompressBufferEx @ 0x1403BB360 (RtlDecompressBufferEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x1404F6068 (MmMapMemoryDumpMdlEx2.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x1405EE840 (RtlDecompressBufferProgress.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopReadProducerConsumerBuffer @ 0x140B5FB60 (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140B61060 (ProducerConsumerBufferComplete.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140B61134 (ProducerConsumerCopyFromContextBuffer.c)
 *     PopCheckpointSystemSleep @ 0x140B6889C (PopCheckpointSystemSleep.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140B6A7D4 (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140B6A908 (PopHiberCheckForDebugBreak.c)
 *     BgDisplayProgressIndicator @ 0x140BB2628 (BgDisplayProgressIndicator.c)
 */

__int64 __fastcall PopDecompressHiberBlocks(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, char a4, __int64 a5)
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
  ULONG v26; // edi
  unsigned int v27; // ecx
  unsigned __int64 v28; // rdi
  __int64 v29; // r9
  char *v30; // rdx
  _DWORD *v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // r8
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r13
  unsigned int v36; // eax
  int v37; // eax
  int v38; // ecx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  int v41; // eax
  _BOOL8 v42; // rcx
  unsigned __int64 v43; // rdx
  ULONG FinalUncompressedSize; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v47; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v48; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  unsigned __int64 v52; // [rsp+80h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-78h]
  char *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h]
  __int64 v56; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v57; // [rsp+A8h] [rbp-58h]
  __int16 v58; // [rsp+AAh] [rbp-56h]
  PUCHAR UncompressedBuffer; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h]
  ULONG v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+CCh] [rbp-34h]
  char v63; // [rsp+D0h] [rbp-30h] BYREF
  char v64; // [rsp+150h] [rbp+50h] BYREF

  v51 = a5;
  memset_0(&v56, 0, 0xB0uLL);
  LODWORD(ProducerConsumerBuffer) = (_DWORD)qword_140F0BC28;
  v9 = 0;
  v50 = 0;
  v53 = 0LL;
  FinalUncompressedSize = 0;
  v48 = qword_140F0BC28;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140F0C140 && *(_DWORD *)(BugCheckParameter3 + 208) == KeGetCurrentPrcb()->Number && byte_140F0BBC0 )
      qword_140F0C140 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( *(_DWORD *)(BugCheckParameter3 + 208) == (_DWORD)Number
      && !byte_140F0BBC1
      && (!byte_140F0BBC0 || (unsigned int)dword_140F0BBA4 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_140E65EE2 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140E65EE1 = 1;
      }
      v13 = __rdtsc();
      qword_140F0C128 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
    }
    v47 = 4;
    v14 = ConsumerPeekAndConsumeBuffer((_DWORD)ProducerConsumerBuffer, (unsigned int)&v47, a3, v10, a2);
    v15 = v14;
    if ( !v14 )
      break;
    ProducerConsumerBuffer = (int *)PopReadProducerConsumerBuffer(
                                      v14,
                                      4,
                                      (unsigned int)&v50,
                                      (_DWORD)ProducerConsumerBuffer,
                                      a2,
                                      1);
    v16 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v17 = PopReadProducerConsumerBuffer((int)v15 + 4, v16, (unsigned int)&v64, (_DWORD)v48, a2, 1);
    v19 = &v63;
    v20 = (_QWORD *)v17;
    v21 = *ProducerConsumerBuffer;
    v49 = v15 + v16 + 4LL;
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
    v25 = *(_QWORD *)(a2 + 8);
    v26 = (_DWORD)v22 << 12;
    v55 = v26;
    v56 = 0LL;
    v57 = 8 * (((unsigned __int64)v26 >> 12) + 6);
    v58 = 0;
    v60 = 0LL;
    v62 = 0;
    v61 = v26;
    MmMapMemoryDumpMdlEx2(v25, v18, (__int64)&v56, 1);
    v27 = ((unsigned int)*ProducerConsumerBuffer >> 8) & 0x1FFFFF;
    v52 = __rdtsc();
    v54 = (char *)(v48 + 12);
    if ( v27 == v26 )
    {
      ProducerConsumerBuffer = v48;
      ProducerConsumerCopyFromContextBuffer(UncompressedBuffer, v26, v48, v49);
      *(_QWORD *)(a2 + 72) = __rdtsc() + *(_QWORD *)(a2 + 72) - v52;
      v28 = __rdtsc();
      ProducerConsumerBufferComplete(ProducerConsumerBuffer, ProducerConsumerBuffer + 12, v15, v47);
      *(_QWORD *)(a2 + 80) = __rdtsc() + *(_QWORD *)(a2 + 80) - v28;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(*(_QWORD *)(a2 + 24), v27, v48, v49);
      v29 = v47;
      v30 = v54;
      v49 = __rdtsc();
      v31 = v48;
      *(_QWORD *)(a2 + 72) = v49 + *(_QWORD *)(a2 + 72) - v52;
      ProducerConsumerBufferComplete(v31, v30, v15, v29);
      v32 = __rdtsc();
      v33 = v51;
      *(_QWORD *)(a2 + 80) = v32 + *(_QWORD *)(a2 + 80) - v49;
      if ( v33 )
      {
        guard_dispatch_icall_no_overrides(BugCheckParameter3, (unsigned __int64)HIDWORD(v32) << 32);
        v33 = v51;
        v53 = qword_140F0C118;
      }
      v34 = (unsigned int)*ProducerConsumerBuffer;
      v35 = __rdtsc();
      if ( *(_BYTE *)(BugCheckParameter3 + 490) && ((v36 = (unsigned int)v34 >> 29) == 0 || v36 == 1 || v36 == 4) )
        v37 = RtlDecompressBufferEx(
                *((_WORD *)qword_140029310 + (v34 >> 29)),
                UncompressedBuffer,
                v26,
                *(PUCHAR *)(a2 + 24),
                ((unsigned int)v34 >> 8) & 0x1FFFFF,
                &FinalUncompressedSize,
                *(PVOID *)(a2 + 16));
      else
        v37 = RtlDecompressBufferProgress(
                *((_WORD *)qword_140029310 + (v34 >> 29)),
                (int)UncompressedBuffer,
                v26,
                *(_QWORD *)(a2 + 24),
                ((unsigned int)v34 >> 8) & 0x1FFFFF,
                (__int64)&FinalUncompressedSize,
                *(_QWORD *)(a2 + 16),
                v33,
                BugCheckParameter3);
      v38 = v37;
      v39 = __rdtsc();
      if ( v38 < 0 || FinalUncompressedSize != v26 )
      {
        *(_DWORD *)(BugCheckParameter3 + 204) = -1073741246;
        PopCheckpointSystemSleep(31LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1F0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, BugCheckParameter3, 0LL);
      }
      v40 = v39 + *(_QWORD *)(a2 + 64) - v35;
      *(_QWORD *)(a2 + 64) = v40;
      if ( v51 )
        *(_QWORD *)(a2 + 64) = v53 + v40 - qword_140F0C118;
      v41 = *ProducerConsumerBuffer;
      LODWORD(ProducerConsumerBuffer) = (_DWORD)v48;
      v42 = (v41 & 0xE0000000) >= 0x40000000;
      v43 = v39 - v49;
      *(_QWORD *)(a2 + 8 * v42 + 144) += v55;
      *(_QWORD *)(a2 + 8 * v42 + 128) += v43;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
