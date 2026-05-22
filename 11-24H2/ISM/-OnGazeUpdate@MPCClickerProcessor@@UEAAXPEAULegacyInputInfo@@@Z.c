/*
 * XREFs of ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C46A0
 * Callers:
 *     <none>
 * Callees:
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
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C5E7C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 */

void __fastcall MPCClickerProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  _OWORD *v4; // rdi
  char *v5; // r14
  struct MPCGestureHandlerManager *Instance; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  struct MPCGestureHandlerManager *v18; // rax
  unsigned __int64 v19; // rdx
  struct MPCGestureHandlerManager *v20; // rbx
  __int64 *v21; // rax
  struct MPCGestureHandlerManager *v22; // rbx
  _QWORD *v23; // rax
  struct MPCGestureHandlerManager *v24; // rbx
  __int64 *v25; // rax
  MPCGestureHandlerManager *v26; // rbx
  __int64 *v27; // rax
  const char *v28; // r9
  struct MPCGestureHandlerManager *v29; // rbx
  __int64 *v30; // rax
  _QWORD v31[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v32[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  _BYTE v34[616]; // [rsp+120h] [rbp+20h] BYREF
  int v35; // [rsp+388h] [rbp+288h]
  int WorkspaceId; // [rsp+3B0h] [rbp+2B0h]

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    v4 = (_OWORD *)((char *)a2 + 240);
    if ( *(_BYTE *)v4 )
    {
      v5 = (char *)(this - 24);
      Instance = MPCGestureHandlerManager::GetInstance();
      v7 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
             v31,
             this & -(__int64)(this != 24));
      if ( !MPCGestureHandlerManager::IsInjecting((__int64)Instance, v7) )
      {
        memset_0(v32, 0, 0xBC0uLL);
        v8 = 3LL;
        v33 = 3008;
        v9 = v34;
        do
        {
          v10 = v4[1];
          *v9 = *v4;
          v11 = v4[2];
          v9[1] = v10;
          v12 = v4[3];
          v9[2] = v11;
          v13 = v4[4];
          v9[3] = v12;
          v14 = v4[5];
          v9[4] = v13;
          v15 = v4[6];
          v9[5] = v14;
          v16 = v4[7];
          v4 += 8;
          v9[6] = v15;
          v9 += 8;
          *(v9 - 1) = v16;
          --v8;
        }
        while ( v8 );
        v17 = v4[1];
        *v9 = *v4;
        v9[1] = v17;
        MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(0LL, (__int64)v32, 4);
        v18 = MPCGestureHandlerManager::GetInstance();
        v19 = this & -(__int64)(this != 24);
        goto LABEL_12;
      }
    }
  }
  if ( *(_QWORD *)(this + 3600) )
  {
    v5 = (char *)(this - 24);
  }
  else
  {
    v5 = (char *)(this - 24);
    v20 = MPCGestureHandlerManager::GetInstance();
    v21 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
            v31,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v20, v21)
      || (v22 = MPCGestureHandlerManager::GetInstance(),
          v23 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v31,
                  this & -(__int64)(this != 24)),
          MPCGestureHandlerManager::IsHovering((__int64)v22, v23)) )
    {
      memset_0(v32, 0, 0xBC0uLL);
      v33 = 3008;
      v35 = 2;
      v24 = MPCGestureHandlerManager::GetInstance();
      v25 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v31,
              this & -(__int64)(this != 24));
      WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId((__int64)v24, v25);
      v34[0] = 1;
      v34[408] = 1;
      v18 = MPCGestureHandlerManager::GetInstance();
      v19 = this & -(__int64)(this != 24);
LABEL_12:
      v26 = v18;
      v27 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              v31,
              v19);
      MPCGestureHandlerManager::DownLevelTo2D(v26, (struct LegacyInputInfo *)v32, v27, v28);
    }
  }
  v29 = MPCGestureHandlerManager::GetInstance();
  v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v31,
          this & -(__int64)(v5 != 0LL));
  MPCGestureHandlerManager::OnGazeUpdate((__int64)v29, v30);
}
