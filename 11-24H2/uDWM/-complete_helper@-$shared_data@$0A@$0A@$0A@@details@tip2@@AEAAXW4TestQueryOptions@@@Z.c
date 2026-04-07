/*
 * XREFs of ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1800E22E0
 * Callers:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@QEAAXXZ @ 0x180083870 (-complete@-$tip_test@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Tran.c)
 *     ??1?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@QEAA@XZ @ 0x1800E0608 (--1-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U1234.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18009A724 (tip_details_GetKernelBaseModuleHandle.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?evaluate_and_report@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z @ 0x1800E25F0 (-evaluate_and_report@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAX_J@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall tip2::details::shared_data<0,0,0>::complete_helper(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v5; // rbp
  FARPROC ProcAddress; // rax
  HMODULE KernelBaseModuleHandle; // rax
  int v8; // edx
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF
  LPVOID pv[2]; // [rsp+40h] [rbp-48h]
  __int128 v11; // [rsp+50h] [rbp-38h]

  v2 = a2;
  v9 = 0LL;
  *(_OWORD *)pv = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a1 + 232) )
    v2 = a2 | 8;
  v4 = *(_DWORD *)(a1 + 184);
  v5 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(a1 + 240) = 0LL;
  ProcAddress = (FARPROC)`TestQueryData'::`2'::s_pfnTestQueryData;
  if ( `TestQueryData'::`2'::s_pfnTestQueryData
    || (KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle(),
        ProcAddress = GetProcAddress(KernelBaseModuleHandle, "TestQueryData"),
        (`TestQueryData'::`2'::s_pfnTestQueryData = (__int64)ProcAddress) != 0) )
  {
    if ( ((unsigned int (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))ProcAddress)(v5, v2, v4, &v9) )
    {
      v8 = (int)pv[0];
      *(_DWORD *)(a1 + 64) |= HIDWORD(pv[0]);
      if ( !pv[1] )
        *(_DWORD *)(a1 + 184) = v8;
      tip2::details::shared_data<0,0,0>::evaluate_and_report(a1, v11);
    }
  }
  else
  {
    v9 = 0LL;
    *(_OWORD *)pv = 0LL;
    v11 = 0LL;
  }
  CoTaskMemFree(pv[1]);
}
