/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C31AC
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C17D0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x18001431C (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801BF9DC (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     memcpy_0 @ 0x1801CF19C (memcpy_0.c)
 */

void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm10_4
  float v8; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm13_4
  float v11; // xmm6_4
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  const char *v15; // r9
  struct MPCConstantManager *v16; // rax
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm7_4
  float v21; // xmm6_4
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // r9
  struct MPCConstantManager *v26; // rax
  float v27; // xmm0_4
  float v28; // xmm6_4
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  const char *v32; // r9
  struct MPCConstantManager *v33; // rax
  float v34; // xmm0_4
  float v35; // xmm6_4
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  const char *v39; // r9
  struct MPCConstantManager *v40; // rax
  float v41; // xmm0_4
  float v42; // xmm6_4
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  const char *v46; // r9
  struct MPCConstantManager *v47; // rax
  float v48; // xmm0_4
  float v49; // xmm6_4
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  const char *v53; // r9
  struct MPCConstantManager *v54; // rax
  float v55; // xmm0_4
  bool v56; // zf
  struct MPCHolographicInputManager *v57; // rax
  struct MPCHolographicInputManager *v58; // rax
  float *v59; // rax
  __int128 v60; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+30h] [rbp-D8h]
  __int128 v62; // [rsp+38h] [rbp-D0h] BYREF
  float v63; // [rsp+48h] [rbp-C0h]
  float v64; // [rsp+4Ch] [rbp-BCh]
  float v65; // [rsp+50h] [rbp-B8h]
  float v66; // [rsp+58h] [rbp-B0h]
  float v67; // [rsp+5Ch] [rbp-ACh]
  float v68; // [rsp+60h] [rbp-A8h]
  _QWORD v69[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v70; // [rsp+88h] [rbp-80h]
  __int128 v71; // [rsp+98h] [rbp-70h]
  __int128 v72; // [rsp+A8h] [rbp-60h]
  _BYTE v73[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v74; // [rsp+C8h] [rbp-40h]
  __int128 v75; // [rsp+D8h] [rbp-30h]
  __int128 v76; // [rsp+E8h] [rbp-20h]
  __int128 v77; // [rsp+F8h] [rbp-10h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v73, Instance, 0xCD0uLL);
  *(_OWORD *)&v69[1] = v74;
  v70 = v75;
  v71 = v76;
  v72 = v77;
  MPCMath::OrientToGravity(&v62, (float *)&v69[1], 0.89999998);
  v5 = v63;
  v6 = v64;
  v7 = v65;
  v8 = v66;
  v9 = v67;
  v10 = v68;
  v11 = (float)*((int *)this + 1320);
  v16 = MPCConstantManager::GetInstance(v13, v12, v14, v15);
  *((_QWORD *)&v60 + 1) = L"MouseParams_PointScaleFactorXY";
  v61 = 30LL;
  v17 = MPCConstantManager::GetConstant<float>(
          (__int64)v16,
          ((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
          (__int128 *)((char *)&v60 + 8))
      * v11;
  v18 = v17 * *((float *)&v62 + 1);
  v19 = (float)(v17 * *(float *)&v62) + *((float *)this + 1329);
  v20 = v17 * *((float *)&v62 + 2);
  *((float *)this + 1329) = v19;
  *((float *)this + 1330) = v18 + *((float *)this + 1330);
  *((float *)this + 1331) = v20 + *((float *)this + 1331);
  v21 = (float)*((int *)this + 1321);
  v26 = MPCConstantManager::GetInstance(v23, v22, v24, v25);
  *((_QWORD *)&v60 + 1) = L"MouseParams_PointScaleFactorXY";
  v61 = 30LL;
  v27 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       MPCConstantManager::GetConstant<float>(
                         (__int64)v26,
                         ((unsigned __int64)this + 40) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
                         (__int128 *)((char *)&v60 + 8))) ^ _xmm)
      * v21;
  *((float *)this + 1329) = (float)(v27 * v5) + *((float *)this + 1329);
  *((float *)this + 1330) = (float)(v27 * v6) + *((float *)this + 1330);
  *((float *)this + 1331) = (float)(v27 * v7) + *((float *)this + 1331);
  v28 = (float)*((int *)this + 1323);
  v33 = MPCConstantManager::GetInstance(v30, v29, v31, v32);
  *((_QWORD *)&v60 + 1) = L"MouseParams_PointScaleFactorWheel";
  v61 = 33LL;
  v34 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       MPCConstantManager::GetConstant<float>(
                         (__int64)v33,
                         (__int64)this + 40,
                         (__int128 *)((char *)&v60 + 8))) ^ _xmm)
      * v28;
  *((float *)this + 1329) = (float)(v34 * v8) + *((float *)this + 1329);
  *((float *)this + 1330) = (float)(v34 * v9) + *((float *)this + 1330);
  *((float *)this + 1331) = (float)(v34 * v10) + *((float *)this + 1331);
  v35 = (float)*((int *)this + 1320);
  v40 = MPCConstantManager::GetInstance(v37, v36, v38, v39);
  *((_QWORD *)&v60 + 1) = L"MouseParams_PointScaleFactorXY";
  v61 = 30LL;
  v41 = MPCConstantManager::GetConstant<float>((__int64)v40, (__int64)this + 40, (__int128 *)((char *)&v60 + 8)) * v35;
  v42 = (float)*((int *)this + 1321);
  *((float *)this + 1332) = v41 + *((float *)this + 1332);
  v47 = MPCConstantManager::GetInstance(v44, v43, v45, v46);
  *((_QWORD *)&v60 + 1) = L"MouseParams_PointScaleFactorXY";
  v61 = 30LL;
  v48 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                       MPCConstantManager::GetConstant<float>(
                         (__int64)v47,
                         (__int64)this + 40,
                         (__int128 *)((char *)&v60 + 8))) ^ _xmm)
      * v42;
  v49 = (float)*((int *)this + 1323);
  *((float *)this + 1333) = v48 + *((float *)this + 1333);
  v54 = MPCConstantManager::GetInstance(v51, v50, v52, v53);
  *((_QWORD *)&v60 + 1) = L"MouseParams_PointScaleFactorWheel";
  v61 = 33LL;
  v55 = MPCConstantManager::GetConstant<float>((__int64)v54, (__int64)this + 40, (__int128 *)((char *)&v60 + 8));
  v56 = (*((_BYTE *)this + 5300) & 0x70) == 0;
  *((float *)this + 1334) = (float)(v55 * v49) + *((float *)this + 1334);
  if ( !v56 && !*((_QWORD *)this + 455) )
  {
    v57 = MPCHolographicInputManager::GetInstance();
    *((_QWORD *)this + 663) = *((_QWORD *)v57 + 30);
    *((_DWORD *)this + 1328) = *((_DWORD *)v57 + 62);
    v58 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v73, v58, 0xCD0uLL);
    *(_OWORD *)&v69[1] = v74;
    v70 = v75;
    v71 = v76;
    v72 = v77;
    v59 = Windows::Foundation::Numerics::transform((float *)&v60 + 2, (float *)this + 1326, (float *)&v69[1]);
    *(_QWORD *)((char *)this + 5316) = *(_QWORD *)v59;
    *((float *)this + 1331) = v59[2];
    *((_QWORD *)this + 666) = 0LL;
    *((_DWORD *)this + 1334) = 0;
  }
}
