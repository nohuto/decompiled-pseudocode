/*
 * XREFs of ?SetConstantToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGPEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B51C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B5130 (-SetConstantToDefault@MPCConstantManager@@QEAAXW4InputType@@V-$basic_string_view@GU-$char_traits.c)
 */

__int64 __fastcall MPCConstantManager::SetConstantToDefault(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __m128i v7; // [rsp+20h] [rbp-18h] BYREF

  v7.m128i_i64[0] = a4;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a4 + 2 * v5) );
  v7.m128i_i64[1] = v5;
  MPCConstantManager::SetConstantToDefault(a1, a3, &v7);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a5 + 8) + 24LL))(a5 + 8, 0LL);
}
