/*
 * XREFs of PpmSetProfilePolicySetting @ 0x1409A3A64
 * Callers:
 *     PopSetNewPolicyValue @ 0x1409A2CCC (PopSetNewPolicyValue.c)
 * Callees:
 *     PpmAcquireLock @ 0x1402AE7DC (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PpmInfoApplySettingUpdate @ 0x1409A40C8 (PpmInfoApplySettingUpdate.c)
 *     PpmInfoReleaseLocks @ 0x1409A4174 (PpmInfoReleaseLocks.c)
 *     PpmInfoAdjustSetting @ 0x140A28548 (PpmInfoAdjustSetting.c)
 *     PpmEventTraceProfileSetting @ 0x140A4EC6C (PpmEventTraceProfileSetting.c)
 */

__int64 __fastcall PpmSetProfilePolicySetting(_QWORD *a1, _QWORD *a2, int a3, __int64 a4, int a5)
{
  unsigned int v5; // ebx
  __int64 v6; // r15
  bool v7; // di
  unsigned int v10; // r8d
  GUID **v11; // r13
  GUID **v12; // rsi
  unsigned int v13; // ebp
  __int64 v14; // rdx
  unsigned __int8 v15; // r9
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rax
  __int64 *v19; // r10
  __int64 v20; // r12
  char v21; // al
  int v22; // r9d
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  bool v25; // al
  __int64 v26; // r8
  __int64 i; // rdx
  __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 v31; // r10
  __int64 v32; // r12
  __int64 v33; // rax
  int v34; // r9d
  char v35; // r10
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rax
  unsigned int v39; // r15d
  unsigned __int64 v40; // rdx
  char v41; // cl
  __int64 v42; // r12
  unsigned __int64 v43; // r10
  __int64 v44; // r8
  char v45; // [rsp+40h] [rbp-78h]
  bool v46; // [rsp+44h] [rbp-74h]
  unsigned int v47; // [rsp+48h] [rbp-70h]
  int v48; // [rsp+4Ch] [rbp-6Ch]
  int v49; // [rsp+50h] [rbp-68h]
  int v50; // [rsp+50h] [rbp-68h]
  __int64 *v52; // [rsp+60h] [rbp-58h]
  unsigned __int64 v53; // [rsp+68h] [rbp-50h]
  GUID v54; // [rsp+78h] [rbp-40h]
  __int64 v55; // [rsp+78h] [rbp-40h]
  __int64 v56; // [rsp+78h] [rbp-40h]

  v5 = 0;
  v6 = a3;
  v7 = 0;
  v46 = 0;
  v45 = 0;
  LOBYTE(v47) = 0;
  if ( a5 && a4 )
  {
    if ( a3 )
      goto LABEL_4;
    v38 = *a1 - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
    if ( *a1 == *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1 )
      v38 = a1[1] - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
    if ( v38 )
    {
LABEL_4:
      v10 = 0;
      v11 = &off_140FC5F68;
      do
      {
        v12 = v11 - 1;
        v13 = 0;
        v14 = (unsigned int)((*((_BYTE *)v11 + 29) & 4) != 0) + 1;
        v54 = **v11;
        v15 = v54.Data4[7];
        while ( v13 < (unsigned int)v14 )
        {
          v16 = *(_QWORD *)&v54.Data1 - *a2;
          if ( *(_QWORD *)&v54.Data1 == *a2 )
            v16 = *(_QWORD *)v54.Data4 - a2[1];
          if ( !v16 )
          {
            v17 = v13;
            if ( (*((_BYTE *)v12 + 37) & 1) != 0 )
              PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock, v14, v10);
            else
              PopAcquireRwLockExclusive(&PpmIdlePolicyLock);
            v52 = PpmCurrentProfile[0];
            v48 = dword_140F0B38C;
            v18 = *a1 - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
            if ( *a1 == *(_QWORD *)&CPER_EMPTY_GUID.Data1 )
              v18 = a1[1] - *(_QWORD *)CPER_EMPTY_GUID.Data4;
            if ( !v18 )
            {
              v55 = v6;
              v53 = 488 * v6;
              v19 = &PpmDefaultProfile[61 * v6 + 5];
              v49 = *((_DWORD *)v12 + 8);
              v20 = (__int64)v12[3] + v13 * v49 + (_QWORD)v19;
              if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
              {
                v37 = v19[((unsigned __int64)*((unsigned __int8 *)v12 + 36) >> 6) + 2];
                if ( !_bittest64(&v37, *((_BYTE *)v12 + 36) & 0x3F) )
                {
                  v45 = 1;
                  v17 = 1;
                }
              }
              v21 = PpmInfoAdjustSetting((int)v11 - 8, 488 * v6 + (unsigned int)&PpmDefaultProfile[5], v13, v17, a4, a5);
              v23 = *((_BYTE *)v12 + 36) & 0x3F;
              v24 = 2LL * v13 + ((unsigned __int64)*((unsigned __int8 *)v12 + 36) >> 6);
              PpmDefaultProfile[v53 / 8 + 5 + v24] |= 1LL << (*((_BYTE *)v12 + 36) & 0x3F);
              if ( v21 )
              {
                LOBYTE(v22) = v13;
                LOBYTE(v24) = byte_140F06CA8;
                PpmEventTraceProfileSetting(v24, (unsigned int)*v12, (unsigned int)*v11, v22, v20, v49, v6, 0);
                if ( v52 == PpmDefaultProfile )
                {
                  v7 = v48 == (_DWORD)v6;
                  v46 = v48 == (_DWORD)v6;
                }
                v39 = 0;
                if ( PpmProfileCount )
                {
                  do
                  {
                    v40 = *((unsigned __int8 *)v12 + 36);
                    v41 = v40 & 0x3F;
                    v42 = PpmProfiles + 1056LL * v39;
                    v23 = v40 >> 6;
                    v43 = v42 + v53;
                    v44 = 1LL << v41;
                    if ( ((1LL << v41) & *(_QWORD *)(v42 + v53 + 8 * (v23 + 2LL * v13) + 40)) == 0
                      && (!v13 || (v44 & *(_QWORD *)(v43 + 8 * v23 + 40)) == 0) )
                    {
                      if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
                      {
                        if ( v45 )
                        {
                          if ( (v44 & *(_QWORD *)(v43 + 8 * v23 + 56)) == 0 )
                            v17 = 1;
                        }
                        else
                        {
                          v17 = 0;
                        }
                      }
                      PpmInfoAdjustSetting((_DWORD)v12, v43 + 40, v13, v17, a4, a5);
                      if ( v52 == (__int64 *)v42 && v48 == v55 )
                        v7 = 1;
                    }
                    ++v39;
                  }
                  while ( v39 < (unsigned __int8)PpmProfileCount );
                  v46 = v7;
                }
              }
              goto LABEL_17;
            }
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              if ( (unsigned int)i >= (unsigned __int8)PpmProfileCount )
              {
                PpmInfoReleaseLocks(v11 - 1, i, (unsigned __int8)PpmProfileCount, 1LL);
                return (unsigned int)-1073741275;
              }
              v29 = PpmProfiles + 1056LL * (unsigned int)i;
              v30 = *(_QWORD *)(v29 + 12) - *a1;
              if ( !v30 )
                v30 = *(_QWORD *)(v29 + 20) - a1[1];
              if ( !v30 )
                break;
            }
            v50 = *((_DWORD *)v12 + 8);
            v31 = v29 + 488 * v6 + 40;
            v56 = v31;
            v32 = (__int64)v12[3] + v13 * v50 + v31;
            if ( (*((_BYTE *)v12 + 37) & 4) != 0 && !v13 )
            {
              v33 = *(_QWORD *)(v31 + 8 * ((unsigned __int64)*((unsigned __int8 *)v12 + 36) >> 6) + 16);
              if ( !_bittest64(&v33, *((_BYTE *)v12 + 36) & 0x3F) )
                v17 = 1;
            }
            v35 = PpmInfoAdjustSetting((int)v11 - 8, (int)v29 + 488 * (int)v6 + 40, v13, v17, a4, a5);
            v23 = ((unsigned __int64)*((unsigned __int8 *)v12 + 36) >> 6) + 2LL * v13;
            v36 = v56;
            *(_QWORD *)(v56 + 8 * v23) |= 1LL << (*((_BYTE *)v12 + 36) & 0x3F);
            if ( v35 )
            {
              LOBYTE(v34) = v13;
              LOBYTE(v36) = *(_BYTE *)(v29 + 8);
              PpmEventTraceProfileSetting(v36, (unsigned int)*v12, (unsigned int)*v11, v34, v32, v50, v6, 0);
              v23 = 1LL;
              v25 = 0;
              if ( v52 == (__int64 *)v29 )
                v25 = v48 == (_DWORD)v6;
              if ( PpmEntryLevelPerfProfile == v29
                || PpmBackgroundProfile == v29
                || PpmUtilityQosProfile == v29
                || PpmEcoQosProfile == v29
                || PpmMultimediaQosProfile == v29 )
              {
                v26 = v48 == (_DWORD)v6;
                goto LABEL_19;
              }
            }
            else
            {
LABEL_17:
              v25 = v46;
            }
            v26 = v47;
LABEL_19:
            LOBYTE(v23) = v25;
            PpmInfoApplySettingUpdate(v12, v23, v26);
            return v5;
          }
          ++v13;
          v54.Data4[7] = ++v15;
        }
        ++v10;
        v11 += 5;
      }
      while ( v10 < 0x46 );
      return (unsigned int)-1073741275;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
