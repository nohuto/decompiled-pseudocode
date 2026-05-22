/*
 * XREFs of ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801B94D8
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801B7A00 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068A34 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180068A6C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B403C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C1290 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7CBC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801B7548 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::UpdateZoom(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  char *v2; // r14
  float v4; // xmm9_4
  float v5; // xmm7_4
  __int64 v6; // rdx
  _OWORD *v7; // rax
  char *v8; // rcx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  const char *v20; // r9
  struct MPCConstantManager *Instance; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // r9
  char v26; // bl
  bool v27; // si
  float v28; // xmm7_4
  struct MPCConstantManager *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const char *v32; // r9
  float v33; // xmm0_4
  int v34; // eax
  struct MPCConstantManager *v35; // rax
  float v36; // xmm0_4
  MPCGestureHandlerManager *v37; // rbx
  __int64 *v38; // rax
  const char *v39; // r9
  __int128 v40; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-D8h]
  __int64 v42; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v43[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v44; // [rsp+60h] [rbp-A8h]
  char v45; // [rsp+138h] [rbp+30h] BYREF
  int v46; // [rsp+3A0h] [rbp+298h]
  float v47; // [rsp+3ACh] [rbp+2A4h]

  v2 = (char *)a2 + 240;
  v4 = *((float *)this + 929) - *((float *)this + 928);
  v5 = *((float *)this + 936) - *((float *)this + 935);
  memset_0(v43, 0, 0xBC0uLL);
  v6 = 3LL;
  v44 = 3008;
  v7 = v2;
  v8 = &v45;
  do
  {
    v9 = v7[1];
    *(_OWORD *)v8 = *v7;
    v10 = v7[2];
    *((_OWORD *)v8 + 1) = v9;
    v11 = v7[3];
    *((_OWORD *)v8 + 2) = v10;
    v12 = v7[4];
    *((_OWORD *)v8 + 3) = v11;
    v13 = v7[5];
    *((_OWORD *)v8 + 4) = v12;
    v14 = v7[6];
    *((_OWORD *)v8 + 5) = v13;
    v15 = v7[7];
    v7 += 8;
    *((_OWORD *)v8 + 6) = v14;
    v8 += 128;
    *((_OWORD *)v8 - 1) = v15;
    --v6;
  }
  while ( v6 );
  v16 = v7[1];
  *(_OWORD *)v8 = *v7;
  *((_OWORD *)v8 + 1) = v16;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v8, (__int64)v43, 0);
  Instance = MPCConstantManager::GetInstance(v18, v17, v19, v20);
  v41 = 18LL;
  *((_QWORD *)&v40 + 1) = L"ThumbstickDeadzone";
  v26 = 1;
  v27 = COERCE_FLOAT(LODWORD(v4) & _xmm) > MPCConstantManager::GetConstant<float>(
                                             (__int64)Instance,
                                             ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
                                             (__int128 *)((char *)&v40 + 8))
     && *v2;
  LODWORD(v28) = LODWORD(v5) & _xmm;
  v29 = MPCConstantManager::GetInstance(v23, v22, v24, v25);
  *((_QWORD *)&v40 + 1) = L"ThumbstickDeadzone";
  v41 = 18LL;
  v33 = MPCConstantManager::GetConstant<float>((__int64)v29, (__int64)this + 32, (__int128 *)((char *)&v40 + 8));
  LOBYTE(v31) = *v2 && v2[2] || *((_DWORD *)this + 1046) == 2;
  LOBYTE(v30) = v27 && v28 <= v33 && !*((_DWORD *)this + 1046);
  v34 = *((_DWORD *)this + 1046);
  if ( v34 != 2 )
  {
LABEL_20:
    v26 = 0;
    goto LABEL_21;
  }
  if ( v27 )
  {
    if ( !(_BYTE)v31 )
      goto LABEL_24;
    goto LABEL_20;
  }
LABEL_21:
  if ( (_BYTE)v31 && (_BYTE)v30 )
  {
    *((_DWORD *)this + 1046) = 2;
    v34 = 2;
  }
LABEL_24:
  if ( v26 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
  else if ( v34 == 2 )
  {
    v35 = MPCConstantManager::GetInstance(v31, v30, 2LL, v32);
    v41 = 12LL;
    *((_QWORD *)&v40 + 1) = L"ZoomingScale";
    v36 = MPCConstantManager::GetConstant<float>((__int64)v35, (__int64)this + 32, (__int128 *)((char *)&v40 + 8));
    v46 = 6;
    v47 = (float)((float)(v36 * v4) * *((float *)this + 1066)) + 1.0;
    v37 = MPCGestureHandlerManager::GetInstance();
    v38 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v42,
            (__int64)this + 32);
    MPCGestureHandlerManager::DownLevelTo2D(v37, (struct LegacyInputInfo *)v43, v38, v39);
  }
}
