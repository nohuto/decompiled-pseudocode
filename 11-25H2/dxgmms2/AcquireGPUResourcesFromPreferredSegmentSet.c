/*
 * XREFs of AcquireGPUResourcesFromPreferredSegmentSet @ 0x1400EB5BC
 * Callers:
 *     AcquireGpuResources @ 0x1400EAC50 (AcquireGpuResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcquireGPUResourcesFromPreferredSegmentSet(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // r9
  int v6; // r14d
  int v9; // edi
  bool v10; // r11
  int v11; // ebp
  unsigned int v12; // r13d
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  char v20; // al
  _DWORD *v21; // r10
  bool v22; // cl
  int v24; // ecx
  int v25; // edx
  __int64 v26; // rcx
  _QWORD *v27; // rax
  int v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+80h] [rbp+8h]
  bool v30; // [rsp+98h] [rbp+20h]

  v5 = *a2;
  v29 = *a2;
  v6 = a3;
  v9 = -1071775488;
  v10 = (((_DWORD)a3 - 3) & 0xFFFFFFFA) == 0
     && (_DWORD)a3 != 8
     && ((v24 = **(_DWORD **)(v5 + 376), (v24 & 0x20000000) == 0) || v24 >= 0)
     && (v24 & 0x80000) == 0;
  v30 = v10;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 48) + 7080LL) || v10 )
    v11 = 2;
  else
    v11 = 0;
  while ( 2 )
  {
    v12 = 0;
    do
    {
      v13 = 6 * v12;
      v14 = (*((_DWORD *)a2 + 11) >> (6 * v12)) & 0x1F;
      LOBYTE(a3) = ((*((_DWORD *)a2 + 11) >> (6 * v12)) & 0x20) == 0;
      if ( *((_DWORD *)a2 + 12) >= 0xA0000000 && (unsigned __int64)a2[2] >= 0x1000000 )
        LOBYTE(a3) = ((*((_DWORD *)a2 + 11) >> (6 * v12)) & 0x20) != 0;
      if ( v14 )
      {
        v15 = (unsigned int)(v14 - 1);
        v16 = *a2;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1648) + 8 * v15);
        if ( (*(_DWORD *)(v17 + 104) & 0x1001) != 0 )
        {
          if ( v6 == 1 )
          {
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v13);
              WdLogGlobalForLineNumber = 1645;
            }
            goto LABEL_25;
          }
        }
        else if ( (*(_DWORD *)(v16 + 28) & 0x20000) != 0 && *(_DWORD *)(v16 + 184)
               || (*(_DWORD *)(v16 + 28) & 0x10000) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v13);
            WdLogGlobalForLineNumber = 1654;
          }
          goto LABEL_25;
        }
        if ( v6 == 2 && (*(_DWORD *)(v17 + 104) & 0x1001) == 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v13);
            WdLogGlobalForLineNumber = 1667;
          }
LABEL_25:
          v9 = -1073741823;
          goto LABEL_44;
        }
        if ( *(int *)(v16 + 184) > 0 )
        {
          v25 = *(_DWORD *)(v17 + 104);
          if ( (v25 & 0x1001) == 0 )
          {
            if ( *(_BYTE *)(v16 + 40) )
            {
              v13 = **(unsigned int **)(v16 + 376);
              if ( (v13 & 4) != 0 && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL), (*(_DWORD *)(v13 + 444) & 8) == 0)
                || (v25 & 0x2004) == 0 )
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(v13);
                  WdLogGlobalForLineNumber = 1692;
                  v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v26);
                  v27[3] = (**(_DWORD **)(v16 + 376) >> 2) & 1;
                  v27[4] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL) + 444LL) >> 3) & 1;
                  v27[5] = (*(_DWORD *)(v17 + 104) >> 2) & 1;
                  v27[6] = (*(_DWORD *)(v17 + 104) >> 13) & 1;
                  WdLogGlobalForLineNumber = 1697;
                }
                goto LABEL_25;
              }
            }
            else if ( v6 != 1 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(v13);
                WdLogGlobalForLineNumber = 1705;
              }
              goto LABEL_25;
            }
          }
        }
        v18 = *((_DWORD *)a2 + 10);
        if ( !_bittest(&v18, v15) )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(v13);
            WdLogGlobalForLineNumber = 1719;
          }
          goto LABEL_25;
        }
        v19 = *(_QWORD *)(a1 + 1648);
        v20 = *(_BYTE *)(a1 + 476);
        v21 = *(_DWORD **)(v19 + 8 * v15);
        if ( ((v20 & 0x10) != 0 || (v20 & 2) != 0) && (v21[26] & 1) != 0 && (**(_DWORD **)(v5 + 376) & 0x8000) == 0 )
        {
          v15 = *(unsigned __int16 *)(a1 + 68);
          v21 = *(_DWORD **)(v19 + 8 * v15);
        }
        v22 = v11 == 1 || v10;
        LOBYTE(v28) = v22;
        LOBYTE(v5) = v11 == 0;
        v9 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *, __int64, __int64, int, int, __int64))(*(_QWORD *)v21 + 16LL))(
               v21,
               a2,
               a3,
               v5,
               v28,
               v6,
               -1LL);
        if ( v9 >= 0 )
          return (unsigned int)v9;
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg) + 24) = v15;
          WdLogGlobalForLineNumber = 1868;
        }
      }
LABEL_44:
      v10 = v30;
      ++v12;
      v5 = v29;
    }
    while ( v12 <= a5 );
    if ( (unsigned int)++v11 <= 2 )
      continue;
    return (unsigned int)v9;
  }
}
