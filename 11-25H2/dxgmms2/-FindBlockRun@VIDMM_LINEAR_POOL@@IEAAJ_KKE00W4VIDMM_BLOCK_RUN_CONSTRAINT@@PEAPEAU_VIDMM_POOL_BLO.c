/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1400D44E0
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400D3AD0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v12; // r9
  _QWORD *i; // rdi
  _QWORD *v14; // r15
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // r13
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  __int64 v32; // rax
  _QWORD *v33; // rsi
  __int64 v34; // rax
  _QWORD *v35; // rsi
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  _QWORD *v38; // r15
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // [rsp+20h] [rbp-38h]
  unsigned __int64 v47; // [rsp+28h] [rbp-30h]

  v12 = a1;
  i = *(_QWORD **)(a1 + 48);
  v14 = (_QWORD *)(a1 + 48);
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( i != (_QWORD *)(a1 + 48) )
  {
    v47 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v46 = (a3 + 4095) & 0xFFFFF000;
    if ( !a4 )
      i = *(_QWORD **)(a1 + 56);
LABEL_4:
    v15 = a7;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( i == v14 )
          return 3223191808LL;
        v16 = *(i - 3);
        v17 = i - 3;
        v18 = (__int64)(i - 3);
        v19 = v16 + *(i - 2);
        if ( !(_DWORD)v15 )
          break;
        if ( g_IsInternalReleaseOrDbg )
        {
          v32 = WdLogNewEntry5_WdTrace(v15);
          v15 = a7;
          v12 = a1;
          *(_QWORD *)(v32 + 24) = v17;
          WdLogGlobalForLineNumber = 1099;
        }
        if ( a4 )
        {
          for ( i = (_QWORD *)*i; i != v14; v12 = a1 )
          {
            v35 = i - 3;
            if ( *(i - 3) != v19 )
              break;
            if ( (_DWORD)v15 == 2
              || *((_BYTE *)v35 + 56) == 2
              || (*(unsigned __int8 (__fastcall **)(_QWORD))(v12 + 40))(v35[2]) )
            {
              v19 += v35[1];
              v18 = (__int64)(i - 3);
            }
            i = (_QWORD *)*i;
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v35;
              WdLogGlobalForLineNumber = 1133;
            }
            v15 = a7;
          }
        }
        else
        {
          for ( i = (_QWORD *)i[1]; i != v14; v12 = a1 )
          {
            v33 = i - 3;
            if ( *(i - 2) + *(i - 3) != v16 )
              break;
            if ( (_DWORD)v15 == 2
              || *((_BYTE *)v33 + 56) == 2
              || (*(unsigned __int8 (__fastcall **)(_QWORD))(v12 + 40))(v33[2]) )
            {
              v16 -= v33[1];
              v18 = (__int64)(i - 3);
            }
            i = (_QWORD *)i[1];
            if ( g_IsInternalReleaseOrDbg )
            {
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v33;
              WdLogGlobalForLineNumber = 1173;
            }
            v15 = a7;
          }
          v34 = (__int64)v17;
          v17 = (_QWORD *)v18;
          v18 = v34;
        }
LABEL_14:
        v21 = v19 - v16;
        if ( g_IsInternalReleaseOrDbg )
        {
          v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
          v22[3] = v21;
          v22[4] = v17;
          v22[5] = v18;
          WdLogGlobalForLineNumber = 1205;
          v24 = WdLogNewEntry5_WdTrace(v23);
          *(_QWORD *)(v24 + 24) = v16;
          *(_QWORD *)(v24 + 32) = v19;
          WdLogGlobalForLineNumber = 1208;
        }
        if ( v21 < v47 )
          goto LABEL_17;
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v15);
          WdLogGlobalForLineNumber = 1218;
        }
        if ( !a5 )
          goto LABEL_35;
        if ( a5 < v19 )
        {
          if ( a5 > v16 )
          {
            v16 = a5;
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(v15);
              WdLogGlobalForLineNumber = 832;
              v43 = WdLogNewEntry5_WdTrace(v42);
              *(_QWORD *)(v43 + 24) = a5;
              *(_QWORD *)(v43 + 32) = v19;
              WdLogGlobalForLineNumber = 835;
            }
          }
