/*
 * XREFs of RaidPrepareSrbForReuse @ 0x1401B5C80
 * Callers:
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x140019940 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x14001A200 (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14001A9E0 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14001AF90 (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void *__fastcall RaidPrepareSrbForReuse(unsigned int *a1)
{
  __int64 v1; // rdi
  int v3; // esi
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v6; // rsi
  void *result; // rax
  unsigned int v8; // r10d
  __int64 v9; // r12
  unsigned int v10; // r13d
  size_t v11; // r14
  unsigned int *v12; // r9
  unsigned int i; // eax
  int v14; // edx
  int v15; // esi
  int v16; // esi
  void *v17; // [rsp+50h] [rbp+8h]

  v1 = 0LL;
  v3 = 0;
  v4 = 0;
  if ( *((_BYTE *)a1 + 2) != 40 )
  {
    v5 = *((_QWORD *)a1 + 4);
    v6 = *((_QWORD *)a1 + 7);
    result = memset_0(a1, 0, 0x58uLL);
    *((_QWORD *)a1 + 4) = v5;
    *((_QWORD *)a1 + 7) = v6;
    return result;
  }
  v8 = 0;
  v9 = a1[30];
  v10 = a1[14];
  v11 = a1[4];
  v17 = (void *)*((_QWORD *)a1 + 13);
  if ( !v10 )
    goto LABEL_11;
  v12 = a1 + 30;
  for ( i = a1[30]; ; i = *v12 )
  {
    if ( i < 0x80 || i > (unsigned int)v11 )
      goto LABEL_21;
    v14 = *(unsigned int *)((char *)a1 + i);
    if ( v14 == 64 )
    {
      if ( (unsigned __int64)i + 40 <= v11 )
        goto LABEL_9;
      goto LABEL_21;
    }
    if ( v14 != 65 )
      break;
    if ( (unsigned __int64)i + 56 <= v11 )
    {
LABEL_9:
      v1 = *(_QWORD *)((char *)a1 + i + 16);
      goto LABEL_10;
    }
LABEL_21:
    ++v8;
    ++v12;
    if ( v8 >= v10 )
      goto LABEL_11;
  }
  if ( v14 != 66 || (unsigned __int64)i + 40 > v11 )
    goto LABEL_21;
  v1 = *(_QWORD *)((char *)a1 + i + 24);
LABEL_10:
  v4 = *(unsigned int *)((char *)a1 + i + 4);
  v3 = *(unsigned int *)((char *)a1 + i);
LABEL_11:
  memset_0(a1, 0, v11);
  result = v17;
  a1[4] = v11;
  a1[14] = v10;
  *((_QWORD *)a1 + 13) = v17;
  *(_WORD *)a1 = 8;
  *((_BYTE *)a1 + 2) = 40;
  a1[30] = v9;
  v15 = v3 - 64;
  if ( !v15 )
  {
    *(unsigned int *)((char *)a1 + v9) = 64;
    goto LABEL_25;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    *(unsigned int *)((char *)a1 + v9) = 65;
LABEL_25:
    *(unsigned int *)((char *)a1 + v9 + 4) = v4;
    *(_QWORD *)((char *)a1 + v9 + 16) = v1;
    return result;
  }
  if ( v16 == 1 )
  {
    *(unsigned int *)((char *)a1 + v9) = 66;
    *(unsigned int *)((char *)a1 + v9 + 4) = v4;
    *(_QWORD *)((char *)a1 + v9 + 24) = v1;
  }
  return result;
}
