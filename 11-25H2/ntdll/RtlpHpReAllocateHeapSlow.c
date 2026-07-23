/*
 * XREFs of RtlpHpReAllocateHeapSlow @ 0x18011E180
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18002BF34 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpHpSegReAlloc @ 0x18002C120 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x18002D720 (RtlpHpReallocComputeSizes.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasGet @ 0x180055550 (RtlpHpExtrasGet.c)
 *     RtlpHpLargeReAlloc @ 0x1800BCCC4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800D83B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DF5A0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapReallocateEvent @ 0x180114E34 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeapSlow(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v4; // r12d
  unsigned __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v23; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+40h] [rbp-40h]
  unsigned __int64 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+68h] [rbp-18h]
  unsigned __int64 v28; // [rsp+78h] [rbp-8h]

  v4 = 0;
  if ( *(_DWORD *)(a1 + 24) )
  {
    v9 = RtlpHpExtrasGet((_RTL_SRWLOCK *)a1, (unsigned __int64)a3, a2, 0LL);
    if ( v9 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v4 = *(_BYTE *)(v9 + 2) & 0xF;
      if ( (*(_BYTE *)(v9 + 2) & 0xF) != 0 )
      {
        __writegsqword(0x1858u, 0LL);
        v10 = RtlpCallInterceptRoutine(v4, (PVOID)a1, (unsigned __int64)a3, 5u, v9 + 16);
        __writegsqword(0x1858u, a1 + 20);
        v11 = *(unsigned int *)(a1 + 20);
        if ( (v11 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v11);
        if ( v10 < 0 )
          return -1LL;
      }
    }
  }
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( a4 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( !(unsigned int)RtlpHpReallocComputeSizes(a1, (unsigned __int64)a3, a4, a2, (unsigned __int64 *)&v23)
      || v25 < a4 )
    {
      v12 = -1LL;
      goto LABEL_29;
    }
    v13 = v23;
    if ( (_QWORD)v23 == a4 )
    {
      v12 = (unsigned __int64)a3;
      goto LABEL_29;
    }
    v14 = a2 & 0x10002000;
    if ( (_WORD)a3 )
    {
      v16 = 0;
    }
    else
    {
      v15 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)&a3[-qword_1801D0978] >> 20));
      if ( !v15 || (v16 = v15 - 1, v16 == 2) )
      {
        v17 = RtlpHpLargeReAlloc(a1, v14, (unsigned __int64)a3, (__int64)&v23);
        goto LABEL_21;
      }
    }
    v17 = RtlpHpSegReAlloc(a1 + 192LL * v16 + 320, v14, (__int64)a3, (__int64)&v23);
LABEL_21:
    v12 = v17;
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v18 = *((_QWORD *)&v24 + 1);
      if ( (a2 & 2) != 0 && *((_QWORD *)&v24 + 1) > v13 )
        memset_thunk_772440563353939046((void *)(v13 + v17), 0, *((_QWORD *)&v24 + 1) - v13);
      if ( (a2 & 0x2000) != 0 )
        *(__m128i *)(v18 + v12) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      v26 = v23;
      v28 = v25;
      v27 = v24;
    }
    goto LABEL_29;
  }
  v12 = 0LL;
LABEL_29:
  if ( v4 )
  {
    v19 = (unsigned __int64)a3;
    if ( v12 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      v19 = v12;
    v20 = RtlpHpExtrasGet((_RTL_SRWLOCK *)a1, v19, a2, 0LL);
    __writegsqword(0x1858u, 0LL);
    RtlpCallInterceptRoutine(v4, (PVOID)a1, v19, 6u, v20 + 16);
    __writegsqword(0x1858u, a1 + 20);
    v21 = *(unsigned int *)(a1 + 20);
    if ( (v21 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v21);
  }
  if ( v12 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( RtlpHpStackLoggingEnabled(a1) )
    {
      RtlpHpStackTraceRemoveStack(a1, a3);
      RtlpHpStackTraceAddStack(a1, v12);
    }
    if ( *(char *)(a1 + 20) < 0 )
      RtlpLogHeapReallocateEvent(a1, v12, (__int64)a3, v26, *((__int64 *)&v27 + 1), 3);
  }
  return v12;
}