LABEL_35:
          if ( a6 )
          {
            if ( a6 > v16 )
            {
              if ( a6 < v19 )
              {
                v19 = a6;
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(v15);
                  WdLogGlobalForLineNumber = 863;
                  v45 = WdLogNewEntry5_WdTrace(v44);
                  *(_QWORD *)(v45 + 24) = v16;
                  *(_QWORD *)(v45 + 32) = a6;
                  WdLogGlobalForLineNumber = 866;
                }
              }
              goto LABEL_56;
            }
            v15 = a7;
            v12 = a1;
            if ( g_IsInternalReleaseOrDbg )
            {
              WdLogNewEntry5_WdTrace(a7);
              v12 = a1;
              WdLogGlobalForLineNumber = 851;
              goto LABEL_4;
            }
          }
          else
          {
LABEL_56:
            if ( a4 )
            {
              if ( v46 && (v15 = v46, v16 % v46) && (v15 = v46 - v16 % v46, v16 += v15, v16 >= v19) )
              {
                v15 = a7;
                v12 = a1;
                if ( g_IsInternalReleaseOrDbg )
                {
                  WdLogNewEntry5_WdTrace(a7);
                  v12 = a1;
                  WdLogGlobalForLineNumber = 892;
                  goto LABEL_4;
                }
              }
              else
              {
                if ( g_IsInternalReleaseOrDbg )
                {
                  v36 = WdLogNewEntry5_WdTrace(v15);
                  *(_QWORD *)(v36 + 24) = v16;
                  *(_QWORD *)(v36 + 32) = v19;
                  WdLogGlobalForLineNumber = 902;
                }
LABEL_17:
                v25 = v47;
LABEL_18:
                v15 = a7;
                v12 = a1;
                if ( v19 - v16 >= v25 )
                {
                  v26 = v16 + v47;
                  if ( g_IsInternalReleaseOrDbg )
                  {
                    v27 = WdLogNewEntry5_WdTrace(a7);
                    *(_QWORD *)(v27 + 24) = v16;
                    *(_QWORD *)(v27 + 32) = v26;
                    WdLogGlobalForLineNumber = 1258;
                  }
                  v28 = *(_QWORD **)(v18 + 24);
                  v29 = v17 + 3;
                  while ( v29 != v28 )
                  {
                    v37 = *(v29 - 3);
                    v38 = v29 - 3;
                    v39 = *(v29 - 2);
                    v29 = (_QWORD *)*v29;
                    v15 = v37 + v39;
                    if ( v15 <= v16 )
                    {
                      v17 = v29 - 3;
                      if ( g_IsInternalReleaseOrDbg )
                      {
                        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v38;
                        WdLogGlobalForLineNumber = 1287;
                      }
                    }
                    else if ( v37 >= v26 )
                    {
                      v18 = v38[4] - 24LL;
                      if ( !g_IsInternalReleaseOrDbg )
                        goto LABEL_25;
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v38;
                      WdLogGlobalForLineNumber = 1303;
                      break;
                    }
                  }
                  if ( g_IsInternalReleaseOrDbg )
                  {
                    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v15);
                    v30[3] = v17;
                    v30[4] = v18;
                    v30[5] = v16;
                    v30[6] = v26;
                    WdLogGlobalForLineNumber = 1316;
                  }
LABEL_25:
                  *a8 = v17;
                  *a9 = v18;
                  *a10 = v16;
                  *a11 = v26;
                  return 0LL;
                }
              }
            }
            else
            {
              v40 = 0LL;
              if ( v46 )
                v40 = (v19 - v47) % v46;
              v25 = v47;
              if ( v19 - v40 - v47 >= v16 )
              {
                v16 = v19 - v40 - v47;
                if ( g_IsInternalReleaseOrDbg )
                {
                  v41 = WdLogNewEntry5_WdTrace(v15);
                  *(_QWORD *)(v41 + 24) = v16;
                  *(_QWORD *)(v41 + 32) = v19;
                  WdLogGlobalForLineNumber = 928;
                }
                goto LABEL_18;
              }
              v15 = a7;
              v12 = a1;
              if ( g_IsInternalReleaseOrDbg )
              {
                WdLogNewEntry5_WdTrace(a7);
                v12 = a1;
                WdLogGlobalForLineNumber = 919;
                goto LABEL_4;
              }
            }
          }
        }
        else
        {
          v15 = a7;
          v12 = a1;
          if ( g_IsInternalReleaseOrDbg )
          {
            WdLogNewEntry5_WdTrace(a7);
            v12 = a1;
            WdLogGlobalForLineNumber = 820;
            goto LABEL_4;
          }
        }
      }
      if ( a4 )
        i = (_QWORD *)*i;
      else
        i = (_QWORD *)i[1];
      if ( *((_BYTE *)v17 + 56) == 2 )
      {
        if ( g_IsInternalReleaseOrDbg )
        {
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v15) + 24) = v17;
          WdLogGlobalForLineNumber = 1087;
        }
        goto LABEL_14;
      }
      if ( g_IsInternalReleaseOrDbg )
      {
        v20 = WdLogNewEntry5_WdTrace(v15);
        v12 = a1;
        *(_QWORD *)(v20 + 24) = v17;
        WdLogGlobalForLineNumber = 1082;
        goto LABEL_4;
      }
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(0LL);
    WdLogGlobalForLineNumber = 1026;
  }
  return 3223191808LL;
}
