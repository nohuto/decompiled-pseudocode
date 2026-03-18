/*
 * XREFs of PpmWmiGetAllData @ 0x1409B6590
 * Callers:
 *     PpmWmiDispatch @ 0x1409B64C0 (PpmWmiDispatch.c)
 * Callees:
 *     PopAcquireRwLockShared @ 0x140204514 (PopAcquireRwLockShared.c)
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PpmPerfGetCurrentState @ 0x1403B2310 (PpmPerfGetCurrentState.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v9; // r9
  __int64 v11; // rdx
  char v12; // r12
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned int v19; // edx
  int v20; // ebp
  int v21; // ebx
  __int64 result; // rax
  unsigned int *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r9
  unsigned int v30; // eax
  __int64 v31; // r8
  _DWORD *v32; // rbx
  __int64 v33; // r10

  v9 = PPM_IDLESTATES_DATA_GUID;
  v11 = PPM_IDLESTATES_DATA_GUID - *a2;
  if ( !v11 )
    v11 = 0xE710D47A1ACF1686uLL - a2[1];
  if ( v11 )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
    v9 = PPM_IDLESTATES_DATA_GUID;
  }
  v13 = *a2;
  v14 = a1[46];
  v15 = PPM_PERFSTATES_DATA_GUID - *a2;
  if ( PPM_PERFSTATES_DATA_GUID == *a2 )
    v15 = 0x26018D33012BAAB4LL - a2[1];
  if ( v15 || !v14 )
  {
    v17 = v9 - v13;
    if ( !v17 )
      v17 = 0xE710D47A1ACF1686uLL - a2[1];
    if ( v17 || !*a1 )
    {
      v18 = PPM_PERFMON_PERFSTATE_GUID - v13;
      if ( PPM_PERFMON_PERFSTATE_GUID == v13 )
        v18 = 0x9E75876A060BA1B0uLL - a2[1];
      if ( v18 || !v14 )
      {
        v21 = -1073741808;
        v20 = 0;
        goto LABEL_22;
      }
      v16 = 12;
    }
    else
    {
      v16 = 32 * *(_DWORD *)(*a1 + 40LL) + 56;
    }
  }
  else
  {
    v16 = 80;
  }
  v19 = a6 != 0 ? 72 : 64;
  v20 = v19 + v16;
  if ( a3 >= v19 + v16 )
  {
    v23 = (unsigned int *)(a4 + v19);
    *(_DWORD *)a4 = v20;
    if ( a6 )
    {
      v24 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v24;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v19;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v19;
    }
    *(_DWORD *)(a4 + 60) = v16;
    memset_0(v23, 0, v16);
    v25 = *a2;
    v26 = PPM_PERFSTATES_DATA_GUID - *a2;
    if ( PPM_PERFSTATES_DATA_GUID == *a2 )
      v26 = 0x26018D33012BAAB4LL - a2[1];
    if ( v26 || !v14 )
    {
      v27 = PPM_IDLESTATES_DATA_GUID - v25;
      if ( PPM_IDLESTATES_DATA_GUID == v25 )
        v27 = 0xE710D47A1ACF1686uLL - a2[1];
      if ( v27 || !*a1 )
      {
        v28 = PPM_PERFMON_PERFSTATE_GUID - *a2;
        if ( PPM_PERFMON_PERFSTATE_GUID == *a2 )
          v28 = 0x9E75876A060BA1B0uLL - a2[1];
        if ( !v28 && v14 )
          PpmPerfGetCurrentState((__int64)(a1 - 4360), v23, 0LL, v23 + 2, v23 + 1, 0LL);
      }
      else
      {
        v23[1] = *(_DWORD *)(*a1 + 40LL);
        v23[2] = *(_DWORD *)(*a1 + 24LL);
        v23[3] = *(_DWORD *)(*a1 + 32LL);
        *((_QWORD *)v23 + 2) = *(a1 - 4335);
        v29 = *a1;
        v30 = *(_DWORD *)(*a1 + 40LL);
        if ( v30 )
        {
          v31 = 0LL;
          v32 = v23 + 8;
          v33 = v30;
          do
          {
            v31 += 344LL;
            *(v32 - 2) = *(_DWORD *)(v31 + *a1 + 992) / 0xAu;
            *(v32 - 1) = *(_DWORD *)(v31 + *a1 + 1000);
            *v32 = *(_DWORD *)(v29 + 708);
            v32 += 8;
            *((_BYTE *)v32 - 28) = *(_BYTE *)(v29 + 712);
            *((_BYTE *)v32 - 27) = *(_BYTE *)(v29 + 713);
            *((_BYTE *)v32 - 26) = *(_BYTE *)(v31 + *a1 + 1048);
            *((_QWORD *)v32 - 3) = *(unsigned int *)(v31 + *a1 + 1004);
            *(v32 - 4) = 1;
            --v33;
          }
          while ( v33 );
        }
      }
    }
    else
    {
      *v23 = 0;
      v23[1] = *(_DWORD *)(v14 + 448);
      *((_QWORD *)v23 + 1) = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      *((_BYTE *)v23 + 28) = 100;
      *((_BYTE *)v23 + 29) = *(_BYTE *)(v14 + 489);
      v23[8] = HIDWORD(PpmCurrentProfile[0][61 * dword_140F0B70C + 9]);
      *((_QWORD *)v23 + 5) = *(_QWORD *)(v14 + 32);
      v23[16] = 1;
    }
    goto LABEL_21;
  }
  if ( a3 >= 0x38 )
  {
    *(_DWORD *)(a4 + 48) = v20;
    v20 = 56;
    *(_DWORD *)(a4 + 44) = 32;
LABEL_21:
    v21 = 0;
    goto LABEL_22;
  }
  v21 = -1073741789;
LABEL_22:
  if ( v12 )
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  result = (unsigned int)v21;
  if ( v21 < 0 )
    v20 = 0;
  *a5 = v20;
  return result;
}
