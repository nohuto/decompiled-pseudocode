/*
 * XREFs of _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x1801BB420
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x1801BCE94 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18000EDDC (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B3788 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 */

LSTATUS __fastcall lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(__int64 a1, const WCHAR *a2, __int64 a3)
{
  LSTATUS result; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v9; // r9
  struct MPCConstantManager *Instance; // rax
  int *v11; // rcx
  int v12; // edx
  __int64 v13; // rcx
  __m128i v14; // [rsp+40h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h]

  result = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\ISM\\6dof",
             a2,
             0x10u,
             0LL,
             *(PVOID *)a1,
             *(LPDWORD *)(a1 + 8));
  if ( !result )
  {
    Instance = MPCConstantManager::GetInstance(v7, v6, v8, v9);
    v11 = *(int **)a1;
    BYTE4(v15) = 2;
    v14.m128i_i64[0] = a3;
    v12 = *v11;
    v13 = -1LL;
    do
      ++v13;
    while ( *(_WORD *)(a3 + 2 * v13) );
    v14.m128i_i64[1] = v13;
    *(float *)&v15 = (float)v12 / 1000.0;
    return MPCConstantManager::ChangeConstant((__int64)Instance, 0x2000, &v14, v15);
  }
  return result;
}
