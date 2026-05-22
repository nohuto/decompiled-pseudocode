/*
 * XREFs of ?GetTouchInjectionContactAreaRadius@MPCHandProcessor@@UEAAIXZ @ 0x1800C1FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000E67C (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007F6A0 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

__int64 __fastcall MPCHandProcessor::GetTouchInjectionContactAreaRadius(
        __int64 this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  struct MPCConstantManager *Instance; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  Instance = MPCConstantManager::GetInstance(this, a2, a3, a4);
  *((_QWORD *)&v7 + 1) = 31LL;
  *(_QWORD *)&v7 = L"TouchInjectionContactAreaRadius";
  return MPCConstantManager::GetConstant<unsigned long>((__int64)Instance, this & -(__int64)(this != 24), &v7);
}
