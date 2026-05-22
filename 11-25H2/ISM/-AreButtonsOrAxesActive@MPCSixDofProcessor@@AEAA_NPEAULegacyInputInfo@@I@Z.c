/*
 * XREFs of ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801B4078
 * Callers:
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x18000FDF8 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x18000FE98 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800C1290 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

bool __fastcall MPCSixDofProcessor::AreButtonsOrAxesActive(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        int a3,
        const char *a4)
{
  __int64 v4; // r8
  unsigned __int64 v7; // rdi
  float v8; // xmm6_4
  struct MPCConstantManager *v9; // rax
  float v10; // xmm6_4
  struct MPCConstantManager *Instance; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const char *v16; // r9
  float v17; // xmm6_4
  struct MPCConstantManager *v18; // rax
  __int128 v20; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)~a3;
  if ( ((unsigned __int8)v4 & *((_BYTE *)a2 + 2280) & 0x3F) == 0 )
  {
    v7 = (unsigned __int64)this + 24;
    if ( !*((_BYTE *)a2 + 2323)
      || (v8 = *((float *)a2 + 578),
          v9 = MPCConstantManager::GetInstance((__int64)this, (__int64)a2, v4, a4),
          *((_QWORD *)&v20 + 1) = 15LL,
          *(_QWORD *)&v20 = L"TriggerDeadzone",
          v8 <= MPCConstantManager::GetConstant<float>((__int64)v9, v7 & -(__int64)(this != 0LL), &v20)) )
    {
      if ( !*((_BYTE *)a2 + 2324) )
        return 0;
      LODWORD(v10) = *((_DWORD *)a2 + 576) & _xmm;
      Instance = MPCConstantManager::GetInstance((__int64)this, (__int64)a2, v4, a4);
      *((_QWORD *)&v20 + 1) = 18LL;
      *(_QWORD *)&v20 = L"ThumbstickDeadzone";
      v12 = v7 & -(__int64)(this != 0LL);
      if ( v10 <= MPCConstantManager::GetConstant<float>((__int64)Instance, v12, &v20) )
      {
        LODWORD(v17) = *((_DWORD *)a2 + 577) & _xmm;
        v18 = MPCConstantManager::GetInstance(v14, v13, v15, v16);
        *(_QWORD *)&v20 = L"ThumbstickDeadzone";
        *((_QWORD *)&v20 + 1) = 18LL;
        return v17 > MPCConstantManager::GetConstant<float>((__int64)v18, v12, &v20);
      }
    }
  }
  return 1;
}
