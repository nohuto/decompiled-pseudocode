/*
 * XREFs of EtwpPreserveLogger @ 0x1407AFE9C
 * Callers:
 *     EtwpKsrCallback @ 0x1407AFD60 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140A39DC4 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x14044D7A0 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x14047540C (EtwpInitializeBufferHeader.c)
 *     EtwpAllocateTraceBuffer @ 0x14047CE80 (EtwpAllocateTraceBuffer.c)
 *     EtwpFreeTraceBuffer @ 0x14047E9DC (EtwpFreeTraceBuffer.c)
 *     EtwpGetFirstBuffer @ 0x1404ECB34 (EtwpGetFirstBuffer.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1407AFAA0 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x1407B00BC (EtwpPreserveMdlList.c)
 *     EtwpAddLogHeader @ 0x1409D59FC (EtwpAddLogHeader.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveLogger(ULONG_PTR BugCheckParameter2)
{
  __m128i *v1; // rbp
  __int64 v4; // r14
  PVOID *v5; // r15
  __m128i v6; // xmm7
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  _DWORD *Pool2; // rsi
  int v10; // edi
  _DWORD *TraceBuffer; // rax
  __int64 v12; // r13
  __int128 v13; // xmm6
  __int64 v14; // r8
  __int64 FirstBuffer; // r14
  PVOID *v16; // r12
  PVOID *v17; // rax
  unsigned int v18; // [rsp+90h] [rbp+8h]
  PVOID P; // [rsp+98h] [rbp+10h] BYREF

  v1 = *(__m128i **)(BugCheckParameter2 + 1352);
  P = 0LL;
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = *(unsigned int *)(BugCheckParameter2 + 4);
  v5 = 0LL;
  v6 = v1[1];
  if ( ((v4 * (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 232) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v18 = v7 + 18;
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v18, 0x4B777445u);
  if ( Pool2 )
  {
    Pool2[2] = *(_DWORD *)(BugCheckParameter2 + 4);
    Pool2[3] = 16;
    memmove(Pool2 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    TraceBuffer = EtwpAllocateTraceBuffer(BugCheckParameter2, v4);
    v12 = (__int64)TraceBuffer;
    if ( TraceBuffer )
    {
      EtwpInitializeBufferHeader((__int16 *)BugCheckParameter2, TraceBuffer);
      EtwpResetBufferHeader(v12, 4);
      v13 = *(_OWORD *)(BugCheckParameter2 + 152);
      *(__m128i *)(BugCheckParameter2 + 152) = v6;
      EtwpAddLogHeader(BugCheckParameter2, v12);
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v12 + 48);
      *(_OWORD *)(BugCheckParameter2 + 152) = v13;
      v10 = EtwpBuildMdlForTraceBuffer(BugCheckParameter2, (char *)v12, (struct _MDL **)&P);
      if ( v10 < 0 )
        goto LABEL_18;
      ++Pool2[1];
      v5 = (PVOID *)P;
      FirstBuffer = EtwpGetFirstBuffer(BugCheckParameter2);
      v16 = v5;
      while ( FirstBuffer )
      {
        v10 = EtwpBuildMdlForTraceBuffer(BugCheckParameter2, *(char **)(FirstBuffer + 16), (struct _MDL **)&P);
        if ( v10 < 0 )
          goto LABEL_18;
        v17 = (PVOID *)P;
        *v16 = P;
        v16 = v17;
        ++Pool2[1];
        FirstBuffer = *(_QWORD *)FirstBuffer;
        if ( FirstBuffer == BugCheckParameter2 + 80 )
          FirstBuffer = 0LL;
      }
      v10 = EtwpPreserveMdlList(v5, Pool2, v18, v1);
      if ( v10 < 0 )
      {
LABEL_18:
        EtwpFreeTraceBuffer(BugCheckParameter2, (char *)v12, v14);
      }
      else
      {
        v1->m128i_i64[1] = v12;
        v1[2].m128i_i8[1] = 1;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
    }
    else
    {
      v10 = -1073741801;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
