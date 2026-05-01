/*
 * XREFs of ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035CA4
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003590C (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180029420 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampDepGroupGetNextDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU1@@Z @ 0x180034C44 (-HampDepGroupGetNextDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180036974 (-HampDepGroupGetFirstDonation@@YAPEAU_HAM_DONATION_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800566A4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180057690 (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x180063268 (-HampActCanChangeStateTo@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HampDepGroupProcessDonations(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v2; // rdx
  struct _HAM_DONATION_DEPENDENCY *FirstDonation; // rbx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // xmm1
  struct _HAM_DONATION_DEPENDENCY *i; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  struct _HAM_DONATION_DEPENDENCY *v16; // rbx
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  _OWORD v19[2]; // [rsp+60h] [rbp-38h] BYREF

  memset(v19, 0, sizeof(v19));
  v17 = 0LL;
  v18 = 0LL;
  FirstDonation = HampDepGroupGetFirstDonation(a1);
  if ( FirstDonation )
  {
    while ( 1 )
    {
      v4 = *(_QWORD *)FirstDonation;
      v5 = *((_QWORD *)FirstDonation + 6);
      if ( (*(_BYTE *)(*(_QWORD *)FirstDonation + 552LL) & 8) == 0 )
      {
        if ( *((_BYTE *)FirstDonation + 104) )
          goto LABEL_6;
        if ( (*(_DWORD *)(v4 + 112) & 0x80000) != 0 )
          break;
      }
LABEL_15:
      FirstDonation = HampDepGroupGetNextDonation(FirstDonation);
      if ( !FirstDonation )
        goto LABEL_16;
    }
    *((_BYTE *)FirstDonation + 104) = 1;
LABEL_6:
    if ( *((_QWORD *)FirstDonation + 8) == *(_QWORD *)(v5 + 816) )
    {
      if ( (*(_DWORD *)(v4 + 112) & 0x80000) != 0 )
      {
        v9 = *((_QWORD *)FirstDonation + 7);
        v10 = 1200LL;
        if ( v9 )
          v10 = v9 + 1136;
        v7 = *(_QWORD *)v10;
        *(_OWORD *)((char *)FirstDonation + 72) = *(_OWORD *)(v5 + 920);
        v11 = *(_OWORD *)(v5 + 936);
        v8 = (unsigned __int64 *)(v5 + 976);
        *(_OWORD *)((char *)FirstDonation + 88) = v11;
      }
      else
      {
        v7 = *(_QWORD *)(v4 + 456);
        v8 = (unsigned __int64 *)(v5 + 968);
      }
      RmpCommitValuesAdd(*v8, v7, v8);
    }
    else
    {
      LOBYTE(v2) = 1;
      if ( (unsigned int)HampActCanChangeStateTo(v4, v2) )
        HampActRequestStopEx(v6, 1LL, 11LL);
    }
    goto LABEL_15;
  }
LABEL_16:
  for ( i = HampDepGroupGetFirstDonation(a1); ; i = HampDepGroupGetNextDonation(v16) )
  {
    v16 = i;
    if ( !i )
      break;
    v13 = *(_QWORD *)i;
    if ( (*(_BYTE *)(*(_QWORD *)v16 + 552LL) & 8) == 0 && !*((_BYTE *)v16 + 104) )
    {
      v14 = *((_QWORD *)v16 + 6);
      v15 = *(_QWORD *)(v13 + 456);
      HampHostComputeStaticEnforcementSettings(
        (struct _RM_HAM_ACTIVITY_HOST *)v14,
        (struct _RM_ENFORCEMENT_SETTINGS *)v19,
        (struct _RM_COMMIT_THRESHOLDS *)&v17,
        0LL,
        0LL);
      if ( v15 <= *((_QWORD *)&v18 + 1) )
      {
        *((_BYTE *)v16 + 104) = 1;
        RmpCommitValuesAdd(*(_QWORD *)(v14 + 968), v15, (unsigned __int64 *)(v14 + 968));
      }
      else
      {
        *((_BYTE *)v16 + 104) = 2;
      }
    }
  }
}
