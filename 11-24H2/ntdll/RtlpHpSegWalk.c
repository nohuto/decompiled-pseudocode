/*
 * XREFs of RtlpHpSegWalk @ 0x18002B478
 * Callers:
 *     RtlpHpHeapWalk @ 0x18002B340 (RtlpHpHeapWalk.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180114970 (RtlpQueryExtendedInformationHeap.c)
 * Callees:
 *     RtlpHpVsSubsegmentWalk @ 0x18005E00C (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpLfhSubsegmentWalk @ 0x1800D0870 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800EB774 (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpSegReportSegment @ 0x180104E14 (RtlpHpSegReportSegment.c)
 *     RtlpHpSegReportPageRange @ 0x18011B4C0 (RtlpHpSegReportPageRange.c)
 */

__int64 __fastcall RtlpHpSegWalk(__int64 *a1, __int64 *a2, char a3, int a4)
{
  unsigned int v4; // ebx
  __int64 *v5; // r14
  __int64 *v6; // rsi
  __int64 v7; // r8
  __int64 **v8; // r15
  char v9; // cl
  unsigned __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int16 v14; // r12
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int16 v20; // r13
  __int64 **v21; // rax
  __int64 *v22; // r8
  _QWORD v23[2]; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+98h] [rbp+48h] BYREF
  int v25; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = a2;
  v6 = a1;
  v23[0] = 0LL;
  v24 = 0;
  v25 = 0;
  if ( !*a2 )
  {
    v21 = (__int64 **)(a1 + 9);
    if ( *v21 != (__int64 *)v21 )
    {
      v22 = *v21;
      goto LABEL_29;
    }
    return (unsigned int)-2147483622;
  }
  if ( (*((_BYTE *)a2 + 18) & 2) != 0 )
  {
    v8 = (__int64 **)*a2;
    if ( a3 )
    {
      v16 = (unsigned __int64)&v8[4 * *((unsigned __int8 *)a1 + 10)];
      goto LABEL_17;
    }
    if ( *v8 != a1 + 9 )
    {
      v22 = *v8;
      goto LABEL_29;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v7 = *a1;
  v8 = (__int64 **)(*a2 & *a1);
  v9 = *((_BYTE *)a1 + 8);
  v10 = (unsigned __int64)&v8[4 * ((unsigned __int64)((unsigned int)*a2 - (unsigned int)v8) >> v9)];
  if ( (*a2 & 0xFFF) != 0 )
  {
    if ( (*(_BYTE *)(v10 + 24) & 2) != 0 )
      goto LABEL_7;
  }
  else if ( (*(_BYTE *)(v10 + 24) & 2) != 0 )
  {
    goto LABEL_33;
  }
  v10 += -32LL * *(unsigned __int8 *)(v10 + 26);
LABEL_7:
  v11 = (v10 & v7) + ((__int64)(v10 - (v10 & v7)) >> 5 << v9);
  v12 = *v5;
  if ( (*(_BYTE *)(v10 + 24) & 0xC) == 8 )
    v13 = RtlpHpLfhSubsegmentWalk(v6[3], v11, v12, a4, (__int64)v23, (__int64)&v24, (__int64)&v25);
  else
    v13 = RtlpHpVsSubsegmentWalk(v6[4], v11, v12, (unsigned int)v23, (__int64)&v24, (__int64)&v25);
  *v5 = v13;
  if ( !v13 )
  {
LABEL_33:
    v16 = 32LL * *(unsigned __int8 *)(v10 + 31) + v10;
LABEL_17:
    while ( v16 < (unsigned __int64)(v8 + 1024) )
    {
      if ( (*(_BYTE *)(v16 + 24) & 0x11) == 1 )
      {
        v17 = *(_BYTE *)(v16 + 24) & 0xC;
        if ( v17 != 4 )
        {
          v18 = (v16 & *v6) + ((__int64)(v16 - (v16 & *v6)) >> 5 << *((_BYTE *)v6 + 8));
          if ( v17 < 8u )
          {
            *v5 = v18;
            RtlpHpSegReportPageRange(v6, v5);
            return v4;
          }
          if ( v17 == 8 )
          {
            v19 = RtlpHpLfhSubsegmentWalk(v6[3], v18, v18, a4, (__int64)v23, (__int64)&v24, (__int64)&v25);
            v20 = 0x8000;
          }
          else
          {
            v19 = RtlpHpVsSubsegmentWalk(v6[4], v18, v18, (unsigned int)v23, (__int64)&v24, (__int64)&v25);
            v20 = 0;
          }
          *v5 = v19;
          if ( v19 )
          {
            RtlpHpSegReportBusyBlock((_DWORD)v6, (_DWORD)v5, v23[0], v24, v25);
            *((_WORD *)v5 + 9) |= v20;
            return v4;
          }
        }
      }
      v16 += 32LL * *(unsigned __int8 *)(v16 + 31);
    }
    if ( *v8 == v6 + 9 )
      return (unsigned int)-2147483622;
    v22 = *v8;
    a2 = v5;
    a1 = v6;
LABEL_29:
    RtlpHpSegReportSegment(a1, a2, v22);
    return v4;
  }
  RtlpHpSegReportBusyBlock((_DWORD)v6, (_DWORD)v5, v23[0], v24, v25);
  v14 = 0x8000;
  if ( (*(_BYTE *)(v10 + 24) & 0xC) != 8 )
    v14 = 0;
  *((_WORD *)v5 + 9) |= v14;
  return v4;
}
