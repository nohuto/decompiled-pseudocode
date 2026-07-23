/*
 * XREFs of HalpCollectPmcCounters @ 0x1402D1090
 * Callers:
 *     EtwpReserveWithPmcCounters @ 0x1402D0EE0 (EtwpReserveWithPmcCounters.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 */

char __fastcall HalpCollectPmcCounters(void *a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r11
  char v5; // r10
  _QWORD *v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _QWORD *v15; // r11
  int v16; // ecx
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rbx

  if ( !a1 )
  {
    LOBYTE(v1) = HalpDisableInterrupts();
    v7 = (_QWORD *)*v6;
    v5 = v1;
    if ( (_QWORD *)*v6 == v6 )
      goto LABEL_4;
    while ( 1 )
    {
      v8 = 0LL;
      if ( *((_DWORD *)v7 + 5) )
        break;
LABEL_39:
      v7 = (_QWORD *)*v7;
      if ( v7 == v6 )
        goto LABEL_4;
    }
    while ( 1 )
    {
      v15 = &v7[5 * v8];
      v16 = *((_DWORD *)v15 + 11);
      if ( !v16 )
        break;
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 != 1 )
          break;
        v1 = __readmsr(*((_DWORD *)v15 + 12));
        v18 = v1;
      }
      else
      {
        v1 = __readpmc(*((_DWORD *)v15 + 12));
        v18 = v1;
      }
LABEL_32:
      v19 = *((_DWORD *)v15 + 15);
      if ( v19 == 64 )
      {
        v15[4] = v18;
      }
      else
      {
        if ( v19 < 0x40 )
          v20 = (1LL << v19) - 1;
        else
          v20 = -1LL;
        v1 = v20 & (v18 - v15[3]);
        v15[4] += v1;
      }
      v8 = (unsigned int)(v8 + 1);
      v15[3] = v18;
      if ( (unsigned int)v8 >= *((_DWORD *)v7 + 5) )
        goto LABEL_39;
    }
    v18 = 0LL;
    goto LABEL_32;
  }
  v1 = (unsigned __int64)&HalpSampleProfilingCounters;
  if ( a1 == &HalpSampleProfilingCounters )
    return v1;
  LOBYTE(v1) = HalpDisableInterrupts();
  v4 = 0LL;
  v5 = v1;
  if ( *(_DWORD *)(v2 + 20) )
  {
    while ( 1 )
    {
      v9 = v2 + 40 * v4;
      v10 = *(_DWORD *)(v9 + 44);
      if ( !v10 )
        break;
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          break;
        v1 = __readmsr(*(_DWORD *)(v9 + 48));
        v12 = v1;
      }
      else
      {
        v1 = __readpmc(*(_DWORD *)(v9 + 48));
        v12 = v1;
      }
LABEL_16:
      v13 = *(_DWORD *)(v9 + 60);
      if ( v13 == 64 )
      {
        *(_QWORD *)(v9 + 32) = v12;
      }
      else
      {
        if ( v13 < 0x40 )
          v14 = (1LL << v13) - 1;
        else
          v14 = -1LL;
        v1 = v14 & (v12 - *(_QWORD *)(v9 + 24));
        *(_QWORD *)(v9 + 32) += v1;
      }
      *(_QWORD *)(v9 + 24) = v12;
      if ( v3 )
      {
        v1 = *(_QWORD *)(v9 + 32);
        *(_QWORD *)(v3 + 8 * v4) = v1;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v2 + 20) )
        goto LABEL_4;
    }
    v12 = 0LL;
    goto LABEL_16;
  }
LABEL_4:
  if ( v5 )
    _enable();
  return v1;
}
