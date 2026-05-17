/*
 * XREFs of RtlpHpReAllocateHeapSlow @ 0x18011C8F0
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x1800A2F84 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasGet @ 0x18002CA80 (RtlpHpExtrasGet.c)
 *     RtlpHpLargeReAlloc @ 0x180093AA4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegReAlloc @ 0x1800A3160 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x1800A3D30 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800DB020 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800E28F0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapReallocateEvent @ 0x180111D34 (RtlpLogHeapReallocateEvent.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeapSlow(__m128i *a1, int a2, char *a3, unsigned __int64 a4)
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
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int128 v22; // [rsp+30h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h]
  unsigned __int64 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+58h] [rbp-28h]
  __int128 v26; // [rsp+68h] [rbp-18h]
  unsigned __int64 v27; // [rsp+78h] [rbp-8h]

  v4 = 0;
  if ( a1[1].m128i_i32[2] )
  {
    v9 = RtlpHpExtrasGet((__int64)a1, (unsigned __int64)a3, a2, 0LL);
    if ( v9 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v4 = *(_BYTE *)(v9 + 2) & 0xF;
      if ( (*(_BYTE *)(v9 + 2) & 0xF) != 0 )
      {
        __writegsqword(0x1858u, 0LL);
        v10 = RtlpCallInterceptRoutine(v4, (__int64)a1, (unsigned __int64)a3, 5u, v9 + 16);
        __writegsqword(0x1858u, (unsigned __int64)a1[1].m128i_u64 + 4);
        v11 = a1[1].m128i_u32[1];
        if ( (v11 & 0x10) != 0 && a1[14].m128i_i32[0] != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          RtlpHpEnvAcquireGlobalLockSharedContended((char *)a1[1].m128i_i64 + 4, v11);
        if ( v10 < 0 )
          return -1LL;
      }
    }
  }
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a4 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    if ( !(unsigned int)RtlpHpReallocComputeSizes((__int64)a1, (unsigned __int64)a3, a4, a2, (unsigned __int64 *)&v22)
      || v24 < a4 )
    {
      v12 = -1LL;
      goto LABEL_29;
    }
    if ( (_QWORD)v22 == a4 )
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
      v14 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801CE930, 2 * ((unsigned __int64)&a3[-qword_1801CE928] >> 20));
      if ( !v14 || (v15 = v14 - 1, v15 == 2) )
      {
        v16 = RtlpHpLargeReAlloc(a1, (volatile signed __int32 **)v13, (unsigned __int64)a3, (__int64)&v22);
        goto LABEL_21;
      }
    }
    v16 = RtlpHpSegReAlloc((__int64)a1[12 * v15 + 20].m128i_i64, v13, (unsigned __int64)a3, (__int64)&v22);
LABEL_21:
    v12 = v16;
    if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v17 = *((_QWORD *)&v23 + 1);
      if ( (a2 & 2) != 0 && *((_QWORD *)&v23 + 1) > (unsigned __int64)v22 )
        memset_thunk_772440563353939046((void *)(v22 + v16), 0, *((_QWORD *)&v23 + 1) - v22);
      if ( (a2 & 0x2000) != 0 )
        *(__m128i *)(v17 + v12) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
      v25 = v22;
      v27 = v24;
      v26 = v23;
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
    v19 = RtlpHpExtrasGet((__int64)a1, v18, a2, 0LL);
    __writegsqword(0x1858u, 0LL);
    RtlpCallInterceptRoutine(v4, (__int64)a1, v18, 6u, v19 + 16);
    __writegsqword(0x1858u, (unsigned __int64)a1[1].m128i_u64 + 4);
    v20 = a1[1].m128i_u32[1];
    if ( (v20 & 0x10) != 0 && a1[14].m128i_i32[0] != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended((char *)a1[1].m128i_i64 + 4, v20);
  }
  if ( v12 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( RtlpHpStackLoggingEnabled((__int64)a1) )
    {
      RtlpHpStackTraceRemoveStack((__int64)a1, a3);
      RtlpHpStackTraceAddStack((__int64)a1, v12);
    }
    if ( a1[1].m128i_i8[4] < 0 )
      RtlpLogHeapReallocateEvent((__int64)a1, v12, (__int64)a3, v25, *((__int64 *)&v26 + 1), 3);
  }
  return v12;
}
