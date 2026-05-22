/*
 * XREFs of ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1800C0470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180068774 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180068824 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006885C (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x180068890 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180069264 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B1DFC (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2058 (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800B2110 (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BF0FC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5E7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCHandProcessor::OnGazeUpdate(__int64 this, struct LegacyInputInfo *a2, __int64 a3, const char *a4)
{
  struct MPCConstantManager *Instance; // rax
  char v7; // bl
  _OWORD *v8; // rdi
  struct MPCGestureHandlerManager *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm1
  struct MPCGestureHandlerManager *v21; // rbx
  __int64 *v22; // rax
  struct MPCGestureHandlerManager *v23; // rbx
  _QWORD *v24; // rax
  struct MPCGestureHandlerManager *v25; // rbx
  __int64 *v26; // rax
  MPCGestureHandlerManager *v27; // rbx
  __int64 *v28; // rax
  const char *v29; // r9
  struct MPCGestureHandlerManager *v30; // rbx
  __int64 *v31; // rax
  _QWORD v32[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v33; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v34[24]; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h]
  _BYTE v36[616]; // [rsp+130h] [rbp+30h] BYREF
  int v37; // [rsp+398h] [rbp+298h]
  int WorkspaceId; // [rsp+3C0h] [rbp+2C0h]

  if ( *(_BYTE *)(this + 3640) )
  {
    Instance = MPCConstantManager::GetInstance(this, (__int64)a2, a3, a4);
    *((_QWORD *)&v33 + 1) = 21LL;
    *(_QWORD *)&v33 = L"DisableInputInjection";
    v7 = MPCConstantManager::GetConstant<bool>((__int64)Instance, this & -(__int64)(this != 24), &v33);
    if ( MPCInputProviderBase::IsPrimary(this) )
    {
      if ( !v7 )
      {
        v8 = (_OWORD *)((char *)a2 + 240);
        if ( *((_BYTE *)a2 + 240) )
        {
          v9 = MPCGestureHandlerManager::GetInstance();
          v10 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v32,
                  this & -(__int64)(this != 24));
          if ( !MPCGestureHandlerManager::IsInjecting((__int64)v9, v10) && !*((_BYTE *)a2 + 650) )
          {
            memset_0(v34, 0, 0xBC0uLL);
            v11 = 3LL;
            v35 = 3008;
            v12 = v36;
            do
            {
              v13 = v8[1];
              *v12 = *v8;
              v14 = v8[2];
              v12[1] = v13;
              v15 = v8[3];
              v12[2] = v14;
              v16 = v8[4];
              v12[3] = v15;
              v17 = v8[5];
              v12[4] = v16;
              v18 = v8[6];
              v12[5] = v17;
              v19 = v8[7];
              v8 += 8;
              v12[6] = v18;
              v12 += 8;
              *(v12 - 1) = v19;
              --v11;
            }
            while ( v11 );
            v20 = v8[1];
            *v12 = *v8;
            v12[1] = v20;
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, v34, 4LL);
            goto LABEL_15;
          }
        }
      }
    }
    if ( !*(_QWORD *)(this + 3600) )
    {
      v21 = MPCGestureHandlerManager::GetInstance();
      v22 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v32,
              this & -(__int64)(this != 24));
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v21, v22)
        || (v23 = MPCGestureHandlerManager::GetInstance(),
            v24 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v32,
                    this & -(__int64)(this != 24)),
            MPCGestureHandlerManager::IsHovering((__int64)v23, v24)) )
      {
        if ( !*((_BYTE *)a2 + 650) )
        {
          memset_0(v34, 0, 0xBC0uLL);
          v35 = 3008;
          v37 = 2;
          v25 = MPCGestureHandlerManager::GetInstance();
          v26 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v32,
                  this & -(__int64)(this != 24));
          WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v25, v26);
          v36[0] = 1;
          v36[408] = 1;
LABEL_15:
          v27 = MPCGestureHandlerManager::GetInstance();
          v28 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v32,
                  this & -(__int64)(this != 24));
          MPCGestureHandlerManager::DownLevelTo2D(v27, (struct LegacyInputInfo *)v34, v28, v29);
        }
      }
    }
  }
  v30 = MPCGestureHandlerManager::GetInstance();
  v31 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v32,
          this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v30, v31);
}
