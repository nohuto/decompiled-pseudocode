/*
 * XREFs of RtlpHpReAllocateHeapSlow @ 0x18011AB20
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18005CD30 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasGet @ 0x180059480 (RtlpHpExtrasGet.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x18005DAE0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800D5580 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DDEC0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapReallocateEvent @ 0x18010D1A4 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeapSlow(__int64 a1, int a2, char *a3, unsigned __int64 a4)
{
  int v4; // r12d
  unsigned __int64 v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int128 v21; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h]
  unsigned __int64 v23; // [rsp+50h] [rbp-30h]
  __int128 v24; // [rsp+58h] [rbp-28h]
  __int128 v25; // [rsp+68h] [rbp-18h]
  unsigned __int64 v26; // [rsp+78h] [rbp-8h]

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
        v10 = RtlpCallInterceptRoutine(v4, (PVOID)a1, (unsigned __int64)a3, 5);
        __writegsqword(0x1858u, a1 + 20);
        v11 = *(unsigned int *)(a1 + 20);
        if ( (v11 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v11);
        if ( v10 < 0 )
          return -1LL;
      }
    }
  }
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a4 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( !(unsigned int)RtlpHpReallocComputeSizes(a1, (unsigned __int64)a3, a4, a2, (unsigned __int64 *)&v21)
      || v23 < a4 )
    {
      v12 = -1LL;
      goto LABEL_29;
    }
    if ( (_QWORD)v21 == a4 )
    {
      v12 = (unsigned __int64)a3;
      goto LABEL_29;
    }
    v13 = a2 & 0x10002000;
    if ( (_WORD)a3 )
    {
      v15 = 0;
    }
    else
    {
      v14 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)&a3[-qword_1801CD918] >> 20));
      if ( !v14 || (v15 = v14 - 1, v15 == 2) )
      {
        v16 = RtlpHpLargeReAlloc(a1, v13, (__int64)a3, (__int64)&v21);
        goto LABEL_21;
      }
    }
    v16 = RtlpHpSegReAlloc(a1 + 192LL * v15 + 320, v13, (__int64)a3, (__int64)&v21);
LABEL_21:
    v12 = v16;
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v17 = *((_QWORD *)&v22 + 1);
      if ( (a2 & 2) != 0 && *((_QWORD *)&v22 + 1) > (unsigned __int64)v21 )
        memset_thunk_772440563353939046((void *)(v21 + v16), 0, *((_QWORD *)&v22 + 1) - v21);
      if ( (a2 & 0x2000) != 0 )
        *(__m128i *)(v17 + v12) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      v24 = v21;
      v26 = v23;
      v25 = v22;
    }
    goto LABEL_29;
  }
  v12 = 0LL;
LABEL_29:
  if ( v4 )
  {
    v18 = (unsigned __int64)a3;
    if ( v12 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      v18 = v12;
    RtlpHpExtrasGet((_RTL_SRWLOCK *)a1, v18, a2, 0LL);
    __writegsqword(0x1858u, 0LL);
    RtlpCallInterceptRoutine(v4, (PVOID)a1, v18, 6);
    __writegsqword(0x1858u, a1 + 20);
    v19 = *(unsigned int *)(a1 + 20);
    if ( (v19 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v19);
  }
  if ( v12 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( RtlpHpStackLoggingEnabled(a1) )
    {
      RtlpHpStackTraceRemoveStack(a1, a3);
      RtlpHpStackTraceAddStack(a1, v12);
    }
    if ( *(char *)(a1 + 20) < 0 )
      RtlpLogHeapReallocateEvent(a1, v12, (__int64)a3, v24, *((__int64 *)&v25 + 1), 3);
  }
  return v12;
}
