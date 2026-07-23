/*
 * XREFs of KiStartReadyQueueEnumeratorForRescheduleContext @ 0x1403C0D20
 * Callers:
 *     KiSearchForNewThreadsForRescheduleContext @ 0x1402A71B0 (KiSearchForNewThreadsForRescheduleContext.c)
 *     KiAttemptToScheduleThreadToBusyIsolationUnit @ 0x1403C9EC0 (KiAttemptToScheduleThreadToBusyIsolationUnit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiStartReadyQueueEnumeratorForRescheduleContext(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // r12
  unsigned __int8 *v4; // r10
  int *v5; // r8
  int v6; // r9d
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rax
  char *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  unsigned __int8 v17; // r11
  char v18; // cl
  int v19; // edx
  int v20; // esi
  int v21; // ebx
  __int64 v22; // rax
  _DWORD *v23; // rax
  int v24; // r10d
  unsigned int v25; // r8d
  __int64 v26; // r11
  unsigned int v27; // ebx
  _DWORD *v28; // rdx
  _DWORD *v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 result; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned __int8 *v35; // [rsp+38h] [rbp+10h]

  v35 = a2;
  v2 = *a2;
  if ( !*a2 )
    goto LABEL_37;
  v4 = a2 + 16;
  v5 = (int *)(a1 + 88);
  v6 = 1;
  v7 = *a2;
  v8 = v7;
  do
  {
    v9 = *((_QWORD *)v4 + 2);
    v10 = *(_QWORD *)v4;
    v11 = *(_QWORD *)(v9 + 104);
    v12 = (char *)(v9 + 195);
    if ( !v11
      || (v13 = v11 + *(unsigned int *)(v10 + 216), v14 = v13, *v12 >= 16)
      || (*(_DWORD *)(v9 + 120) & 0x200) != 0
      || (v4[32] & 4) != 0 && (*(_DWORD *)(v9 + 484) || *(_BYTE *)(v9 + 390) == 1) )
    {
LABEL_13:
      v13 = 0LL;
    }
    else
    {
      v15 = v11 + *(unsigned int *)(v10 + 216);
      while ( (*(_BYTE *)(v15 + 112) & 2) == 0 )
      {
        v15 = *(_QWORD *)(v15 + 416);
        if ( !v15 )
        {
          do
          {
            v16 = *(_DWORD *)(v14 + 124);
            if ( v16 )
              break;
            v14 = *(_QWORD *)(v14 + 416);
          }
          while ( v14 );
          if ( v16 )
            break;
          goto LABEL_13;
        }
      }
    }
    v17 = v4[32];
    if ( (v17 & 1) != 0 )
    {
      v19 = -1;
      v20 = -1;
      v21 = -1;
    }
    else
    {
      v18 = *v12;
      if ( *v12 == 63 )
      {
        v19 = 0;
LABEL_20:
        v20 = 0;
        v21 = 0;
        goto LABEL_21;
      }
      if ( (v17 & 0x10) != 0 )
      {
        v20 = -1;
        v21 = -1;
        v19 = -(v18 != 0) - 1;
      }
      else
      {
        if ( !v13 )
        {
          v19 = ~((1 << v18) - 1);
          if ( (v17 & 8) == 0 )
            v19 &= ~(1 << v18);
          goto LABEL_20;
        }
        v19 = -1;
        v21 = ~((1 << v18) - 1);
        v20 = *(_DWORD *)(*(_QWORD *)(v13 + 424) + 124LL);
        if ( (v17 & 8) == 0 )
          v21 &= ~(1 << v18);
      }
    }
LABEL_21:
    *((_QWORD *)v5 - 5) = v10;
    v22 = *((_QWORD *)v4 + 1);
    v4 += 40;
    *((_QWORD *)v5 - 4) = v22;
    *v5 = v19;
    *((_QWORD *)v5 - 2) = v13;
    *(v5 - 2) = v20;
    *(v5 - 1) = v21;
    v5 += 12;
    --v8;
  }
  while ( v8 );
  v23 = (_DWORD *)(a1 + 92);
  LOBYTE(v24) = 0;
  v25 = 1;
  do
  {
    if ( ((unsigned __int8)v24 & (unsigned __int8)v6) == 0 )
    {
      v26 = *(_QWORD *)(v23 - 9);
      if ( v26 )
      {
        v27 = v25;
        *v23 = *(v23 - 1);
        if ( v25 < (unsigned int)v2 )
        {
          v28 = (_DWORD *)(a1 + 48LL * v25 + 88);
          do
          {
            if ( *((_QWORD *)v28 - 4) == v26 )
            {
              *v23 |= *v28;
              v24 = (unsigned __int8)v24 | (1 << v27);
            }
            ++v27;
            v28 += 12;
          }
          while ( v27 < (unsigned int)v2 );
        }
      }
      v24 = (unsigned __int8)v24 | (1 << (v25 - 1));
    }
    ++v25;
    v6 = __ROL4__(v6, 1);
    v23 += 12;
    --v7;
  }
  while ( v7 );
  v29 = (_DWORD *)(a1 + 88);
  v30 = v2;
  do
  {
    v31 = *((_QWORD *)v29 - 4);
    *v29 &= *(_DWORD *)(*((_QWORD *)v29 - 5) + 33752LL);
    if ( v31 )
      v29[1] &= *(_DWORD *)(v31 + 8);
    v29 += 12;
    --v30;
  }
  while ( v30 );
  a2 = v35;
LABEL_37:
  if ( !KiForceIdleDisabled && KiForceIdleState == 4 && (_DWORD)v2 )
  {
    v33 = a1 + 92;
    v34 = v2;
    do
    {
      *(_QWORD *)(v33 - 4) = 0LL;
      *(_QWORD *)(v33 - 20) = 0LL;
      *(_QWORD *)(v33 - 12) = 0LL;
      v33 += 48LL;
      --v34;
    }
    while ( v34 );
  }
  *(_DWORD *)a1 = v2;
  *(_BYTE *)(a1 + 13) = 0;
  result = a2[1];
  *(_BYTE *)(a1 + 9) = result;
  return result;
}
