/*
 * XREFs of RtlpHpReAllocateHeap @ 0x18005CD30
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x18005DAE0 (RtlpHpReallocComputeSizes.c)
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(__int64 a1, int a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD *v6; // rcx
  __int64 HeapSlow; // rbx
  unsigned int v8; // edi
  unsigned int v9; // esi
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-28h]
  unsigned __int64 v17; // [rsp+50h] [rbp-18h]

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
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    {
      HeapSlow = 0LL;
      goto LABEL_15;
    }
    if ( !(unsigned int)RtlpHpReallocComputeSizes(a1, a3, a4, v8, (__int64)&v15) || v17 < a4 )
    {
      HeapSlow = -1LL;
      goto LABEL_15;
    }
    if ( (_QWORD)v15 != a4 )
    {
      v9 = v8 & 0x10002000;
      if ( (_WORD)HeapSlow )
      {
        v10 = 0;
      }
      else
      {
        v11 = RtlCSparseBitmapBitmaskRead(
                (__int64)&BaseAddress,
                2 * ((unsigned __int64)(HeapSlow - qword_1801CD918) >> 20));
        if ( !v11 || (v10 = v11 - 1, v10 == 2) )
        {
          v12 = RtlpHpLargeReAlloc(a1, v9, HeapSlow, &v15);
LABEL_11:
          HeapSlow = v12;
          if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v13 = *((_QWORD *)&v16 + 1);
            if ( (v8 & 2) != 0 && *((_QWORD *)&v16 + 1) > (unsigned __int64)v15 )
              memset_thunk_772440563353939046((void *)(v15 + v12), 0, *((_QWORD *)&v16 + 1) - v15);
            if ( (v8 & 0x2000) != 0 )
              *(__m128i *)(v13 + HeapSlow) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
          }
          goto LABEL_15;
        }
      }
      v12 = RtlpHpSegReAlloc(a1 + 192LL * v10 + 320, v9, HeapSlow, &v15);
      goto LABEL_11;
    }
  }
LABEL_15:
  __writegsqword(0x1858u, 0LL);
  return HeapSlow;
}
