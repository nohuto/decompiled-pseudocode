/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x180069560
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180067200 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x180067510 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextReserve @ 0x18009B5A0 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1800D3258 (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlRbInsertNodeEx @ 0x18006AA90 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1800F1CB0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, int a3)
{
  char v5; // al
  __int64 v6; // rdx
  BOOLEAN v7; // cl
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-59h] BYREF
  __int64 v15; // [rsp+38h] [rbp-51h] BYREF
  __int64 v16; // [rsp+40h] [rbp-49h] BYREF
  __int64 v17; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+50h] [rbp-39h] BYREF
  _EVENT_DATA_DESCRIPTOR v19; // [rsp+60h] [rbp-29h] BYREF
  __int64 *v20; // [rsp+80h] [rbp-9h]
  __int64 v21; // [rsp+88h] [rbp-1h]
  __int64 *v22; // [rsp+90h] [rbp+7h]
  __int64 v23; // [rsp+98h] [rbp+Fh]
  __int64 *v24; // [rsp+A0h] [rbp+17h]
  __int64 v25; // [rsp+A8h] [rbp+1Fh]
  __int64 *v26; // [rsp+B0h] [rbp+27h]
  __int64 v27; // [rsp+B8h] [rbp+2Fh]
  __int64 *v28; // [rsp+C0h] [rbp+37h]
  __int64 v29; // [rsp+C8h] [rbp+3Fh]

  if ( !a3 && (*(_BYTE *)(a1 + 13) & 0x10) != 0 && *(unsigned __int8 *)(a2 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    result = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
    return result;
  }
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
    v5 = RtlpHpSegPageRangeComputeLargePageCost(
           a1,
           (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
           *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8));
  else
    v5 = 4;
  *(_BYTE *)(a2 + 30) = v5;
  v6 = *(_QWORD *)(a1 + 96);
  if ( (*(_QWORD *)(a1 + 104) & 1) == 0 )
  {
LABEL_6:
    v7 = 0;
    if ( !v6 )
      goto LABEL_11;
    while ( 1 )
    {
      if ( *(_DWORD *)(a2 + 28) < *(_DWORD *)(v6 + 28) )
      {
        v8 = *(_QWORD *)v6;
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_23;
          v8 ^= v6;
        }
        if ( !v8 )
          goto LABEL_23;
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (*(_QWORD *)(a1 + 104) & 1) != 0 )
        {
          if ( !v8 )
          {
LABEL_10:
            v7 = 1;
            goto LABEL_11;
          }
          v8 ^= v6;
        }
        if ( !v8 )
          goto LABEL_10;
      }
      v6 = v8;
    }
  }
  if ( v6 )
  {
    v6 ^= a1 + 96;
    goto LABEL_6;
  }
LABEL_23:
  v7 = 0;
LABEL_11:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v6, v7, (PRTL_BALANCED_NODE)a2);
  _InterlockedAdd64(
    (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
    (unsigned __int16)~*(_WORD *)(a2 + 28));
  if ( (RtlpHpHeapFeatures & 8) != 0 )
  {
    v12 = (__int64 *)(a1 + *(__int16 *)(a1 + 22));
    if ( (unsigned int)dword_1801CB670 > 5 )
    {
      v14 = *(_QWORD *)(a1 + 56);
      v21 = 8LL;
      v20 = &v14;
      v15 = *v12;
      v22 = &v15;
      v16 = v12[1];
      v24 = &v16;
      v17 = v12[2];
      v26 = &v17;
      v13 = v12[3];
      v28 = &v18;
      v23 = 8LL;
      v25 = 8LL;
      v27 = 8LL;
      v18 = v13;
      v29 = 8LL;
      tlgWriteTransfer_EtwEventWriteTransfer(
        (__int64)&dword_1801CB670,
        (unsigned __int8 *)dword_1801A1503,
        v9,
        v10,
        7u,
        &v19);
    }
  }
  return 0LL;
}
