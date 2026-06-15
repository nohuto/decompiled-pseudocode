/*
 * XREFs of wil_RtlStagingConfig_QueryFeatureState @ 0x14007EE94
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x14007A66C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x14005EC1C (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_RtlStagingConfig_QueryFeatureState(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  BOOL v7; // ebp
  unsigned int v9; // edi
  FARPROC NtDllProcedureAddress; // rax
  int v11; // edx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v15 = 0LL;
  v7 = a3 == 0;
  v9 = 0;
  v16 = 0LL;
  v17 = 0;
  NtDllProcedureAddress = (FARPROC)g_wil_details_pfnRtlQueryFeatureConfiguration;
  if ( !g_wil_details_pfnRtlQueryFeatureConfiguration )
  {
    NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlQueryFeatureConfiguration");
    g_wil_details_pfnRtlQueryFeatureConfiguration = (__int64)NtDllProcedureAddress;
    if ( !NtDllProcedureAddress )
    {
      v11 = -1073741511;
      goto LABEL_9;
    }
  }
  v12 = ((__int64 (__fastcall *)(_QWORD, BOOL, __int64 *, __int64 *))NtDllProcedureAddress)(a2, v7, &v15, &v16);
  v11 = v12;
  if ( v12 )
  {
    if ( v12 != 279 )
      goto LABEL_9;
    v13 = HIDWORD(v16);
    v9 = 1;
  }
  else
  {
    v13 = HIDWORD(v16);
    v9 = 1;
    *(_DWORD *)a1 = (HIDWORD(v16) >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v13) & 0x3F;
    *(_DWORD *)(a1 + 12) = v17;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v13 >> 14;
    *(_DWORD *)(a1 + 20) = (v13 >> 6) & 1;
  }
  *(_DWORD *)(a1 + 16) = (v13 >> 7) & 1;
LABEL_9:
  if ( a4 )
  {
    LOBYTE(v4) = v11 != -2147483614;
    *a4 = v4;
  }
  return v9;
}
