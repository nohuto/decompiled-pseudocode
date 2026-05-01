/*
 * XREFs of TestUnlockData @ 0x1801B3ADC
 * Callers:
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180291E38 (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$00$00$00@details@tip2@@AEAAXXZ @ 0x1803C27DC (-end_update@-$shared_data@$00$00$00@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ @ 0x180698A34 (-end_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXXZ.c)
 * Callees:
 *     tip_details_GetKernelBaseModuleHandle @ 0x180193D60 (tip_details_GetKernelBaseModuleHandle.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

FARPROC __fastcall TestUnlockData(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  FARPROC result; // rax
  HMODULE KernelBaseModuleHandle; // rax

  result = (FARPROC)`TestUnlockData'::`2'::s_pfnTestUnlockData;
  if ( `TestUnlockData'::`2'::s_pfnTestUnlockData )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *))result)(a1, 0LL, a3, a4);
  KernelBaseModuleHandle = tip_details_GetKernelBaseModuleHandle();
  result = GetProcAddress(KernelBaseModuleHandle, "TestUnlockData");
  `TestUnlockData'::`2'::s_pfnTestUnlockData = (__int64)result;
  if ( result )
    return (FARPROC)((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *))result)(a1, 0LL, a3, a4);
  *a4 = 0LL;
  a4[1] = 0LL;
  a4[2] = 0LL;
  return result;
}
