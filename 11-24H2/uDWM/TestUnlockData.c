/*
 * XREFs of TestUnlockData @ 0x180087B68
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18004C30C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x18009A724 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

FARPROC __fastcall TestUnlockData(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestUnlockData'::`2'::s_pfnTestUnlockData;
  if ( `TestUnlockData'::`2'::s_pfnTestUnlockData )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *))result)(a1, 0LL, a3, a4);
  KernelBaseModuleHandle = (HMODULE)tip_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestUnlockData");
  `TestUnlockData'::`2'::s_pfnTestUnlockData = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *))result)(a1, 0LL, a3, a4);
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  return result;
}
