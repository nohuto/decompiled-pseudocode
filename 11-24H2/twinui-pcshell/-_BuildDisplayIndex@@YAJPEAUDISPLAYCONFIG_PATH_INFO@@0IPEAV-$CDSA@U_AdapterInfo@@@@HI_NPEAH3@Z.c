/*
 * XREFs of ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180674CEC
 * Callers:
 *     ?BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ @ 0x1805BD6C8 (-BuildMonitorIndex@MonitorIDFinder@SnapAccessibilityHelpers@@QEAAXXZ.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F8A80 (DSA_GetItemPtr.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?AdapterInfoCompareLUID@@YAHPEBU_AdapterInfo@@0_J@Z @ 0x180674AD0 (-AdapterInfoCompareLUID@@YAHPEBU_AdapterInfo@@0_J@Z.c)
 *     ?ClearAdapterInfo@@YAXPEAV?$CDSA@U_AdapterInfo@@@@_N@Z @ 0x180674B00 (-ClearAdapterInfo@@YAXPEAV-$CDSA@U_AdapterInfo@@@@_N@Z.c)
 *     ?Search@?$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z @ 0x180674BF0 (-Search@-$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z.c)
 *     ?SourceInfoCompareID@@YAHPEBU_SourceInfo@@0_J@Z @ 0x180674C5C (-SourceInfoCompareID@@YAHPEBU_SourceInfo@@0_J@Z.c)
 *     DSA_Create @ 0x1806836C0 (DSA_Create.c)
 *     DSA_InsertItem @ 0x180683880 (DSA_InsertItem.c)
 *     DSA_Sort @ 0x1806839E0 (DSA_Sort.c)
 */

