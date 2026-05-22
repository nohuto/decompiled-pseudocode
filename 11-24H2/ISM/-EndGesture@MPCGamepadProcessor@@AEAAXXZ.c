/*
 * XREFs of ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801BEA78
 * Callers:
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801BEF30 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C07A0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C0A08 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068824 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1DFC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5E7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCGamepadProcessor::EndGesture(MPCGamepadProcessor *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rax
  char *v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm1
  MPCGestureHandlerManager *Instance; // rbx
  __int64 *v14; // rax
  const char *v15; // r9
  __int64 v16; // [rsp+20h] [rbp-BE8h] BYREF
  _BYTE v17[24]; // [rsp+30h] [rbp-BD8h] BYREF
  int v18; // [rsp+48h] [rbp-BC0h]
  char v19; // [rsp+120h] [rbp-AE8h] BYREF

  memset_0(v17, 0, 0xBC0uLL);
  v2 = 3LL;
  v18 = 3008;
  v3 = (_OWORD *)((char *)this + 3768);
  v4 = &v19;
  do
  {
    v5 = v3[1];
    *(_OWORD *)v4 = *v3;
    v6 = v3[2];
    *((_OWORD *)v4 + 1) = v5;
    v7 = v3[3];
    *((_OWORD *)v4 + 2) = v6;
    v8 = v3[4];
    *((_OWORD *)v4 + 3) = v7;
    v9 = v3[5];
    *((_OWORD *)v4 + 4) = v8;
    v10 = v3[6];
    *((_OWORD *)v4 + 5) = v9;
    v11 = v3[7];
    v3 += 8;
    *((_OWORD *)v4 + 6) = v10;
    v4 += 128;
    *((_OWORD *)v4 - 1) = v11;
    --v2;
  }
  while ( v2 );
  v12 = v3[1];
  *(_OWORD *)v4 = *v3;
  *((_OWORD *)v4 + 1) = v12;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, (__int64)v17, 2);
  Instance = MPCGestureHandlerManager::GetInstance();
  v14 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          &v16,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
  MPCGestureHandlerManager::DownLevelTo2D(Instance, (struct LegacyInputInfo *)v17, v14, v15);
  *((_DWORD *)this + 1046) = 0;
}
