/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801BD694
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BD520 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180013D54 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C1290 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(
        MPCClickerProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  struct MPCConstantManager *Instance; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
  float v16; // xmm6_4
  struct MPCConstantManager *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  const char *v21; // r9
  float v22; // xmm8_4
  float v23; // xmm13_4
  struct MPCConstantManager *v24; // rax
  struct MPCHolographicInputManager *v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v31; // r9
  struct MPCConstantManager *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  const char *v36; // r9
  struct MPCConstantManager *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  const char *v41; // r9
  struct MPCConstantManager *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  const char *v46; // r9
  float *v47; // rdi
  struct MPCHolographicInputManager *v48; // rax
  float *v49; // rax
  struct MPCConstantManager *v50; // rax
  float v51; // xmm0_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  float v54; // xmm0_4
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  const char *v58; // r9
  struct MPCConstantManager *v59; // rax
  float v60; // xmm0_4
  float v61; // xmm2_4
  float v62; // xmm3_4
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  const char *v66; // r9
  struct MPCConstantManager *v67; // rax
  float v68; // xmm0_4
  float v69; // xmm3_4
  float v70; // xmm2_4
  float *v71; // rax
  struct MPCHolographicInputManager *v72; // rax
  __int64 v73; // xmm0_8
  float *v74; // rax
  __int128 v75; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v76; // [rsp+30h] [rbp-D8h]
  __int64 v77; // [rsp+38h] [rbp-D0h] BYREF
  int v78; // [rsp+40h] [rbp-C8h]
  _OWORD v79[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v80[16]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v81; // [rsp+98h] [rbp-70h]
  __int128 v82; // [rsp+A8h] [rbp-60h]
  __int128 v83; // [rsp+B8h] [rbp-50h]
  __int128 v84; // [rsp+C8h] [rbp-40h]

  v4 = *((_BYTE *)this + 3700) == 0;
  v7 = (float)(*((float *)a2 + 566) + *((float *)this + 921)) * 0.5;
  v8 = (float)(*((float *)a2 + 565) + *((float *)this + 920)) * 0.5;
  v9 = 0.0;
  v10 = 0.0;
  *((float *)this + 920) = v8;
  *((float *)this + 921) = v7;
  if ( !v4 )
  {
    v10 = v8 - *((float *)this + 922);
    v9 = v7 - *((float *)this + 923);
  }
  Instance = MPCConstantManager::GetInstance((__int64)this, (__int64)a2, a3, a4);
  *((_QWORD *)&v75 + 1) = L"DeadZoneAngle";
  v76 = 13LL;
  if ( MPCConstantManager::GetConstant<float>(
         (__int64)Instance,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         (__int128 *)((char *)&v75 + 8)) > COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & _xmm) )
    v10 = 0.0;
  LODWORD(v16) = COERCE_UNSIGNED_INT(*((float *)this + 921) - 0.0) & _xmm;
  v17 = MPCConstantManager::GetInstance(v13, v12, v14, v15);
  *((_QWORD *)&v75 + 1) = L"DeadZoneAngle";
  v76 = 13LL;
  if ( MPCConstantManager::GetConstant<float>((__int64)v17, (__int64)this + 24, (__int128 *)((char *)&v75 + 8)) > v16 )
    v9 = 0.0;
  v22 = 0.0;
  if ( *((_BYTE *)a2 + 2322) )
  {
    if ( (*((_BYTE *)a2 + 2280) & 0x40) != 0 )
    {
      v23 = *((float *)a2 + 575);
      v24 = MPCConstantManager::GetInstance(v19, v18, v20, v21);
      v76 = 18LL;
      *((_QWORD *)&v75 + 1) = L"ThumbStickDeadZone";
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 0.0) & _xmm) > MPCConstantManager::GetConstant<float>(
                                                                   (__int64)v24,
                                                                   (__int64)this + 24,
                                                                   (__int128 *)((char *)&v75 + 8)) )
      {
        v22 = (float)(v23 + *((float *)this + 924)) * 0.5;
        *((float *)this + 924) = v22;
      }
    }
  }
  v25 = MPCHolographicInputManager::GetInstance();
  memcpy_0(v80, v25, 0xCD0uLL);
  v4 = *((_BYTE *)a2 + 2256) == 1;
  v79[0] = v81;
  v26 = v83;
  v79[1] = v82;
  v27 = v84;
  *((_DWORD *)this + 918) = v4;
  v79[2] = v26;
  v79[3] = v27;
  v32 = MPCConstantManager::GetInstance(v29, v28, v30, v31);
  v76 = 18LL;
  *((_QWORD *)&v75 + 1) = L"PointScaleFactorXY";
  *((float *)this + 932) = (float)(MPCConstantManager::GetConstant<float>(
                                     (__int64)v32,
                                     (__int64)this + 24,
                                     (__int128 *)((char *)&v75 + 8))
                                 * v10)
                         + *((float *)this + 932);
  v37 = MPCConstantManager::GetInstance(v34, v33, v35, v36);
  *((_QWORD *)&v75 + 1) = L"PointScaleFactorXY";
  v76 = 18LL;
  *((float *)this + 933) = (float)(MPCConstantManager::GetConstant<float>(
                                     (__int64)v37,
                                     (__int64)this + 24,
                                     (__int128 *)((char *)&v75 + 8))
                                 * v9)
                         + *((float *)this + 933);
  v42 = MPCConstantManager::GetInstance(v39, v38, v40, v41);
  v76 = 21LL;
  *((_QWORD *)&v75 + 1) = L"PointScaleFactorStick";
  *(float *)&v26 = MPCConstantManager::GetConstant<float>(
                     (__int64)v42,
                     (__int64)this + 24,
                     (__int128 *)((char *)&v75 + 8));
  v4 = *((_DWORD *)this + 918) == 0;
  *((_DWORD *)this + 922) = *((_DWORD *)this + 920);
  *((_DWORD *)this + 923) = *((_DWORD *)this + 921);
  *((_BYTE *)this + 3700) = 1;
  *((float *)this + 934) = (float)(COERCE_FLOAT(v26 ^ _xmm) * v22) + *((float *)this + 934);
  if ( v4 )
  {
    v72 = MPCHolographicInputManager::GetInstance();
    v73 = *((_QWORD *)v72 + 30);
    LODWORD(v72) = *((_DWORD *)v72 + 62);
    v77 = v73;
    v78 = (int)v72;
    v74 = Windows::Foundation::Numerics::transform((float *)&v75 + 2, (float *)&v77, (float *)v79);
    *(_QWORD *)((char *)this + 3716) = *(_QWORD *)v74;
    *((float *)this + 931) = v74[2];
  }
  else
  {
    v47 = (float *)((char *)this + 3716);
    if ( *((_DWORD *)this + 919) )
    {
      v50 = MPCConstantManager::GetInstance(v44, v43, v45, v46);
      *((_QWORD *)&v75 + 1) = L"PointScaleFactorXY";
      v76 = 18LL;
      v51 = MPCConstantManager::GetConstant<float>((__int64)v50, (__int64)this + 24, (__int128 *)((char *)&v75 + 8));
      v52 = *((float *)this + 930);
      v53 = *((float *)this + 931);
      v54 = v51 * v10;
      *v47 = v54 + *v47;
      *((float *)this + 930) = v52 + (float)(v54 * 0.0);
      *((float *)this + 931) = v53 + (float)(v54 * 0.0);
      v59 = MPCConstantManager::GetInstance(v56, v55, v57, v58);
      *((_QWORD *)&v75 + 1) = L"PointScaleFactorXY";
      v76 = 18LL;
      v60 = MPCConstantManager::GetConstant<float>((__int64)v59, (__int64)this + 24, (__int128 *)((char *)&v75 + 8))
          * v9;
      v61 = *((float *)this + 930) + v60;
      v62 = *((float *)this + 931) + (float)(v60 * 0.0);
      *v47 = (float)(v60 * 0.0) + *v47;
      *((float *)this + 930) = v61;
      *((float *)this + 931) = v62;
      v67 = MPCConstantManager::GetInstance(v64, v63, v65, v66);
      v76 = 21LL;
      *((_QWORD *)&v75 + 1) = L"PointScaleFactorStick";
      v68 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                           MPCConstantManager::GetConstant<float>(
                             (__int64)v67,
                             (__int64)this + 24,
                             (__int128 *)((char *)&v75 + 8))) ^ _xmm)
          * v22;
      v69 = *((float *)this + 931) + v68;
      v70 = *((float *)this + 930) + (float)(v68 * 0.0);
      *v47 = (float)(v68 * 0.0) + *v47;
      *((float *)this + 930) = v70;
      *((float *)this + 931) = v69;
      v71 = Windows::Foundation::Numerics::transform((float *)&v77, (float *)this + 929, (float *)v79);
      *((_QWORD *)this + 463) = *(_QWORD *)v71;
      *((float *)this + 928) = v71[2];
    }
    else
    {
      v48 = MPCHolographicInputManager::GetInstance();
      *(_QWORD *)v47 = *((_QWORD *)v48 + 30);
      *((_DWORD *)this + 931) = *((_DWORD *)v48 + 62);
      v49 = Windows::Foundation::Numerics::transform((float *)&v77, (float *)this + 929, (float *)v79);
      *((_QWORD *)this + 463) = *(_QWORD *)v49;
      *((float *)this + 928) = v49[2];
      *((_DWORD *)this + 932) = 0;
      *((_DWORD *)this + 933) = 0;
      *((_DWORD *)this + 934) = 0;
      *((_BYTE *)this + 3700) = 0;
    }
  }
  *((_DWORD *)this + 919) = *((_DWORD *)this + 918);
}
