/*
 * XREFs of RtlpHpSegContextCompact @ 0x1403C7E20
 * Callers:
 *     RtlpHpHeapCompact @ 0x1403C7C84 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpSegPageRangeCoalesce @ 0x1402E0A40 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegLockAcquire @ 0x1402E129C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeInsert @ 0x1402E2180 (RtlpHpSegFreeRangeInsert.c)
 *     RtlRbRemoveNode @ 0x1402E2A20 (RtlRbRemoveNode.c)
 *     RtlpHpSegSegmentFree @ 0x1402F742C (RtlpHpSegSegmentFree.c)
 *     RtlpHpSegLockRelease @ 0x1403C7FF4 (RtlpHpSegLockRelease.c)
 */

_QWORD *__fastcall RtlpHpSegContextCompact(__int64 a1)
{
  bool v1; // zf
  _QWORD *v2; // rbx
  unsigned __int8 v4; // al
  _QWORD *v5; // rsi
  unsigned __int64 i; // rbx
  _QWORD *result; // rax
  unsigned __int16 v8; // ax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _QWORD **v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+28h] [rbp-20h]
  unsigned __int8 v17; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 88) == 0LL;
  v2 = &v15;
  v16 = &v15;
  v15 = &v15;
  if ( !v1 )
  {
    v4 = RtlpHpSegLockAcquire(a1);
    v5 = *(_QWORD **)(a1 + 72);
    v17 = v4;
    if ( v5 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        for ( i = (unsigned __int64)&v5[4 * *(unsigned __int8 *)(a1 + 10)];
              i < (unsigned __int64)(v5 + 1024);
              i += 32LL * *(unsigned __int8 *)(i + 31) )
        {
          if ( (*(_BYTE *)(i + 24) & 1) == 0 && *(_WORD *)(i + 28) != 0xFFFF )
          {
            RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)i);
            *(_OWORD *)i = 0LL;
            *(_QWORD *)(i + 16) = 0LL;
            v8 = ~(unsigned __int16)*(_DWORD *)(i + 28);
            *(_DWORD *)i = -857879331;
            _InterlockedAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v8);
            *(_BYTE *)(i + 24) |= 1u;
            v9 = 32LL * ((unsigned int)*(unsigned __int8 *)(i + 31) - 1);
            *(_BYTE *)(v9 + i + 24) |= 1u;
            i = RtlpHpSegPageRangeCoalesce(a1, i, 1, &v17);
            v10 = (_QWORD *)RtlpHpSegFreeRangeInsert((_RTL_RB_TREE *)a1, i, 0);
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
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != (_QWORD *)(a1 + 72) );
      v4 = v17;
    }
    RtlpHpSegLockRelease(a1, v4);
    v2 = v15;
  }
  for ( result = &v15; v2 != &v15; result = &v15 )
  {
    v14 = (__int64)v2;
    v2 = (_QWORD *)*v2;
    RtlpHpSegSegmentFree(a1, v14, 0x7FFFFFFFu, 1);
  }
  return result;
}
