/*
 * XREFs of RtlpHpSegContextCompact @ 0x14035E4C0
 * Callers:
 *     RtlpHpHeapCompact @ 0x14035CB34 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegLockRelease @ 0x14035CDEC (RtlpHpSegLockRelease.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140360140 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLockAcquire @ 0x1403640F4 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x140364FD0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlpHpSegSegmentFree @ 0x14045D818 (RtlpHpSegSegmentFree.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1)
{
  bool v1; // zf
  _QWORD *v2; // rbx
  char v4; // al
  _QWORD *v5; // rsi
  unsigned __int64 j; // rbx
  _QWORD *result; // rax
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD **v13; // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-20h]
  char i; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 88) == 0LL;
  v2 = &v15;
  v16 = &v15;
  v15 = &v15;
  if ( !v1 )
  {
    v4 = RtlpHpSegLockAcquire(a1);
    v5 = *(_QWORD **)(a1 + 72);
    for ( i = v4; v5 != (_QWORD *)(a1 + 72); v5 = (_QWORD *)*v5 )
    {
      for ( j = (unsigned __int64)&v5[4 * *(unsigned __int8 *)(a1 + 10)];
            j < (unsigned __int64)(v5 + 1024);
            j += 32LL * *(unsigned __int8 *)(j + 31) )
      {
        if ( (*(_BYTE *)(j + 24) & 1) == 0 && *(_WORD *)(j + 28) != 0xFFFF )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)j);
          *(_OWORD *)j = 0LL;
          *(_QWORD *)(j + 16) = 0LL;
          v8 = ~(unsigned __int16)*(_DWORD *)(j + 28);
          *(_DWORD *)j = -857879331;
          _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v8);
          *(_BYTE *)(j + 24) |= 1u;
          v9 = 32LL * ((unsigned int)*(unsigned __int8 *)(j + 31) - 1);
          *(_BYTE *)(v9 + j + 24) |= 1u;
          j = RtlpHpSegPageRangeCoalesce(a1, j, 1LL, &i);
          v10 = (_QWORD *)RtlpHpSegFreeRangeInsert(a1, j, 0LL);
          if ( v10 )
          {
            v11 = *v10;
            v5 = (_QWORD *)v5[1];
            if ( *(_QWORD **)(*v10 + 8LL) != v10
              || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10)
              || (*v12 = v11, *(_QWORD *)(v11 + 8) = v12, v13 = (_QWORD **)v16, --*(_QWORD *)(a1 + 88), *v13 != &v15) )
            {
              __fastfail(3u);
            }
            v10[1] = v13;
            *v10 = &v15;
            *v13 = v10;
            v16 = v10;
            break;
          }
        }
      }
    }
    RtlpHpSegLockRelease(a1);
    v2 = v15;
  }
  for ( result = &v15; v2 != &v15; result = &v15 )
  {
    v14 = v2;
    v2 = (_QWORD *)*v2;
    RtlpHpSegSegmentFree(a1, v14, 0x7FFFFFFFLL, 1LL);
  }
  return result;
}
