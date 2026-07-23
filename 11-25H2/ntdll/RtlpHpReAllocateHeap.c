/*
 * XREFs of RtlpHpReAllocateHeap @ 0x18002BF34
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpSegReAlloc @ 0x18002C120 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x18002D720 (RtlpHpReallocComputeSizes.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeReAlloc @ 0x1800BCCC4 (RtlpHpLargeReAlloc.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD *v6; // rcx
  __int64 HeapSlow; // rbx
  unsigned int v8; // edi
  unsigned __int64 v9; // r14
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int128 v17; // [rsp+40h] [rbp-28h]
  unsigned __int64 v18; // [rsp+50h] [rbp-18h]

  v6 = (_DWORD *)(a1 + 20);
  HeapSlow = a3;
  __writegsqword(0x1858u, (unsigned __int64)v6);
  v8 = (a2 | *v6) & 0x10002FFA;
  if ( ((a2 | *v6) & 0x2FF8) != 0 )
  {
    if ( (((unsigned __int8)a2 | *(_BYTE *)v6) & 0x10) != 0
      && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    {
      RtlpHpEnvAcquireGlobalLockSharedContended(v6, v8);
    }
    HeapSlow = RtlpHpReAllocateHeapSlow(a1, v8, HeapSlow, a4);
  }
  else
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    {
      HeapSlow = 0LL;
      goto LABEL_15;
    }
    if ( !(unsigned int)RtlpHpReallocComputeSizes(a1, a3, a4, v8, (__int64)&v16) || v18 < a4 )
    {
      HeapSlow = -1LL;
      goto LABEL_15;
    }
    v9 = v16;
    if ( (_QWORD)v16 != a4 )
    {
      v10 = v8 & 0x10002000;
      if ( (_WORD)HeapSlow )
      {
        v11 = 0;
      }
      else
      {
        v12 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(HeapSlow - qword_1801D0978) >> 20));
        if ( !v12 || (v11 = v12 - 1, v11 == 2) )
        {
          v13 = RtlpHpLargeReAlloc(a1, v10, HeapSlow, &v16);
LABEL_11:
          HeapSlow = v13;
          if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v14 = *((_QWORD *)&v17 + 1);
            if ( (v8 & 2) != 0 && *((_QWORD *)&v17 + 1) > v9 )
              memset_thunk_772440563353939046((void *)(v9 + v13), 0, *((_QWORD *)&v17 + 1) - v9);
            if ( (v8 & 0x2000) != 0 )
              *(__m128i *)(v14 + HeapSlow) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          }
          goto LABEL_15;
        }
      }
      v13 = RtlpHpSegReAlloc(a1 + 192LL * v11 + 320, v10, HeapSlow, &v16);
      goto LABEL_11;
    }
  }
LABEL_15:
  __writegsqword(0x1858u, 0LL);
  return HeapSlow;
}
