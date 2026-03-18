/*
 * XREFs of CmpProcessLightWeightUOW @ 0x140A069C4
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x140A066A0 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140A0683C (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmpReportNotify @ 0x140869438 (CmpReportNotify.c)
 *     CmpSignalDeferredPosts @ 0x14086A690 (CmpSignalDeferredPosts.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409FEC68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x1409FF118 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitRecreateKeyUoW @ 0x140A1EBB8 (CmpLightWeightCommitRecreateKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A1EC80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A1F204 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A1F3F0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A1F89C (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2F314 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A2F460 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetKeyUserFlags @ 0x140A44988 (CmpLightWeightPrepareSetKeyUserFlags.c)
 *     CmpLightWeightCommitSetUserFlagsUoW @ 0x140A4ACC8 (CmpLightWeightCommitSetUserFlagsUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A82334 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A82480 (CmpLightWeightPrepareSetSecDescUoW.c)
 */

__int64 __fastcall CmpProcessLightWeightUOW(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r8d
  unsigned int v15; // ebx
  __int64 v16; // rdx
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r10d
  _QWORD *v22[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_DWORD *)(a1 + 68);
  v22[1] = v22;
  v22[0] = v22;
  if ( v4 > 6 )
  {
    v18 = v4 - 7;
    if ( v18 )
    {
      v19 = v18 - 1;
      if ( !v19 )
        goto LABEL_25;
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( !a3 )
        {
          v12 = CmpLightWeightPrepareSetSecDescUoW(a1, a2);
          goto LABEL_41;
        }
        CmpLightWeightCommitSetSecDescUoW(a1, a2);
        v14 = 10;
LABEL_18:
        CmpReportNotify(*(_QWORD *)(a1 + 48), v13, v14, (__int64)v22);
        goto LABEL_25;
      }
      v21 = v20 - 4;
      if ( !v21 )
        goto LABEL_25;
      if ( v21 != 2 )
        return (unsigned int)-1073741811;
      if ( !a3 )
      {
        v12 = HvpMarkCellDirty(
                *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL),
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 72LL) + 40LL),
                0);
        goto LABEL_41;
      }
      CmpLightWeightCommitRecreateKeyUoW(a1, a2, a4);
LABEL_17:
      v14 = 1;
      goto LABEL_18;
    }
    if ( !a3 )
    {
LABEL_40:
      v12 = CmpLightWeightPrepareSetKeyUserFlags(a1);
      goto LABEL_41;
    }
LABEL_23:
    if ( a3 == 1 )
      CmpLightWeightCommitSetUserFlagsUoW(a1, a2);
    goto LABEL_25;
  }
  if ( v4 != 6 )
  {
    if ( v4 )
    {
      v9 = v4 - 1;
      if ( !v9 )
        goto LABEL_25;
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( (unsigned int)(v11 - 1) <= 1 )
          {
            if ( !a3 )
            {
              v12 = CmpLightWeightPrepareSetValueKeyUoW(a1);
              goto LABEL_41;
            }
            CmpLightWeightCommitSetValueKeyUoW(a1, a2, a4);
            v14 = 4;
            goto LABEL_18;
          }
          return (unsigned int)-1073741811;
        }
LABEL_25:
        v15 = 0;
        CmpSignalDeferredPosts(v22);
        return v15;
      }
      if ( a3 )
      {
        CmpReportNotify(*(_QWORD *)(a1 + 48), a2, 1, (__int64)v22);
        CmpLightWeightCommitDeleteKeyUoW(a1, a2, a4);
        goto LABEL_25;
      }
      v12 = CmpLightWeightPrepareDeleteKeyUoW(a1, a4);
LABEL_41:
      v15 = v12;
      if ( v12 < 0 )
        return v15;
      goto LABEL_25;
    }
    if ( !a3 )
    {
      v12 = CmpLightWeightPrepareAddKeyUoW(a1, a2);
      goto LABEL_41;
    }
    CmpLightWeightCommitAddKeyUoW(a1, a2);
    goto LABEL_17;
  }
  if ( a3 )
  {
    CmpLightWeightCommitDeleteValueKeyUoW(a1, a2, a4);
    CmpReportNotify(*(_QWORD *)(a1 + 48), v16, 4, (__int64)v22);
    goto LABEL_23;
  }
  v15 = CmpLightWeightPrepareDeleteValueKeyUoW(a1);
  if ( (v15 & 0x80000000) == 0 )
    goto LABEL_40;
  return v15;
}
