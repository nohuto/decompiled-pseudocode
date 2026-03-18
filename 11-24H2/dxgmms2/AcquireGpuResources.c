/*
 * XREFs of AcquireGpuResources @ 0x1400E6D08
 * Callers:
 *     ?PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAUVIDMM_ALLOC@@I_K@Z @ 0x1400EC39C (-PageInAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@W4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x14000DB70 (McTemplateK0pq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     AcquireGPUResourcesFromPreferredSegmentSet @ 0x1400E7674 (AcquireGPUResourcesFromPreferredSegmentSet.c)
 */

__int64 __fastcall AcquireGpuResources(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // rbx
  int v7; // r11d
  unsigned int v8; // r10d
  __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // r12
  int v13; // edi
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rdx
  char v19; // al
  _DWORD *v20; // r10
  int v21; // ecx
  bool v22; // cl
  int v23; // esi
  int v24; // r8d
  int v26; // edx
  bool v27; // r15
  int v28; // ebp
  int v29; // r12d
  int v30; // edi
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rsi
  int v34; // eax
  __int64 v35; // rdx
  char v36; // al
  _DWORD *v37; // r10
  bool v38; // cl
  int v39; // ecx
  int v40; // edx
  __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  int v48; // eax
  int v49; // [rsp+20h] [rbp-68h]
  __int64 v50; // [rsp+40h] [rbp-48h]
  __int64 v51; // [rsp+98h] [rbp+10h]
  int v52; // [rsp+A0h] [rbp+18h]

  v52 = (int)a3;
  v6 = *a2;
  v7 = (int)a3;
  v8 = *((_DWORD *)a2 + 11);
  v51 = *a2;
  v10 = a1;
  if ( v8 )
  {
    if ( !(_BYTE)a4 || (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 6)) & 0x1F) == 0 )
    {
      v23 = AcquireGPUResourcesFromPreferredSegmentSet(a1, (_DWORD)a2, (_DWORD)a3, a4, 4);
      if ( v23 >= 0 )
        goto LABEL_24;
      v7 = v52;
      goto LABEL_2;
    }
    v23 = -1071775488;
    v27 = (((_DWORD)a3 - 3) & 0xFFFFFFFA) == 0
       && (_DWORD)a3 != 8
       && ((v39 = **(_DWORD **)(v6 + 392), (v39 & 0x20000000) == 0) || v39 >= 0)
       && (v39 & 0x80000) == 0;
    if ( !*(_BYTE *)(*(_QWORD *)(v10 + 48) + 7080LL) || v27 )
      v28 = 2;
    else
      v28 = 0;
