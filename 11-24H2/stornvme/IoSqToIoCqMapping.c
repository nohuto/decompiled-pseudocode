/*
 * XREFs of IoSqToIoCqMapping @ 0x14001AEE8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 * Callees:
 *     IsIntelChatham @ 0x140017C70 (IsIntelChatham.c)
 *     NVMeCleanUpSqCqMapping @ 0x14001BD1C (NVMeCleanUpSqCqMapping.c)
 *     NVMeGetCompletionQueueForAssignment @ 0x14001DC88 (NVMeGetCompletionQueueForAssignment.c)
 *     NVMeLogHeterogeneousQueueMappingFallback @ 0x14001E3D4 (NVMeLogHeterogeneousQueueMappingFallback.c)
 *     NVMeTelemetryHeterogeneousQueueMappingFallback @ 0x14001ECD8 (NVMeTelemetryHeterogeneousQueueMappingFallback.c)
 */

char __fastcall IoSqToIoCqMapping(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // rax
  unsigned __int16 *v4; // r13
  unsigned int v5; // esi
  unsigned int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rdx
  unsigned __int8 v12; // cl
  __int64 v13; // r8
  __int16 v14; // ax
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned int v17; // edi
  unsigned int i; // ecx
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // r8
  unsigned int k; // r12d
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  unsigned int m; // r12d
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rdx
  const wchar_t *v31; // rdx
  const wchar_t *v32; // rdx
  unsigned int j; // edi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  unsigned int v38; // ecx
  unsigned __int16 v39; // r9
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned int v43; // edx
  __int64 v44; // rcx
  int v46; // [rsp+90h] [rbp+7h] BYREF
  unsigned int v47; // [rsp+94h] [rbp+Bh]
  unsigned __int16 v48; // [rsp+F0h] [rbp+67h] BYREF
  int v49; // [rsp+F8h] [rbp+6Fh] BYREF
  int v50; // [rsp+100h] [rbp+77h] BYREF
  int v51; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = 0;
  v50 = 0;
  v48 = 1;
  v49 = 2;
  if ( *(_BYTE *)(a1 + 20) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 936) + 58LL) = *(_WORD *)(*(_QWORD *)(a1 + 944) + 168LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 944) + 176LL) = 0;
    LOBYTE(v3) = IsIntelChatham(a1);
    if ( (_BYTE)v3 )
    {
      v3 = *(_QWORD *)(a1 + 944);
      *(_DWORD *)(v3 + 176) = 1;
    }
    return v3;
  }
  ((void (*)(void))NVMeCleanUpSqCqMapping)();
  v4 = (unsigned __int16 *)(a1 + 272);
  v5 = 0;
  while ( v5 < *(unsigned __int16 *)(a1 + 332) )
  {
    v6 = *v4;
    v7 = v5;
    v8 = *(_QWORD *)(a1 + 944) + 392LL * v5++;
    if ( (_WORD)v6 == 1 )
      v9 = 3 * v7;
    else
      v9 = 3LL * (v5 % v6);
    v10 = *(_QWORD *)(a1 + 280) + 8 * v9;
    *(_DWORD *)(v8 + 176) = *(_DWORD *)v10;
    *(_QWORD *)(v10 + 16) = v8;
    if ( *(_BYTE *)(v8 + 248) && (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
    {
      v11 = *(__int64 **)(v10 + 8);
      v12 = 0;
      v51 = 0;
      do
      {
        v13 = *v11;
        if ( _bittest64(&v13, v12) )
          break;
        ++v12;
      }
      while ( v12 < 0x40u );
      v14 = *((_WORD *)v11 + 4);
      BYTE2(v51) = v12;
      LOWORD(v51) = v14;
      StorPortNotification(4107LL, a1, v8 + 264);
    }
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      StorPortExtendedFunction(86LL, a1, 0LL, 0LL);
  }
  if ( !g_HeteroSystem || *(_WORD *)(a1 + 330) < 2u )
    goto LABEL_64;
  v46 = 0;
  v47 = -1;
  v15 = 0;
  v16 = 0;
  if ( !*(_WORD *)(a1 + 234) )
    goto LABEL_62;
  v17 = 0;
  do
  {
    if ( !(unsigned int)StorPortExtendedFunction(116LL, a1, *(unsigned int *)(*(_QWORD *)(a1 + 264) + 72LL * v1), &v46)
      && v46 )
    {
      for ( i = 0; i < *v4; ++i )
      {
        v19 = *(_QWORD *)(a1 + 280);
        if ( *(_DWORD *)(v19 + 24LL * i) == v46 )
        {
          v20 = *(_QWORD *)(v19 + 24LL * i + 16);
          v21 = *(_BYTE *)(*(_QWORD *)(a1 + 264) + 72LL * v1 + 4);
          if ( v21 )
          {
            if ( v21 == 1 )
            {
              *(_DWORD *)(v20 + 244) = *(_DWORD *)(v20 + 244) & 0xFFFFFFF0 | 1;
              ++v16;
            }
          }
          else
          {
            *(_DWORD *)(v20 + 244) &= 0xFFFFFFF0;
            ++v15;
          }
          break;
        }
      }
    }
    ++v1;
  }
  while ( v1 < *(unsigned __int16 *)(a1 + 234) );
  if ( !v15 || !v16 || v16 + v15 != *(unsigned __int16 *)(a1 + 332) )
  {
LABEL_62:
    v32 = L"CQ count is 0 for CE 0 or CE 1";
LABEL_63:
    NVMeLogHeterogeneousQueueMappingFallback(a1, (_DWORD)v32, 0, v15, v16);
    *(_DWORD *)(a1 + 4064) |= 0x10u;
LABEL_64:
    if ( (*(_DWORD *)(a1 + 4064) & 0x10) != 0 )
    {
      NVMeTelemetryHeterogeneousQueueMappingFallback(a1);
      NVMeCleanUpSqCqMapping(a1);
    }
    v50 = 0;
    for ( j = 0; ; ++j )
    {
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 330);
      if ( j >= (unsigned int)v3 )
        break;
      v34 = *(_QWORD *)(a1 + 936) + 208LL * j;
      LOBYTE(v3) = NVMeGetCompletionQueueForAssignment(
                     a1,
                     (unsigned int)&v50,
                     (unsigned int)&v48,
                     (unsigned int)&v49,
                     0LL);
      if ( !(_BYTE)v3 )
      {
        if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
          LOBYTE(v3) = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
        break;
      }
      v35 = v48;
      *(_WORD *)(v34 + 58) = v48;
      v36 = *(_QWORD *)(a1 + 944);
      v37 = 392 * v35;
      if ( v49 )
      {
        if ( v49 == 1 )
        {
          *(_QWORD *)(*(_QWORD *)(v37 + v36 - 168) + 8LL * (unsigned int)(*(_DWORD *)(v37 + v36 - 176))++) = v34;
          ++*(_DWORD *)(v37 + v36 - 180);
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v37 + v36 - 200) + 8LL * (unsigned int)(*(_DWORD *)(v37 + v36 - 208))++) = v34;
        ++*(_DWORD *)(v37 + v36 - 212);
      }
    }
    v38 = *(unsigned __int16 *)(a1 + 330);
    v39 = 1;
    if ( j < v38 )
    {
      do
      {
        LOWORD(v3) = v38;
        v40 = *(_QWORD *)(a1 + 936) + 208LL * j;
        if ( v39 > *(_WORD *)(a1 + 332) )
          goto LABEL_79;
        v41 = *(_QWORD *)(a1 + 944);
        ++j;
        *(_WORD *)(v40 + 58) = v39;
        v3 = v39++;
        v42 = 392 * v3;
        *(_QWORD *)(*(_QWORD *)(392 * v3 + v41 - 200) + 8LL * *(unsigned int *)(392 * v3 + v41 - 208)) = v40;
        ++*(_DWORD *)(v42 + v41 - 208);
        ++*(_DWORD *)(v42 + v41 - 212);
        LOWORD(v3) = *(_WORD *)(a1 + 330);
        if ( v39 > *(_WORD *)(a1 + 332) )
LABEL_79:
          v39 = 1;
        LOWORD(v38) = v3;
      }
      while ( j < (unsigned __int16)v3 );
    }
    goto LABEL_81;
  }
  while ( 2 )
  {
    LODWORD(v3) = *(unsigned __int16 *)(a1 + 330);
    if ( v17 < (unsigned int)v3 )
    {
      v51 = 1;
      for ( k = 0; k < v16 && v17 < *(unsigned __int16 *)(a1 + 330); ++k )
      {
        v23 = *(_QWORD *)(a1 + 936) + 208LL * v17;
        if ( !(unsigned __int8)NVMeGetCompletionQueueForAssignment(
                                 a1,
                                 (unsigned int)&v50,
                                 (unsigned int)&v48,
                                 (unsigned int)&v49,
                                 (__int64)&v51) )
        {
          v31 = L"Class efficiency 1: No CQ Found";
LABEL_59:
          NVMeLogHeterogeneousQueueMappingFallback(a1, (_DWORD)v31, *(unsigned __int16 *)(v23 + 48), v15, v16);
          *(_DWORD *)(a1 + 4064) |= 0x10u;
          goto LABEL_64;
        }
        v24 = v49;
        v25 = *(_QWORD *)(a1 + 944);
        v26 = 392LL * v48;
        *(_WORD *)(v23 + 58) = v48;
        if ( v24 )
        {
          if ( v24 == 1 )
          {
            *(_QWORD *)(*(_QWORD *)(v26 + v25 - 168) + 8LL * (unsigned int)(*(_DWORD *)(v26 + v25 - 176))++) = v23;
            ++*(_DWORD *)(v26 + v25 - 180);
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v26 + v25 - 200) + 8LL * (unsigned int)(*(_DWORD *)(v26 + v25 - 208))++) = v23;
          ++*(_DWORD *)(v26 + v25 - 212);
        }
        ++v17;
      }
      v51 = 0;
      for ( m = 0; m < v15 && v17 < *(unsigned __int16 *)(a1 + 330); ++m )
      {
        v23 = *(_QWORD *)(a1 + 936) + 208LL * v17;
        if ( !(unsigned __int8)NVMeGetCompletionQueueForAssignment(
                                 a1,
                                 (unsigned int)&v50,
                                 (unsigned int)&v48,
                                 (unsigned int)&v49,
                                 (__int64)&v51) )
        {
          v31 = L"Class efficiency 0: No CQ Found";
          goto LABEL_59;
        }
        v28 = v49;
        v29 = *(_QWORD *)(a1 + 944);
        v30 = 392LL * v48;
        *(_WORD *)(v23 + 58) = v48;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            *(_QWORD *)(*(_QWORD *)(v30 + v29 - 168) + 8LL * (unsigned int)(*(_DWORD *)(v30 + v29 - 176))++) = v23;
            ++*(_DWORD *)(v30 + v29 - 180);
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(v30 + v29 - 200) + 8LL * (unsigned int)(*(_DWORD *)(v30 + v29 - 208))++) = v23;
          ++*(_DWORD *)(v30 + v29 - 212);
        }
        ++v17;
      }
      if ( v17 >= *(unsigned __int16 *)(a1 + 330) )
        continue;
      if ( v47 == -1 || v47 < v17 )
      {
        v47 = v17;
        continue;
      }
      v32 = L"No progress for queue mapping";
      goto LABEL_63;
    }
    break;
  }
LABEL_81:
  v43 = 0;
  if ( *(_WORD *)(a1 + 332) )
  {
    do
    {
      v3 = v43++;
      v44 = *(_QWORD *)(a1 + 944) + 392 * v3;
      *(_DWORD *)(v44 + 184) = 0;
      *(_DWORD *)(v44 + 216) = 0;
      LODWORD(v3) = *(unsigned __int16 *)(a1 + 332);
    }
    while ( v43 < (unsigned int)v3 );
  }
  return v3;
}
