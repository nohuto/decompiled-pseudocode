/*
 * XREFs of AcquireGPUResourcesFromSegmentSet @ 0x1400E687C
 * Callers:
 *     ?AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400E5B48 (-AcquireTemporaryResourcesForAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AcquireGPUResourcesFromSegmentSet(__int64 a1, __int64 *a2, int a3, char a4, int a5, __int64 a6)
{
  __int64 v6; // r11
  __int64 v7; // r14
  __int64 v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // r8
  char v17; // dl
  _DWORD *v18; // r10
  int v19; // ecx
  bool v20; // cl
  int v22; // eax
  int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rcx
  _QWORD *v26; // rax
  int v27; // eax
  int v28; // [rsp+20h] [rbp-58h]
  __int64 v29; // [rsp+80h] [rbp+8h]
  char v30; // [rsp+98h] [rbp+20h]

  v30 = a4;
  v6 = *a2;
  v7 = 0LL;
  v10 = a1;
  v29 = *a2;
  v11 = -1071775488;
  while ( (unsigned int)v7 < *(_DWORD *)(v10 + 64) )
  {
    LODWORD(v12) = v7;
    if ( a6 != -1 )
    {
      v27 = a5 ? a5 - 1 : *(unsigned __int16 *)(v10 + 68);
      if ( (_DWORD)v7 != v27 )
        goto LABEL_23;
    }
    v13 = *a2;
    v14 = *(_QWORD *)(*(_QWORD *)(v10 + 1648) + 8 * v7);
    if ( (*(_DWORD *)(v14 + 104) & 0x1001) != 0 )
    {
      if ( a3 == 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(a1);
          WdLogGlobalForLineNumber = 1645;
        }
        goto LABEL_22;
      }
    }
    else if ( (*(_DWORD *)(v13 + 28) & 0x20000) != 0 && *(_DWORD *)(v13 + 184) || (*(_DWORD *)(v13 + 28) & 0x10000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(a1);
        WdLogGlobalForLineNumber = 1654;
      }
      goto LABEL_22;
    }
    if ( a3 != 2 || (*(_DWORD *)(v14 + 104) & 0x1001) != 0 )
    {
      if ( *(int *)(v13 + 184) <= 0 )
        goto LABEL_7;
      v23 = *(_DWORD *)(v14 + 104);
      if ( (v23 & 0x1001) != 0 )
        goto LABEL_7;
      if ( *(_BYTE *)(v13 + 40) )
      {
        v24 = v10 + 48;
        a1 = **(unsigned int **)(v13 + 392);
        if ( (a1 & 4) == 0 || (a1 = *(_QWORD *)(*(_QWORD *)v24 + 24LL), (*(_DWORD *)(a1 + 444) & 8) != 0) )
        {
          if ( (v23 & 0x2004) != 0 )
          {
LABEL_7:
            if ( a4 )
              v15 = *((_DWORD *)a2 + 9);
            else
              v15 = *((_DWORD *)a2 + 10);
            if ( _bittest(&v15, v7) )
            {
              v16 = *(_QWORD *)(v10 + 1648);
              v17 = *(_BYTE *)(v10 + 476);
              v18 = *(_DWORD **)(v16 + 8 * v7);
              if ( ((v17 & 0x10) != 0 || (v17 & 2) != 0) && (v18[26] & 1) != 0 )
              {
                if ( a4 && ((dword_14008163C & 2) != 0 || (*(_DWORD *)(*(_QWORD *)(v10 + 48) + 6984LL) & 0x200000) != 0) )
                  goto LABEL_47;
                if ( (**(_DWORD **)(v6 + 392) & 0x8000) == 0 )
                  goto LABEL_46;
                if ( !a4 )
                  goto LABEL_13;
                if ( (v17 & 0x20) != 0 )
                {
LABEL_46:
                  v12 = *(unsigned __int16 *)(v10 + 68);
                  v18 = *(_DWORD **)(v16 + 8 * v12);
                  goto LABEL_12;
                }
              }
              else
              {
LABEL_12:
                if ( !a4 )
                {
LABEL_13:
                  if ( (_DWORD)v12 == *(unsigned __int16 *)(v10 + 68) && (**(_DWORD **)(v6 + 392) & 0x8000) != 0 )
                  {
LABEL_31:
                    v11 = -1071775488;
LABEL_28:
                    if ( g_IsInternalReleaseOrDbg )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = (unsigned int)v12;
                      WdLogGlobalForLineNumber = 2008;
                    }
                    goto LABEL_23;
                  }
                  v20 = ((a3 - 3) & 0xFFFFFFFA) == 0
                     && a3 != 8
                     && ((v19 = **(_DWORD **)(v6 + 392), (v19 & 0x20000000) == 0) || v19 >= 0)
                     && (v19 & 0x80000) == 0;
                  LOBYTE(v16) = 1;
                  LOBYTE(v28) = v20;
                  v22 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *, __int64, _QWORD, int, int, __int64))(*(_QWORD *)v18 + 16LL))(
                          v18,
                          a2,
                          v16,
                          0LL,
                          v28,
                          a3,
                          a6);
LABEL_27:
                  v11 = v22;
                  if ( v22 >= 0 )
                    return v11;
                  goto LABEL_28;
                }
LABEL_47:
                if ( (v17 & 0x20) != 0 )
                {
LABEL_48:
                  v22 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)v18 + 80LL))(v18, a2);
                  goto LABEL_27;
                }
              }
              if ( (_DWORD)v12 == *(unsigned __int16 *)(v10 + 68) )
                goto LABEL_31;
              goto LABEL_48;
            }
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(a1);
              WdLogGlobalForLineNumber = 1719;
            }
            goto LABEL_22;
          }
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(a1);
          WdLogGlobalForLineNumber = 1692;
          v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v25);
          v26[3] = (**(_DWORD **)(v13 + 392) >> 2) & 1;
          a1 = *(_QWORD *)(*(_QWORD *)v24 + 24LL);
          v26[4] = (*(_DWORD *)(a1 + 444) >> 3) & 1;
          v26[5] = (*(_DWORD *)(v14 + 104) >> 2) & 1;
          v26[6] = (*(_DWORD *)(v14 + 104) >> 13) & 1;
          WdLogGlobalForLineNumber = 1697;
        }
      }
      else
      {
        if ( a3 == 1 )
          goto LABEL_7;
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(a1);
          WdLogGlobalForLineNumber = 1705;
        }
      }
    }
    else if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 1667;
    }
LABEL_22:
    v11 = -1073741823;
LABEL_23:
    a4 = v30;
    v7 = (unsigned int)(v7 + 1);
    v6 = v29;
  }
  return v11;
}