LABEL_46:
    v29 = 0;
    while ( 1 )
    {
      a1 = (unsigned int)(6 * v29);
      v30 = (*((_DWORD *)a2 + 11) >> (6 * v29)) & 0x1F;
      LOBYTE(a3) = ((*((_DWORD *)a2 + 11) >> (6 * v29)) & 0x20) == 0;
      if ( *((_DWORD *)a2 + 12) >= 0xA0000000 && (unsigned __int64)a2[2] >= 0x1000000 )
        LOBYTE(a3) = ((*((_DWORD *)a2 + 11) >> (6 * v29)) & 0x20) != 0;
      if ( !v30 )
        goto LABEL_68;
      v31 = (unsigned int)(v30 - 1);
      v32 = *a2;
      v33 = *(_QWORD *)(*(_QWORD *)(v10 + 1648) + 8 * v31);
      if ( (*(_DWORD *)(v33 + 104) & 0x1001) != 0 )
      {
        if ( v7 == 1 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(a1);
            WdLogGlobalForLineNumber = 1645;
          }
          goto LABEL_66;
        }
      }
      else if ( (*(_DWORD *)(v32 + 28) & 0x20000) != 0 && *(_DWORD *)(v32 + 184)
             || (*(_DWORD *)(v32 + 28) & 0x10000) != 0 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(a1);
          WdLogGlobalForLineNumber = 1654;
        }
        goto LABEL_66;
      }
      if ( v7 != 2 || (*(_DWORD *)(v33 + 104) & 0x1001) != 0 )
      {
        if ( *(int *)(v32 + 184) > 0 )
        {
          v40 = *(_DWORD *)(v33 + 104);
          if ( (v40 & 0x1001) == 0 )
          {
            if ( *(_BYTE *)(v32 + 40) )
            {
              a1 = **(unsigned int **)(v32 + 392);
              if ( (a1 & 4) != 0 && (a1 = *(_QWORD *)(*(_QWORD *)(v10 + 48) + 24LL), (*(_DWORD *)(a1 + 444) & 8) == 0)
                || (v40 & 0x2004) == 0 )
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(a1);
                  WdLogGlobalForLineNumber = 1692;
                  a3 = (_QWORD *)WdLogNewEntry5_WdTrace(v47);
                  a3[3] = (**(_DWORD **)(v32 + 392) >> 2) & 1;
                  a3[4] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 24LL) + 444LL) >> 3) & 1;
                  a1 = (*(_DWORD *)(v33 + 104) >> 2) & 1;
                  a3[5] = a1;
                  a3[6] = (*(_DWORD *)(v33 + 104) >> 13) & 1;
                  WdLogGlobalForLineNumber = 1697;
                }
                goto LABEL_66;
              }
            }
            else if ( v7 != 1 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(a1);
                WdLogGlobalForLineNumber = 1705;
              }
              goto LABEL_66;
            }
          }
        }
        v34 = *((_DWORD *)a2 + 10);
        if ( _bittest(&v34, v31) )
        {
          v35 = *(_QWORD *)(v10 + 1648);
          v36 = *(_BYTE *)(v10 + 476);
          v37 = *(_DWORD **)(v35 + 8 * v31);
          if ( (v36 & 0x10) != 0 || (v36 & 2) != 0 )
          {
            v6 = v51;
            if ( (v37[26] & 1) != 0 && (**(_DWORD **)(v51 + 392) & 0x8000) == 0 )
            {
              v31 = *(unsigned __int16 *)(v10 + 68);
              v37 = *(_DWORD **)(v35 + 8 * v31);
            }
          }
          else
          {
            v6 = v51;
          }
          v38 = v28 == 1 || v27;
          LOBYTE(v49) = v38;
          LOBYTE(a4) = v28 == 0;
          v23 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *, _QWORD *, __int64, int, int, __int64))(*(_QWORD *)v37 + 16LL))(
                  v37,
                  a2,
                  a3,
                  a4,
                  v49,
                  v7,
                  -1LL);
          if ( v23 >= 0 )
            goto LABEL_24;
          if ( !g_IsInternalReleaseOrDbg )
            goto LABEL_68;
          *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = (unsigned int)v31;
          WdLogGlobalForLineNumber = 1868;
          goto LABEL_67;
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(a1);
          WdLogGlobalForLineNumber = 1719;
        }
      }
      else if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(a1);
        WdLogGlobalForLineNumber = 1667;
      }
LABEL_66:
      v23 = -1073741823;
LABEL_67:
      v6 = v51;
LABEL_68:
      v7 = v52;
      if ( (unsigned int)++v29 > 1 )
      {
        if ( (unsigned int)++v28 > 2 )
          goto LABEL_24;
        goto LABEL_46;
      }
    }
  }
LABEL_2:
  v11 = *a2;
  v12 = 0LL;
  v50 = *a2;
  v13 = -1071775488;
  if ( !*(_DWORD *)(v10 + 64) )
    goto LABEL_23;
  while ( 1 )
  {
    LODWORD(v14) = v12;
    if ( a6 != -1 )
    {
      v48 = a5 ? a5 - 1 : *(unsigned __int16 *)(v10 + 68);
      if ( (_DWORD)v12 != v48 )
        goto LABEL_21;
    }
    v15 = *a2;
    v16 = *(_QWORD *)(*(_QWORD *)(v10 + 1648) + 8 * v12);
    if ( (*(_DWORD *)(v16 + 104) & 0x1001) != 0 )
    {
      if ( v7 == 1 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(a1);
          WdLogGlobalForLineNumber = 1645;
        }
        goto LABEL_20;
      }
    }
    else if ( (*(_DWORD *)(v15 + 28) & 0x20000) != 0 && *(_DWORD *)(v15 + 184) || (*(_DWORD *)(v15 + 28) & 0x10000) != 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(a1);
        WdLogGlobalForLineNumber = 1654;
      }
      goto LABEL_20;
    }
    if ( v7 == 2 && (*(_DWORD *)(v16 + 104) & 0x1001) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(a1);
        WdLogGlobalForLineNumber = 1667;
      }
      goto LABEL_20;
    }
    if ( *(int *)(v15 + 184) <= 0 )
      goto LABEL_8;
    v26 = *(_DWORD *)(v16 + 104);
    if ( (v26 & 0x1001) != 0 )
      goto LABEL_8;
    if ( *(_BYTE *)(v15 + 40) )
      break;
    if ( v7 == 1 )
      goto LABEL_8;
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 1705;
    }
