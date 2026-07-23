/*
 * XREFs of RtlpHpSegContextCompact @ 0x180067510
 * Callers:
 *     RtlpHpHeapCompact @ 0x180066914 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegSegmentFree @ 0x180026FA4 (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180067840 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180069560 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A6B0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1)
{
  bool v1; // zf
  _QWORD *v2; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rsi
  unsigned __int64 j; // rbx
  _QWORD *result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD **v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-20h]
  char i; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 88) == 0LL;
  v2 = &v14;
  v15 = &v14;
  v14 = &v14;
  if ( !v1 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v5 = *(_QWORD **)(a1 + 72);
    for ( i = -1; v5 != (_QWORD *)(a1 + 72); v5 = (_QWORD *)*v5 )
    {
      for ( j = (unsigned __int64)&v5[4 * *(unsigned __int8 *)(a1 + 10)];
            j < (unsigned __int64)(v5 + 1024);
            j += 32LL * *(unsigned __int8 *)(j + 31) )
      {
        if ( (*(_BYTE *)(j + 24) & 1) == 0 && *(_WORD *)(j + 28) != 0xFFFF )
        {
          RtlpHpSegFreeRangeRemove(a1, j, v4);
          *(_BYTE *)(j + 24) |= 1u;
          v8 = 32LL * ((unsigned int)*(unsigned __int8 *)(j + 31) - 1);
          *(_BYTE *)(v8 + j + 24) |= 1u;
          j = RtlpHpSegPageRangeCoalesce(a1, j, 1LL, &i);
          v9 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, j, 0LL);
          if ( v9 )
          {
            v10 = *v9;
            v5 = (_QWORD *)v5[1];
            if ( *(_QWORD **)(*v9 + 8LL) != v9
              || (v11 = (_QWORD *)v9[1], (_QWORD *)*v11 != v9)
              || (*v11 = v10, *(_QWORD *)(v10 + 8) = v11, v12 = (_QWORD **)v15, --*(_QWORD *)(a1 + 88), *v12 != &v14) )
            {
              __fastfail(3u);
            }
            v9[1] = v12;
            *v9 = &v14;
            *v12 = v9;
            v15 = v9;
            break;
          }
        }
      }
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v2 = v14;
  }
  for ( result = &v14; v2 != &v14; result = &v14 )
  {
    v13 = (__int64)v2;
    v2 = (_QWORD *)*v2;
    RtlpHpSegSegmentFree(a1, v13, 0x7FFFFFFFu, 1);
  }
  return result;
}
