/*
 * XREFs of ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C07A0
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801BEF30 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068824 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1DFC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0B0 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5E7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801BEA78 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCGamepadProcessor::UpdateScroll(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  int v2; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // r14d
  int v8; // edi
  bool v9; // cl
  _OWORD *v10; // rbx
  bool v11; // al
  char *v12; // rax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  const char *v25; // r9
  struct MPCConstantManager *Instance; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const char *v30; // r9
  struct MPCConstantManager *v31; // rax
  MPCGestureHandlerManager *v32; // rbx
  __int64 *v33; // rax
  const char *v34; // r9
  __int128 v35; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+30h] [rbp-D8h]
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v38[24]; // [rsp+48h] [rbp-C0h] BYREF
  int v39; // [rsp+60h] [rbp-A8h]
  char v40; // [rsp+138h] [rbp+30h] BYREF
  float v41; // [rsp+3A4h] [rbp+29Ch]
  float v42; // [rsp+3A8h] [rbp+2A0h]

  v2 = *((_DWORD *)this + 927);
  v5 = v2 & 0x80;
  v6 = v2 & 0x100;
  if ( (v2 & 0x40) != 0 )
    v7 = v5 == 0;
  else
    v7 = -(v5 != 0);
  if ( (v2 & 0x200) != 0 )
    v8 = (v6 != 0) - 1;
  else
    v8 = v6 != 0;
  v9 = v7 || v8;
  v10 = (_OWORD *)((char *)a2 + 240);
  v11 = *((_BYTE *)a2 + 240) && *((_BYTE *)a2 + 242) || *((_DWORD *)this + 1046) == 1;
  if ( v9 && v11 )
  {
    *((_DWORD *)this + 1046) = 1;
    memset_0(v38, 0, 0xBC0uLL);
    v12 = &v40;
    v39 = 3008;
    v13 = 3LL;
    do
    {
      v14 = v10[1];
      *(_OWORD *)v12 = *v10;
      v15 = v10[2];
      *((_OWORD *)v12 + 1) = v14;
      v16 = v10[3];
      *((_OWORD *)v12 + 2) = v15;
      v17 = v10[4];
      *((_OWORD *)v12 + 3) = v16;
      v18 = v10[5];
      *((_OWORD *)v12 + 4) = v17;
      v19 = v10[6];
      *((_OWORD *)v12 + 5) = v18;
      v20 = v10[7];
      v10 += 8;
      *((_OWORD *)v12 + 6) = v19;
      v12 += 128;
      *((_OWORD *)v12 - 1) = v20;
      --v13;
    }
    while ( v13 );
    v21 = v10[1];
    *(_OWORD *)v12 = *v10;
    *((_OWORD *)v12 + 1) = v21;
    MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, (__int64)v38, 5);
    Instance = MPCConstantManager::GetInstance(v23, v22, v24, v25);
    *((_QWORD *)&v35 + 1) = L"ScrollingScale";
    v36 = 14LL;
    v41 = MPCConstantManager::GetConstant<float>((__int64)Instance, (__int64)this + 32, (__int128 *)((char *)&v35 + 8))
        * (float)v8;
    v31 = MPCConstantManager::GetInstance(v28, v27, v29, v30);
    *((_QWORD *)&v35 + 1) = L"ScrollingScale";
    v36 = 14LL;
    v42 = MPCConstantManager::GetConstant<float>(
            (__int64)v31,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
            (__int128 *)((char *)&v35 + 8))
        * (float)v7;
    v32 = MPCGestureHandlerManager::GetInstance();
    v33 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            &v37,
            (__int64)this + 32);
    MPCGestureHandlerManager::DownLevelTo2D(v32, (struct LegacyInputInfo *)v38, v33, v34);
  }
  else if ( *((_DWORD *)this + 1046) == 1 )
  {
    MPCGamepadProcessor::EndGesture(this);
  }
}
