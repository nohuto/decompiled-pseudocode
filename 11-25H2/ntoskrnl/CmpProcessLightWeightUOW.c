/*
 * XREFs of CmpProcessLightWeightUOW @ 0x1409D96AC
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x1409D9388 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1409D9524 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14086CAF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSignalDeferredPosts @ 0x14086CBD0 (CmpSignalDeferredPosts.c)
 *     CmpReportNotify @ 0x14086DEF4 (CmpReportNotify.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1408861C0 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14088630C (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408864B8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140886968 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x1409D8998 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1409D8A60 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x1409D9AE0 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1409D9BA8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x1409D9E84 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x1409DA000 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x1409DA2CC (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x1409DA778 (CmpLightWeightCommitAddKeyUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, _QWORD *a2, int a3, __int64 a4)
{
  int v4; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  __int64 v19; // rdx
  bool v20; // cc
  struct _PRIVILEGE_SET *v21; // rbx
  PPRIVILEGE_SET v22; // rdi
  __int64 v23; // rdx
  int v24; // r9d
  __int64 v25; // rdx
  struct _PRIVILEGE_SET *v26; // rsi
  PPRIVILEGE_SET v27; // r15
  __int64 v28; // rdx
  struct _PRIVILEGE_SET *v29; // rbx
  PPRIVILEGE_SET v30; // rsi
  __int64 v31; // rdx
  PPRIVILEGE_SET v32; // rdi
  __int64 v33; // rdx
  _QWORD *v34[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v35; // [rsp+40h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-10h]

  v4 = *(_DWORD *)(a1 + 68);
  v34[1] = v34;
  v34[0] = v34;
  if ( v4 > 6 )
  {
    v14 = v4 - 7;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_16;
      v16 = v15 - 1;
      if ( !v16 )
      {
        if ( a3 )
        {
          CmpLightWeightCommitSetSecDescUoW(a1, a2);
          v31 = *(_QWORD *)(a1 + 48);
          v35 = 0LL;
          *(_OWORD *)Privileges = 0LL;
          CmpStartKcbStackForTopLayerKcb((__int64)&v35, v31);
          v20 = SWORD1(v35) < 2;
          _mm_lfence();
          v21 = Privileges[1];
          if ( v20 )
            v32 = Privileges[SWORD1(v35) - 1];
          else
            v32 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v35) - 2);
          CmpReportNotifyHelper((__int64)&v35, *(_QWORD *)&v32[1].Privilege[0].Luid.HighPart, 0LL, 10, (__int64)v34);
          v23 = CmpMasterHive;
          if ( *(_QWORD *)&v32[1].Privilege[0].Luid.HighPart == CmpMasterHive )
            goto LABEL_29;
          v24 = 10;
LABEL_28:
          CmpReportNotifyHelper((__int64)&v35, v23, 0LL, v24, (__int64)v34);
LABEL_29:
          if ( v21 )
            CmSiFreeMemory(v21);
          goto LABEL_16;
        }
        v12 = CmpLightWeightPrepareSetSecDescUoW();
LABEL_10:
        v13 = v12;
        if ( v12 < 0 )
          return v13;
        goto LABEL_16;
      }
      v17 = v16 - 4;
      if ( !v17 )
        goto LABEL_16;
      if ( v17 != 2 )
        return (unsigned int)-1073741811;
      if ( !a3 )
      {
        v12 = HvpMarkCellDirty(
                *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
                0);
        goto LABEL_10;
      }
      CmpLightWeightCommitRecreateKeyUoW(a1, a2, a4);
LABEL_65:
      CmpReportNotify(*(_QWORD *)(a1 + 48), v33, 1u, (__int64)v34);
      goto LABEL_16;
    }
    if ( !a3 )
    {
LABEL_20:
      v12 = CmpLightWeightPrepareSetKeyUserFlags(a1);
      goto LABEL_10;
    }
LABEL_22:
    if ( a3 == 1 )
      CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
    goto LABEL_16;
  }
  if ( v4 == 6 )
  {
    if ( !a3 )
    {
      v13 = CmpLightWeightPrepareDeleteValueKeyUoW(a1);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
      goto LABEL_20;
    }
    CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
    v25 = *(_QWORD *)(a1 + 48);
    v35 = 0LL;
    *(_OWORD *)Privileges = 0LL;
    CmpStartKcbStackForTopLayerKcb((__int64)&v35, v25);
    v20 = SWORD1(v35) < 2;
    _mm_lfence();
    v26 = Privileges[1];
    if ( v20 )
      v27 = Privileges[SWORD1(v35) - 1];
    else
      v27 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v35) - 2);
    CmpReportNotifyHelper((__int64)&v35, *(_QWORD *)&v27[1].Privilege[0].Luid.HighPart, 0LL, 4, (__int64)v34);
    if ( *(_QWORD *)&v27[1].Privilege[0].Luid.HighPart != CmpMasterHive )
      CmpReportNotifyHelper((__int64)&v35, CmpMasterHive, 0LL, 4, (__int64)v34);
    if ( v26 )
      CmSiFreeMemory(v26);
    goto LABEL_22;
  }
  if ( !v4 )
  {
    if ( !a3 )
    {
      v12 = CmpLightWeightPrepareAddKeyUoW();
      goto LABEL_10;
    }
    CmpLightWeightCommitAddKeyUoW();
    goto LABEL_65;
  }
  v9 = v4 - 1;
  if ( !v9 )
    goto LABEL_16;
  v10 = v9 - 1;
  if ( !v10 )
  {
    if ( a3 )
    {
      v28 = *(_QWORD *)(a1 + 48);
      v35 = 0LL;
      *(_OWORD *)Privileges = 0LL;
      if ( (*(_DWORD *)(v28 + 184) & 0x40000) != 0 )
        v28 = *(_QWORD *)(v28 + 72);
      CmpStartKcbStackForTopLayerKcb((__int64)&v35, *(_QWORD *)(v28 + 72));
      v20 = SWORD1(v35) < 2;
      _mm_lfence();
      v29 = Privileges[1];
      if ( v20 )
        v30 = Privileges[SWORD1(v35) - 1];
      else
        v30 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v35) - 2);
      CmpReportNotifyHelper((__int64)&v35, *(_QWORD *)&v30[1].Privilege[0].Luid.HighPart, 0LL, 1, (__int64)v34);
      if ( *(_QWORD *)&v30[1].Privilege[0].Luid.HighPart != CmpMasterHive )
        CmpReportNotifyHelper((__int64)&v35, CmpMasterHive, 0LL, 1, (__int64)v34);
      if ( v29 )
        CmSiFreeMemory(v29);
      CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
      goto LABEL_16;
    }
    v12 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
    goto LABEL_10;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( (unsigned int)(v11 - 1) <= 1 )
    {
      if ( !a3 )
      {
        v12 = CmpLightWeightPrepareSetValueKeyUoW(a1);
        goto LABEL_10;
      }
      CmpLightWeightCommitSetValueKeyUoW(a1, a2, a4);
      v19 = *(_QWORD *)(a1 + 48);
      v35 = 0LL;
      *(_OWORD *)Privileges = 0LL;
      CmpStartKcbStackForTopLayerKcb((__int64)&v35, v19);
      v20 = SWORD1(v35) < 2;
      _mm_lfence();
      v21 = Privileges[1];
      if ( v20 )
        v22 = Privileges[SWORD1(v35) - 1];
      else
        v22 = (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + SWORD1(v35) - 2);
      CmpReportNotifyHelper((__int64)&v35, *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart, 0LL, 4, (__int64)v34);
      v23 = CmpMasterHive;
      if ( *(_QWORD *)&v22[1].Privilege[0].Luid.HighPart == CmpMasterHive )
        goto LABEL_29;
      v24 = 4;
      goto LABEL_28;
    }
    return (unsigned int)-1073741811;
  }
LABEL_16:
  v13 = 0;
  CmpSignalDeferredPosts(v34);
  return v13;
}
