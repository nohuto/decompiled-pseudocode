/*
 * XREFs of TestQueryData @ 0x1800F4200
 * Callers:
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18002E0BC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x1800F0FAC (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180021F0C (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

FARPROC __fastcall TestQueryData(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestQueryData'::`2'::s_pfnTestQueryData;
  if ( `TestQueryData'::`2'::s_pfnTestQueryData )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64))result)(a1, a2, a3, a4);
  KernelBaseModuleHandle = wil_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestQueryData");
  `TestQueryData'::`2'::s_pfnTestQueryData = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64))result)(a1, a2, a3, a4);
  return result;
}
