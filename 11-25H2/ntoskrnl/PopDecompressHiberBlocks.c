/*
 * XREFs of PopDecompressHiberBlocks @ 0x140B4C904
 * Callers:
 *     PopRestoreHiberContext @ 0x140B561BC (PopRestoreHiberContext.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     RtlDecompressBufferEx @ 0x1403CCA50 (RtlDecompressBufferEx.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x1404F5FD4 (MmMapMemoryDumpMdlEx2.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405C8990 (PopInternalAddToDumpFile.c)
 *     RtlDecompressBufferProgress @ 0x1405E4EB0 (RtlDecompressBufferProgress.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopReadProducerConsumerBuffer @ 0x140B4DA1C (PopReadProducerConsumerBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x140B4EEAC (ProducerConsumerBufferComplete.c)
 *     ProducerConsumerCopyFromContextBuffer @ 0x140B4EF80 (ProducerConsumerCopyFromContextBuffer.c)
 *     PopCheckpointSystemSleep @ 0x140B5692C (PopCheckpointSystemSleep.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140B5928C (ConsumerPeekAndConsumeBuffer.c)
 *     PopHiberCheckForDebugBreak @ 0x140B593C0 (PopHiberCheckForDebugBreak.c)
 *     BgDisplayProgressIndicator @ 0x140BA0628 (BgDisplayProgressIndicator.c)
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
  __int64 v32; // r8
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r13
  unsigned int v35; // eax
  int v36; // eax
  int v37; // ecx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  int v40; // eax
  _BOOL8 v41; // rcx
  unsigned __int64 v42; // rdx
  ULONG FinalUncompressedSize; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v46; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD *v47; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v48; // [rsp+68h] [rbp-98h]
  int v49; // [rsp+70h] [rbp-90h] BYREF
  __int64 v50; // [rsp+78h] [rbp-88h]
  unsigned __int64 v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  char *v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v56; // [rsp+A8h] [rbp-58h]
  __int16 v57; // [rsp+AAh] [rbp-56h]
  PUCHAR UncompressedBuffer; // [rsp+B8h] [rbp-48h]
  __int64 v59; // [rsp+C0h] [rbp-40h]
  ULONG v60; // [rsp+C8h] [rbp-38h]
  int v61; // [rsp+CCh] [rbp-34h]
  char v62; // [rsp+D0h] [rbp-30h] BYREF
  char v63; // [rsp+150h] [rbp+50h] BYREF

  v50 = a5;
  memset_0(&v55, 0, 0xB0uLL);
  LODWORD(ProducerConsumerBuffer) = (_DWORD)qword_140F0AE08;
  v9 = 0;
  v49 = 0;
  v52 = 0LL;
  FinalUncompressedSize = 0;
  v47 = qword_140F0AE08;
  while ( 1 )
  {
    PopHiberCheckForDebugBreak();
    if ( !qword_140F0B260 && *(_DWORD *)(BugCheckParameter3 + 208) == KeGetCurrentPrcb()->Number && byte_140F0ADA0 )
      qword_140F0B260 = KeQueryPerformanceCounter(0LL).QuadPart;
    Number = KeGetCurrentPrcb()->Number;
    if ( *(_DWORD *)(BugCheckParameter3 + 208) == (_DWORD)Number
      && !byte_140F0ADA1
      && (!byte_140F0ADA0 || (unsigned int)dword_140F0AD84 > 0x640) )
    {
      v12 = __rdtsc();
      if ( byte_140E65B50 )
      {
        LOBYTE(Number) = 1;
        BgDisplayProgressIndicator(Number);
        byte_140E65B51 = 1;
      }
      v13 = __rdtsc();
      qword_140F0B248 += (((unsigned __int64)HIDWORD(v13) << 32) | (unsigned int)v13) - v12;
    }
    v46 = 4;
    v14 = ConsumerPeekAndConsumeBuffer((_DWORD)ProducerConsumerBuffer, (unsigned int)&v46, a3, v10, a2);
    v15 = v14;
    if ( !v14 )
      break;
    ProducerConsumerBuffer = (int *)PopReadProducerConsumerBuffer(
                                      v14,
                                      4,
                                      (unsigned int)&v49,
                                      (_DWORD)ProducerConsumerBuffer,
                                      a2,
                                      1);
    v16 = 8 * (unsigned __int8)*ProducerConsumerBuffer;
    v17 = PopReadProducerConsumerBuffer((int)v15 + 4, v16, (unsigned int)&v63, (_DWORD)v47, a2, 1);
    v19 = &v62;
    v20 = (_QWORD *)v17;
    v21 = *ProducerConsumerBuffer;
    v48 = v15 + v16 + 4LL;
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
    v54 = v26;
    v55 = 0LL;
    v56 = 8 * (((unsigned __int64)v26 >> 12) + 6);
    v57 = 0;
    v59 = 0LL;
    v61 = 0;
    v60 = v26;
    MmMapMemoryDumpMdlEx2(v25, v18, (__int64)&v55, 1);
    v27 = ((unsigned int)*ProducerConsumerBuffer >> 8) & 0x1FFFFF;
    v51 = __rdtsc();
    v53 = (char *)(v47 + 12);
    if ( v27 == v26 )
    {
      ProducerConsumerBuffer = v47;
      ProducerConsumerCopyFromContextBuffer(UncompressedBuffer, v26, v47, v48);
      *(_QWORD *)(a2 + 72) = __rdtsc() + *(_QWORD *)(a2 + 72) - v51;
      v28 = __rdtsc();
      ProducerConsumerBufferComplete(ProducerConsumerBuffer, ProducerConsumerBuffer + 12, v15, v46);
      *(_QWORD *)(a2 + 80) = __rdtsc() + *(_QWORD *)(a2 + 80) - v28;
    }
    else
    {
      ProducerConsumerCopyFromContextBuffer(*(_QWORD *)(a2 + 24), v27, v47, v48);
      v29 = v46;
      v30 = v53;
      v48 = __rdtsc();
      v31 = v47;
      *(_QWORD *)(a2 + 72) = v48 + *(_QWORD *)(a2 + 72) - v51;
      ProducerConsumerBufferComplete(v31, v30, v15, v29);
      v32 = v50;
      *(_QWORD *)(a2 + 80) = __rdtsc() + *(_QWORD *)(a2 + 80) - v48;
      if ( v32 )
      {
        guard_dispatch_icall_no_overrides(BugCheckParameter3);
        v32 = v50;
        v52 = qword_140F0B238;
      }
      v33 = (unsigned int)*ProducerConsumerBuffer;
      v34 = __rdtsc();
      if ( *(_BYTE *)(BugCheckParameter3 + 486) && ((v35 = (unsigned int)v33 >> 29) == 0 || v35 == 1 || v35 == 4) )
        v36 = RtlDecompressBufferEx(
                *((_WORD *)qword_1400289B0 + (v33 >> 29)),
                UncompressedBuffer,
                v26,
                *(PUCHAR *)(a2 + 24),
                ((unsigned int)v33 >> 8) & 0x1FFFFF,
                &FinalUncompressedSize,
                *(PVOID *)(a2 + 16));
      else
        v36 = RtlDecompressBufferProgress(
                *((_WORD *)qword_1400289B0 + (v33 >> 29)),
                (int)UncompressedBuffer,
                v26,
                *(_QWORD *)(a2 + 24),
                ((unsigned int)v33 >> 8) & 0x1FFFFF,
                (__int64)&FinalUncompressedSize,
                *(_QWORD *)(a2 + 16),
                v32,
                BugCheckParameter3);
      v37 = v36;
      v38 = __rdtsc();
      if ( v37 < 0 || FinalUncompressedSize != v26 )
      {
        *(_DWORD *)(BugCheckParameter3 + 204) = -1073741246;
        PopCheckpointSystemSleep(31LL);
        PopInternalAddToDumpFile(BugCheckParameter3, 0x1F0u, 0LL);
        KeBugCheckEx(0xA0u, 0x107uLL, 0xAuLL, BugCheckParameter3, 0LL);
      }
      v39 = v38 + *(_QWORD *)(a2 + 64) - v34;
      *(_QWORD *)(a2 + 64) = v39;
      if ( v50 )
        *(_QWORD *)(a2 + 64) = v52 + v39 - qword_140F0B238;
      v40 = *ProducerConsumerBuffer;
      LODWORD(ProducerConsumerBuffer) = (_DWORD)v47;
      v41 = (v40 & 0xE0000000) >= 0x40000000;
      v42 = v38 - v48;
      *(_QWORD *)(a2 + 8 * v41 + 144) += v54;
      *(_QWORD *)(a2 + 8 * v41 + 128) += v42;
    }
    if ( !a4 )
      return v9;
  }
  return (unsigned int)-2147483614;
}