__int64 __fastcall _BuildDisplayIndex(__int64 a1, __int64 a2, int a3, struct _DSA **a4)
{
  HDSA *v5; // r15
  int v6; // r13d
  int v7; // ebx
  int v8; // r12d
  __int64 v9; // rsi
  HDSA v10; // rax
  int v11; // r14d
  int inserted; // edi
  const struct _LUID *ItemPtr; // rax
  PVOID v14; // r14
  int v15; // r13d
  int *v16; // r15
  int v17; // r15d
  int v18; // edi
  const struct _SourceInfo *v19; // rax
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // eax
  bool v26; // zf
  bool v27; // al
  __int64 v28; // r10
  __int64 v29; // r8
  _DWORD *v30; // rcx
  _QWORD *v31; // rdx
  _BYTE *v32; // rax
  int i; // edi
  struct _DSA *v35; // rcx
  int v36; // eax
  PVOID v37; // rax
  struct _DSA *v38; // rcx
  int v39; // r14d
  int j; // edi
  struct _DSA *v41; // rcx
  int v42; // eax
  PVOID v43; // r15
  int k; // esi
  struct _DSA *v45; // rcx
  int v46; // eax
  _DWORD *v47; // rax
  _DWORD *v48; // rcx
  int v49; // eax
  struct _LUID pitem; // [rsp+40h] [rbp-99h] BYREF
  __int128 v53; // [rsp+48h] [rbp-91h]
  __int64 v54; // [rsp+58h] [rbp-81h]
  __int64 v55; // [rsp+60h] [rbp-79h]
  __int128 v56; // [rsp+68h] [rbp-71h] BYREF
  __int64 v57; // [rsp+78h] [rbp-61h]
  _DWORD v58[20]; // [rsp+80h] [rbp-59h] BYREF

  v55 = a1;
  v5 = a4;
  v6 = a3;
  v7 = 0;
  ClearAdapterInfo(a4);
  v8 = 0;
  v9 = a1 + 36;
  while ( v8 < v6 )
  {
    v54 = 0LL;
    pitem = *(struct _LUID *)(v9 - 36);
    v10 = *v5;
    v53 = 0LL;
    if ( v10 )
    {
      v11 = *(_DWORD *)v10;
      inserted = 0;
      if ( *(int *)v10 > 0 )
      {
        while ( 1 )
        {
          ItemPtr = (const struct _LUID *)g_pfn_DSA_GetItemPtr(*v5, inserted);
          if ( !(unsigned int)AdapterInfoCompareLUID(&pitem, ItemPtr) )
            break;
          if ( ++inserted >= v11 )
            goto LABEL_9;
        }
        if ( inserted >= 0 )
          goto LABEL_13;
      }
    }
LABEL_9:
    *(_QWORD *)&v53 = g_pfn_DSA_Create(72, 2);
    if ( (_QWORD)v53 )
    {
      *((_QWORD *)&v53 + 1) = g_pfn_DSA_Create(24, 4);
      if ( *((_QWORD *)&v53 + 1) )
      {
        inserted = DSA_InsertItem(*v5, 0x7FFFFFFF, &pitem);
        if ( inserted != -1 )
        {
          v7 = 0;
          v53 = 0LL;
LABEL_13:
          v14 = g_pfn_DSA_GetItemPtr(*v5, inserted);
          memset_0(v58, 0, 0x48uLL);
          v58[0] = *(_DWORD *)(v9 - 28);
          v15 = v58[0];
          v16 = (int *)*((_QWORD *)v14 + 1);
          if ( !v16 )
            goto LABEL_19;
          v17 = *v16;
          v18 = 0;
          if ( v17 <= 0 )
            goto LABEL_19;
          while ( 1 )
          {
            v19 = (const struct _SourceInfo *)g_pfn_DSA_GetItemPtr(*((HDSA *)v14 + 1), v18);
            if ( !(unsigned int)SourceInfoCompareID(0LL, v19, v15) )
              break;
            if ( ++v18 >= v17 )
              goto LABEL_19;
          }
          if ( v18 < 0 )
          {
LABEL_19:
            v18 = DSA_InsertItem(*((HDSA *)v14 + 1), 0x7FFFFFFF, v58);
            if ( v18 != -1 )
            {
              v7 = 0;
              goto LABEL_23;
            }
            v7 = -2147024882;
          }
          if ( v7 < 0 )
          {
            v6 = a3;
          }
          else
          {
LABEL_23:
            v20 = g_pfn_DSA_GetItemPtr(*((HDSA *)v14 + 1), v18);
            if ( (*(_BYTE *)(v9 + 32) & 1) != 0 )
              v20[v20[1]++ + 2] = v8;
            v57 = 0LL;
            v24 = *(unsigned int *)(v9 - 8);
            v56 = 0LL;
            LODWORD(v56) = v24;
            v25 = CDSA_Base<_TargetInfo>::Search((HDSA *)v14 + 2, v21, v22, v23, v24);
            if ( v25 >= 0 )
            {
LABEL_39:
              v32 = g_pfn_DSA_GetItemPtr(*((HDSA *)v14 + 2), v25);
              if ( !v32[8] && (*(_BYTE *)(v9 + 32) & 1) != 0 )
              {
                v32[8] = 1;
                *((_DWORD *)v32 + 3) = v8;
              }
              if ( *((_DWORD *)v32 + 5) == 0x80000000 || *((_DWORD *)v32 + 5) == 11 || *((_DWORD *)v32 + 5) == 13 )
                *((_BYTE *)v14 + 28) = 1;
              v6 = a3;
              if ( (*(_BYTE *)(v9 + 32) & 8) != 0 )
                v32[18] = 1;
            }
            else
            {
              v26 = *(_DWORD *)(v9 + 24) == 0;
              HIDWORD(v57) = *(_DWORD *)v9;
              v27 = (*(_BYTE *)(v9 + 28) & 2) != 0;
              LOBYTE(v57) = !v26;
              BYTE1(v57) = v27;
              if ( (*(_BYTE *)(v9 + 32) & 1) != 0 && v26 )
              {
                v6 = a3;
                if ( a3 > 0 )
                {
                  v28 = v55;
                  v29 = (unsigned int)a3;
                  v30 = (_DWORD *)(v55 + 60);
                  v31 = (_QWORD *)(v55 + 20);
                  do
                  {
                    if ( *v31 == *(_QWORD *)(v28 + 72LL * v8 + 20) && *(v30 - 8) == *(_DWORD *)(v9 - 8) )
                      *v30 = 1;
                    v31 += 9;
                    v30 += 18;
                    --v29;
                  }
                  while ( v29 );
                }
                LOBYTE(v57) = 1;
              }
              else
              {
                v6 = a3;
              }
              v25 = DSA_InsertItem(*((HDSA *)v14 + 2), 0x7FFFFFFF, &v56);
              if ( v25 != -1 )
              {
                v7 = 0;
                if ( *(_DWORD *)(v9 + 24) )
                  ++*((_DWORD *)v14 + 6);
                goto LABEL_39;
              }
              v7 = -2147024882;
            }
          }
          v5 = a4;
          goto LABEL_52;
        }
      }
    }
    v7 = -2147024882;
LABEL_52:
    ++v8;
    v9 += 72LL;
    if ( v7 < 0 )
      return (unsigned int)v7;
  }
  for ( i = 0; ; ++i )
  {
    v35 = *v5;
    v36 = *v5 ? *(_DWORD *)v35 : 0;
    if ( i >= v36 )
      break;
    v37 = g_pfn_DSA_GetItemPtr(v35, i);
    if ( v37 )
    {
      v38 = (struct _DSA *)*((_QWORD *)v37 + 2);
      if ( v38 )
        g_pfn_DSA_Sort(v38, (PFNDACOMPARE)TargetInfoSort, 0LL);
    }
  }
  if ( v35 )
    g_pfn_DSA_Sort(v35, (PFNDACOMPARE)AdapterInfoSort, 0LL);
  v39 = 0;
  for ( j = 0; ; ++j )
  {
    v41 = *v5;
    v42 = *v5 ? *(_DWORD *)v41 : 0;
    if ( j >= v42 )
      break;
    v43 = g_pfn_DSA_GetItemPtr(v41, j);
    if ( v43 )
    {
      for ( k = 0; ; ++k )
      {
        v45 = (struct _DSA *)*((_QWORD *)v43 + 2);
        if ( v45 )
        {
          v46 = *(_DWORD *)v45;
        }
        else
        {
          v46 = 0;
          v45 = 0LL;
        }
        if ( k >= v46 )
          break;
        v47 = g_pfn_DSA_GetItemPtr(v45, k);
        v48 = v47;
        if ( v47 )
        {
          if ( *((_BYTE *)v47 + 16) )
          {
            v49 = v39++;
            v48[1] = v49;
          }
          else
          {
            v47[1] = -1;
          }
        }
      }
    }
    v5 = a4;
  }
  return (unsigned int)v7;
}
