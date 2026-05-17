/*
 * XREFs of RtlQueryProcessBackTraceInformation @ 0x180046D20
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlQueryProcessBackTraceInformation(_QWORD *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  __int64 *v5; // rcx
  __int64 v6; // r15
  char *v7; // r15
  int v8; // eax
  int v9; // r12d
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  bool v12; // zf
  char *v13; // r14
  int v14; // esi
  _QWORD *v15; // r13
  _WORD *v17; // rdx
  __int64 v18; // rdx
  char *v20; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+18h] BYREF
  char *v25; // [rsp+B8h] [rbp+20h] BYREF

  v2 = RtlpStackTraceDatabase;
  v22 = RtlpStackTraceDatabase;
  if ( !RtlpStackTraceDatabase )
    return 0LL;
  v3 = a1[9] + 24LL;
  v4 = a1[10];
  if ( v3 > v4 )
  {
    if ( v3 > a1[11] )
      return 3221225495LL;
    v20 = (char *)a1 + v4;
    v24 = v3 - v4;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v20, 0LL, &v24, 4096, 4) < 0 )
      return 3221225495LL;
    a1[10] += v24;
  }
  v5 = a1 + 9;
  v6 = a1[9];
  a1[9] = v3;
  v7 = (char *)a1 + v6;
  if ( !v7 )
    return 3221225495LL;
  *(_BYTE *)(v2 + 129) = 1;
  *(_QWORD *)v7 = *(_QWORD *)(v2 + 152) - *(_QWORD *)(v2 + 136);
  *((_QWORD *)v7 + 1) = *(_QWORD *)(v2 + 184) - *(_QWORD *)(v2 + 136);
  *((_DWORD *)v7 + 4) = *(_DWORD *)(v2 + 176);
  v8 = *(_DWORD *)(v2 + 180);
  *((_DWORD *)v7 + 5) = v8;
  v9 = 0;
  v25 = 0LL;
  v23 = 0LL;
  v10 = a1[9] + ((272 * v8 + 7) & 0xFFFFFFF8);
  v11 = a1[10];
  if ( v10 > v11 )
  {
    if ( v10 > a1[11] )
      goto LABEL_13;
    v25 = (char *)a1 + v11;
    v23 = v10 - v11;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v25, 0LL, &v23, 4096, 4) < 0 )
    {
      v5 = a1 + 9;
LABEL_13:
      v9 = -1073741801;
      v18 = *v5 - 24;
      if ( v7 == (char *)a1 + v18 )
        *v5 = v18;
      goto LABEL_15;
    }
    a1[10] += v23;
    v5 = a1 + 9;
  }
  v12 = (_QWORD *)((char *)a1 + *v5) == 0LL;
  v13 = (char *)a1 + *v5;
  *v5 = v10;
  if ( v12 )
    goto LABEL_13;
  v14 = *(_DWORD *)(v2 + 180);
  v15 = *(_QWORD **)(v2 + 184);
  v21 = v15;
  while ( v14-- )
  {
    v21 = --v15;
    v17 = (_WORD *)*v15;
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = v17[4] & 0x7FF;
    *((_WORD *)v13 + 6) = v17[6];
    *((_WORD *)v13 + 7) = v17[7];
    memmove(v13 + 16, v17 + 8, 8LL * (unsigned __int16)v17[7]);
    v13 += 272;
  }
LABEL_15:
  *(_BYTE *)(v2 + 129) = 0;
  if ( v9 >= 0 )
    a1[13] = v7;
  return (unsigned int)v9;
}
