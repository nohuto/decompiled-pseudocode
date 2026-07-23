/*
 * XREFs of PpmWmiGetAllData @ 0x1409B38B0
 * Callers:
 *     PpmWmiDispatch @ 0x1409B37E0 (PpmWmiDispatch.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x1402AE968 (PopAcquireRwLockShared.c)
 *     PpmPerfGetCurrentState @ 0x140439344 (PpmPerfGetCurrentState.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v6; // r10
  __int64 v10; // r9
  __int64 v12; // rdx
  char v13; // r12
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // ebp
  int v22; // ebx
  __int64 result; // rax
  unsigned int *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned int v31; // eax
  __int64 v32; // r8
  _DWORD *v33; // rbx
  __int64 v34; // r10

  v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
  v10 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  v12 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - *a2;
  if ( !v12 )
    v12 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
  if ( v12 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
    v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
    v10 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  }
  v14 = *a2;
  v15 = a1[46];
  v16 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
    v16 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
  if ( v16 || !v15 )
  {
    v18 = v10 - v14;
    if ( !v18 )
      v18 = v6 - a2[1];
    if ( v18 || !*a1 )
    {
      v19 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - v14;
      if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == v14 )
        v19 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
      if ( v19 || !v15 )
      {
        v22 = -1073741808;
        v21 = 0;
        goto LABEL_22;
      }
      v17 = 12;
    }
    else
    {
      v17 = 32 * *(_DWORD *)(*a1 + 40LL) + 56;
    }
  }
  else
  {
    v17 = 80;
  }
  v20 = a6 != 0 ? 72 : 64;
  v21 = v20 + v17;
  if ( a3 >= v20 + v17 )
  {
    v24 = (unsigned int *)(a4 + v20);
    *(_DWORD *)a4 = v21;
    if ( a6 )
    {
      v25 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v25;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v20;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v20;
    }
    *(_DWORD *)(a4 + 60) = v17;
    memset_0(v24, 0, v17);
    v26 = *a2;
    v27 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
    if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
      v27 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
    if ( v27 || !v15 )
    {
      v28 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - v26;
      if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == v26 )
        v28 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
      if ( v28 || !*a1 )
      {
        v29 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
        if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
          v29 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
        if ( !v29 && v15 )
          PpmPerfGetCurrentState((__int64)(a1 - 4360), v24, 0LL, v24 + 2, v24 + 1, 0LL);
      }
      else
      {
        v24[1] = *(_DWORD *)(*a1 + 40LL);
        v24[2] = *(_DWORD *)(*a1 + 24LL);
        v24[3] = *(_DWORD *)(*a1 + 32LL);
        *((_QWORD *)v24 + 2) = *(a1 - 4335);
        v30 = *a1;
        v31 = *(_DWORD *)(*a1 + 40LL);
        if ( v31 )
        {
          v32 = 0LL;
          v33 = v24 + 8;
          v34 = v31;
          do
          {
            v32 += 344LL;
            *(v33 - 2) = *(_DWORD *)(v32 + *a1 + 992) / 0xAu;
            *(v33 - 1) = *(_DWORD *)(v32 + *a1 + 1000);
            *v33 = *(_DWORD *)(v30 + 708);
            v33 += 8;
            *((_BYTE *)v33 - 28) = *(_BYTE *)(v30 + 712);
            *((_BYTE *)v33 - 27) = *(_BYTE *)(v30 + 713);
            *((_BYTE *)v33 - 26) = *(_BYTE *)(v32 + *a1 + 1048);
            *((_QWORD *)v33 - 3) = *(unsigned int *)(v32 + *a1 + 1004);
            *(v33 - 4) = 1;
            --v34;
          }
          while ( v34 );
        }
      }
    }
    else
    {
      *v24 = 0;
      v24[1] = *(_DWORD *)(v15 + 448);
      *((_QWORD *)v24 + 1) = 0LL;
      *((_QWORD *)v24 + 2) = 0LL;
      *((_BYTE *)v24 + 28) = 100;
      *((_BYTE *)v24 + 29) = *(_BYTE *)(v15 + 489);
      v24[8] = HIDWORD(PpmCurrentProfile[0][61 * dword_140F0B38C + 9]);
      *((_QWORD *)v24 + 5) = *(_QWORD *)(v15 + 32);
      v24[16] = 1;
    }
    goto LABEL_21;
  }
  if ( a3 >= 0x38 )
  {
    *(_DWORD *)(a4 + 48) = v21;
    v21 = 56;
    *(_DWORD *)(a4 + 44) = 32;
LABEL_21:
    v22 = 0;
    goto LABEL_22;
  }
  v22 = -1073741789;
LABEL_22:
  if ( v13 )
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  result = (unsigned int)v22;
  if ( v22 < 0 )
    v21 = 0;
  *a5 = v21;
  return result;
}
