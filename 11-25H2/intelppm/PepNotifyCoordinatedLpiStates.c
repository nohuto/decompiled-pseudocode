/*
 * XREFs of PepNotifyCoordinatedLpiStates @ 0x1400394DC
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x140037DB4 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1400066F0 (GetDevExtFromIndex.c)
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepNotifyCoordinatedLpiStates(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  _DWORD *v7; // r13
  int v8; // r8d
  int v9; // r11d
  __int64 v10; // rbp
  _QWORD *v11; // r9
  __int64 v12; // r10
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _DWORD *v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // r12d
  unsigned int *Pool2; // rax
  __int64 v19; // r8
  unsigned int *v20; // rdi
  char *v21; // r11
  char *v22; // r14
  _QWORD *v23; // r9
  unsigned int v24; // esi
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // r10
  int v28; // eax
  unsigned int v29; // r13d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 i; // r9
  __int64 v33; // rcx
  unsigned int j; // r11d
  __int64 v35; // rdx
  char v36; // al

  v4 = *a3;
  v5 = 0;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v11 = a3 + 90;
    v12 = v4;
    do
    {
      v13 = *((_DWORD *)v11 - 3);
      v8 += v13;
      if ( v13 )
      {
        v14 = v13;
        v15 = (_DWORD *)(*v11 + 4LL);
        do
        {
          v9 += *v15;
          v15 += 4;
          --v14;
        }
        while ( v14 );
      }
      v11 += 40;
      --v12;
    }
    while ( v12 );
  }
  v16 = (96 * v4 + 15) & 0xFFFFFFF8;
  v17 = v16 + 24 * v8;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, v17 + 4 * v9, 1919119952LL);
  v20 = Pool2;
  if ( Pool2 )
  {
    v21 = (char *)Pool2 + v16;
    v22 = (char *)Pool2 + v17;
    *Pool2 = v4;
    if ( v4 )
    {
      v19 = (__int64)(a3 + 87);
      v23 = Pool2 + 24;
      do
      {
        v24 = 0;
        *((_DWORD *)v23 - 2) = *(_DWORD *)v19;
        *v23 = v21;
        v25 = *(unsigned int *)v19;
        v21 += 24 * v25;
        if ( (_DWORD)v25 )
        {
          do
          {
            v26 = *v23;
            v27 = *(_QWORD *)(v19 + 12) + 16LL * v24;
            if ( *(_DWORD *)v27 != -1 )
              *(_QWORD *)(v26 + 24LL * v24) = *(_QWORD *)(GetDevExtFromIndex(*(_DWORD *)v27) + 1120);
            v28 = *(_DWORD *)(v27 + 4);
            v29 = 0;
            *(_QWORD *)(v26 + 24LL * v24 + 16) = v22;
            *(_DWORD *)(v26 + 24LL * v24 + 8) = v28;
            v30 = *(unsigned int *)(v27 + 4);
            v22 += 4 * v30;
            if ( (_DWORD)v30 )
            {
              do
              {
                v31 = v29++;
                *(_DWORD *)(*(_QWORD *)(v26 + 24LL * v24 + 16) + 4 * v31) = *(unsigned __int8 *)(*(_QWORD *)(v27 + 8)
                                                                                               + 4 * v31);
              }
              while ( v29 < *(_DWORD *)(v27 + 4) );
            }
            ++v24;
          }
          while ( v24 < *(_DWORD *)v19 );
        }
        v23 += 12;
        v19 += 320LL;
        --v10;
      }
      while ( v10 );
      v7 = a2;
    }
    for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
    {
      v33 = *(_QWORD *)&v7[10 * (unsigned int)i + 6];
      if ( v33 )
      {
        for ( j = 0; j < *(_DWORD *)(v33 + 16); *(_QWORD *)&v20[v35 + 20] = *(_QWORD *)(v33 + 8 * v19 + 96) )
        {
          v19 = 10LL * j;
          v35 = 24LL * (j + *(_DWORD *)(a4 + 4LL * (unsigned int)i));
          v20[v35 + 2] = *(_DWORD *)(v33 + 80LL * j + 24);
          v20[v35 + 3] = *(_DWORD *)(v33 + 80LL * j + 28);
          v20[v35 + 4] = *(_DWORD *)(v33 + 80LL * j + 32);
          v20[v35 + 5] = *(_DWORD *)(v33 + 80LL * j + 36);
          v20[v35 + 6] = *(_DWORD *)(v33 + 80LL * j + 40);
          v36 = *(_BYTE *)(v33 + 80LL * j + 48);
          if ( v36 == 126 )
          {
            LOBYTE(v20[v35 + 7]) = 1;
            *(_QWORD *)&v20[v35 + 8] = *(_QWORD *)(v33 + 80LL * j + 52);
          }
          else
          {
            LOBYTE(v20[v35 + 8]) = v36;
            BYTE1(v20[v35 + 8]) = *(_BYTE *)(v33 + 80LL * j + 49);
            BYTE2(v20[v35 + 8]) = *(_BYTE *)(v33 + 80LL * j + 50);
            HIBYTE(v20[v35 + 8]) = *(_BYTE *)(v33 + 80LL * j + 51);
            *(_QWORD *)&v20[v35 + 10] = *(_QWORD *)(v33 + 80LL * j + 52);
          }
          ++j;
          LOBYTE(v20[v35 + 12]) = *(_BYTE *)(v33 + 8 * v19 + 60);
          BYTE1(v20[v35 + 12]) = *(_BYTE *)(v33 + 8 * v19 + 61);
          BYTE2(v20[v35 + 12]) = *(_BYTE *)(v33 + 8 * v19 + 62);
          HIBYTE(v20[v35 + 12]) = *(_BYTE *)(v33 + 8 * v19 + 63);
          *(_QWORD *)&v20[v35 + 14] = *(_QWORD *)(v33 + 8 * v19 + 64);
          LOBYTE(v20[v35 + 16]) = *(_BYTE *)(v33 + 8 * v19 + 72);
          BYTE1(v20[v35 + 16]) = *(_BYTE *)(v33 + 8 * v19 + 73);
          BYTE2(v20[v35 + 16]) = *(_BYTE *)(v33 + 8 * v19 + 74);
          HIBYTE(v20[v35 + 16]) = *(_BYTE *)(v33 + 8 * v19 + 75);
          *(_QWORD *)&v20[v35 + 18] = *(_QWORD *)(v33 + 8 * v19 + 76);
        }
      }
    }
    ((void (__fastcall *)(_QWORD, unsigned int *, __int64, __int64))qword_140019530)(
      *(_QWORD *)(a1 + 1120),
      v20,
      v19,
      i);
    ExFreePoolWithTag(v20, (ULONG)1919119952);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