LABEL_20:
    v13 = -1073741823;
LABEL_21:
    v11 = v50;
    v12 = (unsigned int)(v12 + 1);
    v7 = v52;
    if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 64) )
      goto LABEL_22;
  }
  v44 = v10 + 48;
  a1 = **(unsigned int **)(v15 + 392);
  if ( (a1 & 4) != 0 && (a1 = *(_QWORD *)(*(_QWORD *)v44 + 24LL), (*(_DWORD *)(a1 + 444) & 8) == 0)
    || (v26 & 0x2004) == 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 1692;
      v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v45);
      v46[3] = (**(_DWORD **)(v15 + 392) >> 2) & 1;
      v46[4] = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v44 + 24LL) + 444LL) >> 3) & 1;
      a1 = (*(_DWORD *)(v16 + 104) >> 2) & 1;
      v46[5] = a1;
      v46[6] = (*(_DWORD *)(v16 + 104) >> 13) & 1;
      WdLogGlobalForLineNumber = 1697;
    }
    goto LABEL_20;
  }
LABEL_8:
  v17 = *((_DWORD *)a2 + 10);
  if ( !_bittest(&v17, v12) )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(a1);
      WdLogGlobalForLineNumber = 1719;
    }
    goto LABEL_20;
  }
  v18 = *(_QWORD *)(v10 + 1648);
  v19 = *(_BYTE *)(v10 + 476);
  v20 = *(_DWORD **)(v18 + 8 * v12);
  if ( (v19 & 0x10) == 0 && (v19 & 2) == 0 || (v20[26] & 1) == 0 || (**(_DWORD **)(v11 + 392) & 0x8000) != 0 )
  {
    if ( (_DWORD)v12 != *(unsigned __int16 *)(v10 + 68) || (**(_DWORD **)(v11 + 392) & 0x8000) == 0 )
      goto LABEL_12;
    v13 = -1071775488;
LABEL_28:
    a1 = *(_QWORD *)&g_IsInternalReleaseOrDbg;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg) + 24) = (unsigned int)v14;
      WdLogGlobalForLineNumber = 2008;
    }
    goto LABEL_21;
  }
  v14 = *(unsigned __int16 *)(v10 + 68);
  v20 = *(_DWORD **)(v18 + 8 * v14);
LABEL_12:
  v22 = ((v7 - 3) & 0xFFFFFFFA) == 0
     && v7 != 8
     && ((v21 = **(_DWORD **)(v11 + 392), (v21 & 0x20000000) == 0) || v21 >= 0)
     && (v21 & 0x80000) == 0;
  LOBYTE(v11) = 1;
  LOBYTE(v49) = v22;
  v13 = (*(__int64 (__fastcall **)(_DWORD *, __int64 *, __int64, _QWORD, int, int, __int64))(*(_QWORD *)v20 + 16LL))(
          v20,
          a2,
          v11,
          0LL,
          v49,
          v7,
          a6);
  if ( v13 < 0 )
    goto LABEL_28;
LABEL_22:
  v6 = v51;
LABEL_23:
  v23 = v13;
LABEL_24:
  v24 = *(_DWORD *)(v6 + 24);
  if ( (v24 & 0x4000000) != 0 && v23 >= 0 )
  {
    LOBYTE(a1) = (*(_DWORD *)(a2[13] + 104) & 0x1001) != 0 && (v24 & 0x400) == 0;
    v41 = a2[2];
    v42 = *(_QWORD *)(v10 + 48);
    if ( (_BYTE)a1 )
    {
      ++*(_DWORD *)(v42 + 7656);
      *(_QWORD *)(v42 + 7664) += v41;
    }
    else
    {
      ++*(_DWORD *)(v42 + 7640);
      *(_QWORD *)(v42 + 7648) += v41;
      ++*(_DWORD *)(*(_QWORD *)(v10 + 48) + 44700LL);
    }
    if ( (byte_140081241 & 1) != 0 )
      McTemplateK0pq_EtwWriteTransfer();
    if ( g_IsInternalReleaseOrDbg )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
      v43[3] = a2;
      v43[4] = a2[8];
      v43[5] = a2[13];
      WdLogGlobalForLineNumber = 2116;
    }
    *(_DWORD *)(v6 + 24) &= 0xF9FFFFFF;
  }
  return (unsigned int)v23;
}
