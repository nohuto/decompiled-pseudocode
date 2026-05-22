/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801B7230
 * Callers:
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801B78F0 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801B7910 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B89D0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C1290 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  char v4; // di
  float v6; // xmm6_4
  struct MPCConstantManager *Instance; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const char *v11; // r9
  float v12; // xmm6_4
  struct MPCConstantManager *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  const char *v17; // r9
  float v18; // xmm6_4
  struct MPCConstantManager *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // r9
  float v24; // xmm6_4
  struct MPCConstantManager *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  const char *v29; // r9
  float v30; // xmm6_4
  struct MPCConstantManager *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  const char *v35; // r9
  float v36; // xmm6_4
  struct MPCConstantManager *v37; // rax
  __int128 v39; // [rsp+20h] [rbp-20h] BYREF

  v4 = 0;
  if ( *((int *)this + 927) > 0 )
    return 1;
  LODWORD(v6) = *((_DWORD *)this + 933) & _xmm;
  Instance = MPCConstantManager::GetInstance((__int64)this, a2, a3, a4);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = 18LL;
  if ( v6 > MPCConstantManager::GetConstant<float>(
              (__int64)Instance,
              ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
              &v39) )
    return 1;
  LODWORD(v12) = *((_DWORD *)this + 932) & _xmm;
  v13 = MPCConstantManager::GetInstance(v9, v8, v10, v11);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = 18LL;
  if ( v12 > MPCConstantManager::GetConstant<float>(
               (__int64)v13,
               ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
               &v39) )
    return 1;
  LODWORD(v18) = *((_DWORD *)this + 930) & _xmm;
  v19 = MPCConstantManager::GetInstance(v15, v14, v16, v17);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = 18LL;
  if ( v18 > MPCConstantManager::GetConstant<float>((__int64)v19, (__int64)this + 32, &v39) )
    return 1;
  LODWORD(v24) = *((_DWORD *)this + 931) & _xmm;
  v25 = MPCConstantManager::GetInstance(v21, v20, v22, v23);
  *(_QWORD *)&v39 = L"ThumbstickDeadzone";
  *((_QWORD *)&v39 + 1) = 18LL;
  if ( v24 > MPCConstantManager::GetConstant<float>((__int64)v25, (__int64)this + 32, &v39) )
    return 1;
  v30 = *((float *)this + 928);
  v31 = MPCConstantManager::GetInstance(v27, v26, v28, v29);
  *(_QWORD *)&v39 = L"TriggerDeadzone";
  *((_QWORD *)&v39 + 1) = 15LL;
  if ( v30 > MPCConstantManager::GetConstant<float>((__int64)v31, (__int64)this + 32, &v39) )
    return 1;
  v36 = *((float *)this + 929);
  v37 = MPCConstantManager::GetInstance(v33, v32, v34, v35);
  *(_QWORD *)&v39 = L"TriggerDeadzone";
  *((_QWORD *)&v39 + 1) = 15LL;
  if ( v36 > MPCConstantManager::GetConstant<float>((__int64)v37, (__int64)this + 32, &v39) )
    return 1;
  return v4;
}
