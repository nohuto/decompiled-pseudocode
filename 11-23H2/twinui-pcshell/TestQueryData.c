/*
 * XREFs of TestQueryData @ 0x1800BCEA0
 * Callers:
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800130C8 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?is_running@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18004039C (-is_running@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180086434 (-complete_helper@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x180093D4C (--1-$test_common_data@$00@details@tip@@QEAA@XZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1800B6920 (-is_running@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x1800BCDCC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180183458 (--1-$test_common_data@$0A@@details@tip@@QEAA@XZ.c)
 *     ?complete_helper@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1801B3F00 (-complete_helper@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180288A74 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 * Callees:
 *     ?wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ @ 0x180182AE4 (-wil_details_GetKernelBaseModuleHandle@@YAPEAUHINSTANCE__@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
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
