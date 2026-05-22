/*
 * XREFs of _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801BA68C
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800105F8 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  __int64 v6; // rdi
  char v7; // bl
  float v9; // xmm6_4
  struct MPCConstantManager *Instance; // rax
  __int64 v11; // rdx
  float v12; // xmm6_4
  struct MPCConstantManager *v13; // rax
  __int64 v14; // rdx
  float v15; // xmm6_4
  struct MPCConstantManager *v16; // rax
  __int64 v17; // rdx
  float v18; // xmm6_4
  struct MPCConstantManager *v19; // rax
  __int64 v20; // rdx
  float v21; // xmm6_4
  struct MPCConstantManager *v22; // rax
  __int64 v23; // rdx
  float v24; // xmm6_4
  struct MPCConstantManager *v25; // rax
  __int64 v26; // rdx
  char v27; // r13
  float v28; // xmm6_4
  struct MPCConstantManager *v29; // rax
  __int64 v30; // rdx
  float v31; // xmm6_4
  struct MPCConstantManager *v32; // rax
  __int64 v33; // rdx
  float v34; // xmm6_4
  struct MPCConstantManager *v35; // rax
  __int64 v36; // rdx
  char v37; // r12
  __int64 v38; // r14
  float v39; // xmm6_4
  struct MPCConstantManager *v40; // rax
  __int64 v41; // rdx
  float v42; // xmm6_4
  struct MPCConstantManager *v43; // rax
  __int64 v44; // rdx
  float v45; // xmm6_4
  struct MPCConstantManager *v46; // rax
  __int64 v47; // rdx
  char v48; // r15
  float v49; // xmm6_4
  struct MPCConstantManager *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  const char *v55; // r9
  float v56; // xmm6_4
  struct MPCConstantManager *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  const char *v62; // r9
  float v63; // xmm6_4
  struct MPCConstantManager *v64; // rax
  __int64 v65; // rdx
  char v66; // al
  __int128 v68[3]; // [rsp+20h] [rbp-50h] BYREF
  char v69; // [rsp+A0h] [rbp+30h]

  v6 = a1 + 8;
  v7 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 101LL) )
    goto LABEL_6;
  LODWORD(v9) = *(_DWORD *)(*(_QWORD *)a1 + 76LL) & _xmm;
  Instance = MPCConstantManager::GetInstance(a1, a2, a3, a4);
  v11 = *(_QWORD *)v6;
  *(_QWORD *)&v68[0] = L"HomeMaximumAngularVelocity_X";
  *((_QWORD *)&v68[0] + 1) = 28LL;
  if ( v9 > (float)(MPCConstantManager::GetConstant<float>((__int64)Instance, (v11 + 24) & -(__int64)(v11 != 0), v68)
                  * v5) )
    goto LABEL_5;
  LODWORD(v12) = *(_DWORD *)(*(_QWORD *)a1 + 80LL) & _xmm;
  v13 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
  v14 = *(_QWORD *)v6;
  *(_QWORD *)&v68[0] = L"HomeMaximumAngularVelocity_Y";
  *((_QWORD *)&v68[0] + 1) = 28LL;
  if ( v12 > (float)(MPCConstantManager::GetConstant<float>((__int64)v13, (v14 + 24) & -(__int64)(v14 != 0), v68) * v5)
    || (LODWORD(v15) = *(_DWORD *)(*(_QWORD *)a1 + 84LL) & _xmm,
        v16 = MPCConstantManager::GetInstance(a1, a2, a3, a4),
        v17 = *(_QWORD *)v6,
        *(_QWORD *)&v68[0] = L"HomeMaximumAngularVelocity_Z",
        *((_QWORD *)&v68[0] + 1) = 28LL,
        v15 > (float)(MPCConstantManager::GetConstant<float>((__int64)v16, (v17 + 24) & -(__int64)(v17 != 0), v68) * v5)) )
  {
LABEL_5:
    v69 = 1;
  }
  else
  {
LABEL_6:
    v69 = 0;
  }
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 100LL) )
    goto LABEL_12;
  LODWORD(v18) = *(_DWORD *)(*(_QWORD *)a1 + 64LL) & _xmm;
  v19 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
  v20 = *(_QWORD *)v6;
  *(_QWORD *)&v68[0] = L"HomeMaximumLinearVelocity_X";
  *((_QWORD *)&v68[0] + 1) = 27LL;
  if ( v18 <= (float)(MPCConstantManager::GetConstant<float>((__int64)v19, (v20 + 24) & -(__int64)(v20 != 0), v68) * v4) )
  {
    LODWORD(v21) = *(_DWORD *)(*(_QWORD *)a1 + 68LL) & _xmm;
    v22 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
    v23 = *(_QWORD *)v6;
    *(_QWORD *)&v68[0] = L"HomeMaximumLinearVelocity_Y";
    *((_QWORD *)&v68[0] + 1) = 27LL;
    if ( v21 <= (float)(MPCConstantManager::GetConstant<float>((__int64)v22, (v23 + 24) & -(__int64)(v23 != 0), v68) * v4) )
    {
      LODWORD(v24) = *(_DWORD *)(*(_QWORD *)a1 + 72LL) & _xmm;
      v25 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
      v26 = *(_QWORD *)v6;
      *(_QWORD *)&v68[0] = L"HomeMaximumLinearVelocity_Z";
      *((_QWORD *)&v68[0] + 1) = 27LL;
      if ( v24 <= (float)(MPCConstantManager::GetConstant<float>((__int64)v25, (v26 + 24) & -(__int64)(v26 != 0), v68)
                        * v4) )
      {
        v6 = a1 + 8;
LABEL_12:
        v27 = 0;
        goto LABEL_13;
      }
    }
  }
  v27 = 1;
LABEL_13:
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 101LL) )
  {
LABEL_18:
    v37 = 0;
    goto LABEL_19;
  }
  LODWORD(v28) = **(_DWORD **)(a1 + 16) & _xmm;
  v29 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
  v30 = *(_QWORD *)v6;
  *(_QWORD *)&v68[0] = L"HomeMaximumAngularAcceleration_X";
  *((_QWORD *)&v68[0] + 1) = 32LL;
  if ( v28 <= (float)(MPCConstantManager::GetConstant<float>((__int64)v29, (v30 + 24) & -(__int64)(v30 != 0), v68) * v5) )
  {
    LODWORD(v31) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4LL) & _xmm;
    v32 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
    v33 = *(_QWORD *)v6;
    *(_QWORD *)&v68[0] = L"HomeMaximumAngularAcceleration_Y";
    *((_QWORD *)&v68[0] + 1) = 32LL;
    if ( v31 <= (float)(MPCConstantManager::GetConstant<float>((__int64)v32, (v33 + 24) & -(__int64)(v33 != 0), v68) * v5) )
    {
      LODWORD(v34) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) & _xmm;
      v35 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
      v36 = *(_QWORD *)v6;
      *(_QWORD *)&v68[0] = L"HomeMaximumAngularAcceleration_Z";
      *((_QWORD *)&v68[0] + 1) = 32LL;
      if ( v34 <= (float)(MPCConstantManager::GetConstant<float>((__int64)v35, (v36 + 24) & -(__int64)(v36 != 0), v68)
                        * v5) )
      {
        v6 = a1 + 8;
        goto LABEL_18;
      }
    }
  }
  v37 = 1;
LABEL_19:
  v38 = v6;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 100LL) )
  {
    LODWORD(v39) = **(_DWORD **)(a1 + 24) & _xmm;
    v40 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
    v41 = *(_QWORD *)v6;
    *(_QWORD *)&v68[0] = L"HomeMaximumLinearAcceleration_X";
    *((_QWORD *)&v68[0] + 1) = 31LL;
    if ( v39 > (float)(MPCConstantManager::GetConstant<float>((__int64)v40, (v41 + 24) & -(__int64)(v41 != 0), v68) * v4) )
      goto LABEL_32;
    LODWORD(v42) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & _xmm;
    v43 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
    v44 = *(_QWORD *)v6;
    *(_QWORD *)&v68[0] = L"HomeMaximumLinearAcceleration_Y";
    *((_QWORD *)&v68[0] + 1) = 31LL;
    if ( v42 > (float)(MPCConstantManager::GetConstant<float>((__int64)v43, (v44 + 24) & -(__int64)(v44 != 0), v68) * v4)
      || (LODWORD(v45) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) & _xmm,
          v46 = MPCConstantManager::GetInstance(a1, a2, a3, a4),
          v47 = *(_QWORD *)v6,
          *(_QWORD *)&v68[0] = L"HomeMaximumLinearAcceleration_Z",
          *((_QWORD *)&v68[0] + 1) = 31LL,
          v45 > (float)(MPCConstantManager::GetConstant<float>((__int64)v46, (v47 + 24) & -(__int64)(v47 != 0), v68) * v4)) )
    {
LABEL_32:
      v48 = 1;
      v38 = a1 + 8;
      goto LABEL_25;
    }
    v38 = a1 + 8;
  }
  v48 = 0;
LABEL_25:
  if ( !*(_BYTE *)(*(_QWORD *)v6 + 10801LL) )
    goto LABEL_33;
  LODWORD(v49) = *(_DWORD *)(*(_QWORD *)v6 + 4356LL) & _xmm;
  v50 = MPCConstantManager::GetInstance(a1, a2, a3, a4);
  v51 = *(_QWORD *)v6;
  *(_QWORD *)&v68[0] = L"HomeMaximumWeightedDistance_X";
  *((_QWORD *)&v68[0] + 1) = 29LL;
  if ( v49 > MPCConstantManager::GetConstant<float>((__int64)v50, (v51 + 24) & -(__int64)(v51 != 0), v68) )
    goto LABEL_29;
  LODWORD(v56) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4360LL) & _xmm;
  v57 = MPCConstantManager::GetInstance(v53, v52, v54, v55);
  v58 = *(_QWORD *)v38;
  *(_QWORD *)&v68[0] = L"HomeMaximumWeightedDistance_Y";
  *((_QWORD *)&v68[0] + 1) = 29LL;
  if ( v56 > MPCConstantManager::GetConstant<float>((__int64)v57, (v58 + 24) & -(__int64)(v58 != 0), v68)
    || (LODWORD(v63) = *(_DWORD *)(*(_QWORD *)v38 + 4364LL) & _xmm,
        v64 = MPCConstantManager::GetInstance(v60, v59, v61, v62),
        v65 = *(_QWORD *)v38,
        *(_QWORD *)&v68[0] = L"HomeMaximumWeightedDistance_Z",
        *((_QWORD *)&v68[0] + 1) = 29LL,
        v63 > MPCConstantManager::GetConstant<float>((__int64)v64, (v65 + 24) & -(__int64)(v65 != 0), v68)) )
  {
LABEL_29:
    v66 = 1;
  }
  else
  {
LABEL_33:
    v66 = 0;
  }
  if ( v69 || v27 || v37 || v48 || v66 )
    return 1;
  return v7;
}
