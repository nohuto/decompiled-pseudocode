/*
 * XREFs of ?PurgeContent@VIDMM_SEGMENT@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@PEA_K@Z @ 0x1400D6EFC
 * Callers:
 *     ?PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDMM_PURGE_STATISTICS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400D644C (-PurgeSegments@VIDMM_PHYSICAL_ADAPTER@@QEAAXPEAVVIDMM_GLOBAL@@PEAU1@UVIDMM_PURGE_FLAGS@@PEAUVIDM.c)
 * Callees:
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1400BE8F8 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1400D7384 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@UVIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1400D758C (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400D79C4 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::PurgeContent(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  _QWORD *v7; // r15
  _QWORD *v8; // rax
  int v9; // edx
  _QWORD *v10; // rcx
  _QWORD *v11; // r12
  _QWORD *v12; // rax
  _QWORD **v13; // rax
  _QWORD *v14; // r13
  _DWORD *v15; // rdi
  __int64 v16; // r14
  int v17; // ecx
  __int64 *v18; // r8
  __int64 **v19; // r14
  __int64 *v20; // rdi
  __int64 *v21; // rdx
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 *v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rax
  __int64 *v29; // r8
  __int64 **v30; // r14
  __int64 *v31; // rdi
  __int64 *v32; // rdx
  __int64 *v33; // rax
  __int64 **v34; // rcx
  __int64 *v35; // rax
  __int64 result; // rax
  __int64 v37; // rdx
  __int64 *v38; // rcx
  __int64 *v39; // rax
  VIDMM_GLOBAL *v40; // rcx
  _QWORD **v41; // [rsp+20h] [rbp-20h]
  _QWORD *i; // [rsp+28h] [rbp-18h]
  __int64 v43; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v44; // [rsp+38h] [rbp-8h]
  __int64 v45; // [rsp+90h] [rbp+50h]

  v45 = a3;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    WdLogGlobalForLineNumber = 3347;
LABEL_3:
    a3 = v45;
  }
  v6 = (_QWORD *)(a1 + 192);
  v7 = *(_QWORD **)(a1 + 192);
LABEL_5:
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    v9 = a2 & 8;
    if ( (a2 & 8) == 0 || *v8 == a3 )
    {
      v10 = v8 + 5;
      v11 = (_QWORD *)v8[5];
      for ( i = v8 + 5; ; v10 = i )
      {
        v12 = v11;
        if ( v11 == v10 )
        {
          a3 = v45;
          v6 = (_QWORD *)(a1 + 192);
          goto LABEL_5;
        }
        v11 = (_QWORD *)*v11;
        v13 = (_QWORD **)(v12 + 2);
        v41 = v13;
        v14 = *v13;
        while ( v14 != v13 )
        {
          v15 = v14 - 7;
          v14 = (_QWORD *)*v14;
          v16 = **(_QWORD **)v15;
          v13 = v41;
          if ( (*(_DWORD *)(v16 + 28) & 0x800) == 0 )
          {
            v17 = **(_DWORD **)(v16 + 392);
            if ( (v17 & 0x40000000) != 0 && v17 >= 0 && !v9 )
            {
              WdLogSingleEntry1(3LL, v15);
              v40 = *(VIDMM_GLOBAL **)(a1 + 24);
              WdLogGlobalForLineNumber = 3416;
              if ( VIDMM_GLOBAL::InvalidateOneAllocation(v40, (struct VIDMM_GLOBAL_ALLOC *)v16) )
                goto LABEL_3;
              v9 = a2 & 8;
            }
            if ( (*((_BYTE *)v15 + 25) & 1) == 0 )
              goto LABEL_14;
            if ( v9 )
            {
              WdLogSingleEntry1(2LL, v15);
              WdLogGlobalForLineNumber = 3433;
LABEL_18:
              v9 = a2 & 8;
              v13 = v41;
            }
            else
            {
              VIDMM_GLOBAL::UnpinOneAllocation(*(VIDMM_GLOBAL **)(a1 + 24), (__int64)v15, 3, 0);
LABEL_14:
              v9 = a2 & 8;
              v13 = v41;
              if ( (**(_DWORD **)(v16 + 392) & 0x10000000) == 0 && (*(_DWORD *)(v16 + 24) & 0x100) == 0 )
              {
                v13 = v41;
                if ( (v15[7] & 3) != 0 )
                {
                  VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)(a1 + 24), (struct VIDMM_ALLOC *)v15);
                  goto LABEL_18;
                }
              }
            }
          }
        }
      }
    }
  }
  v18 = &v43;
  v44 = &v43;
  v43 = (__int64)&v43;
  v19 = (__int64 **)(a1 + 8);
  while ( 1 )
  {
    v20 = *v19;
    if ( *v19 == (__int64 *)v19 )
      break;
    v21 = v20 - 33;
    if ( (*(_DWORD *)v20[16] & 0x10000000) == 0
      && (*((_DWORD *)v21 + 7) & 0x800) == 0
      && (v21[3] & 0x100) == 0
      && ((a2 & 4) == 0 || *(_QWORD *)(*(v20 - 33) + 16) + *(_QWORD *)(*(v20 - 33) + 72) > *(_QWORD *)(a1 + 184))
      && !*((_DWORD *)v21 + 19) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 24), v21, a2, a4);
      v18 = v44;
    }
    v22 = (__int64 *)*v20;
    if ( *v20 )
    {
      if ( (__int64 *)v22[1] != v20 )
        goto LABEL_30;
      v23 = (__int64 **)v20[1];
      if ( *v23 != v20 )
        goto LABEL_30;
      *v23 = v22;
      v22[1] = (__int64)v23;
      v24 = v44;
      if ( (__int64 *)*v44 != &v43 )
        goto LABEL_30;
      v20[1] = (__int64)v44;
      *v20 = (__int64)&v43;
      v18 = v20;
      *v24 = (__int64)v20;
      v44 = v20;
    }
  }
  if ( (__int64 *)v43 != &v43 )
  {
    v25 = a1 + 8;
    v26 = *(__int64 **)(a1 + 16);
    if ( v20[1] != a1 + 8 )
      goto LABEL_30;
    if ( *v26 != v25 )
      goto LABEL_30;
    if ( *(__int64 **)(v43 + 8) != &v43 )
      goto LABEL_30;
    if ( (__int64 *)*v18 != &v43 )
      goto LABEL_30;
    *v26 = (__int64)&v43;
    v27 = v44;
    *(_QWORD *)(a1 + 16) = v44;
    *v27 = v25;
    v28 = v43;
    v44 = v26;
    if ( *(__int64 **)(v43 + 8) != &v43 || (__int64 *)*v26 != &v43 )
      goto LABEL_30;
    *v26 = v43;
    *(_QWORD *)(v28 + 8) = v26;
  }
  v29 = &v43;
  v44 = &v43;
  v43 = (__int64)&v43;
  v30 = (__int64 **)(a1 + 216);
  while ( 1 )
  {
    v31 = *v30;
    if ( *v30 == (__int64 *)v30 )
      break;
    v32 = v31 - 33;
    if ( (*(_DWORD *)v31[16] & 0x10000000) == 0
      && (v32[3] & 0x100) == 0
      && ((a2 & 4) == 0
       || (*(_DWORD *)(a1 + 104) & 0x200) == 0
       || *(_QWORD *)(*(v31 - 33) + 16) + *(_QWORD *)(*(v31 - 33) + 72) > *(_QWORD *)(a1 + 184))
      && !*((_DWORD *)v32 + 19) )
    {
      VIDMM_GLOBAL::PurgeAllocation(*(_QWORD *)(a1 + 24), v32, a2, a4);
      v29 = v44;
    }
    v33 = (__int64 *)*v31;
    if ( *v31 )
    {
      if ( (__int64 *)v33[1] != v31 )
        goto LABEL_30;
      v34 = (__int64 **)v31[1];
      if ( *v34 != v31 )
        goto LABEL_30;
      *v34 = v33;
      v33[1] = (__int64)v34;
      v35 = v44;
      if ( (__int64 *)*v44 != &v43 )
        goto LABEL_30;
      v31[1] = (__int64)v44;
      *v31 = (__int64)&v43;
      v29 = v31;
      *v35 = (__int64)v31;
      v44 = v31;
    }
  }
  result = v43;
  if ( (__int64 *)v43 != &v43 )
  {
    v37 = a1 + 216;
    v38 = *(__int64 **)(a1 + 224);
    if ( v31[1] == a1 + 216 && *v38 == v37 && *(__int64 **)(v43 + 8) == &v43 && (__int64 *)*v29 == &v43 )
    {
      *v38 = (__int64)&v43;
      v39 = v44;
      *(_QWORD *)(a1 + 224) = v44;
      *v39 = v37;
      result = v43;
      v44 = v38;
      if ( *(__int64 **)(v43 + 8) == &v43 && (__int64 *)*v38 == &v43 )
      {
        *v38 = v43;
        *(_QWORD *)(result + 8) = v38;
        return result;
      }
    }
LABEL_30:
    __fastfail(3u);
  }
  return result;
}
