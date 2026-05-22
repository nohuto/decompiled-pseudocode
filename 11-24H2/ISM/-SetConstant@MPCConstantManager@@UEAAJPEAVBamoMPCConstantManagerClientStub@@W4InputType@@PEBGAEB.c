/*
 * XREFs of ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800B4DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x1800B3788 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCConstantManager::SetConstant(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        PROPVARIANT *propvarIn,
        __int64 a6)
{
  PROPVARIANT *v8; // rcx
  HRESULT v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 (__fastcall *v14)(__int64, __int64); // r14
  HRESULT v15; // eax
  HRESULT v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  ULONGLONG pullRet; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+28h] [rbp-28h]
  DOUBLE pdblRet[2]; // [rsp+30h] [rbp-20h] BYREF
  __m128i v22; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v8 = propvarIn;
  switch ( *(_WORD *)propvarIn )
  {
    case 4:
    case 5:
      pdblRet[0] = 0.0;
      v16 = PropVariantToDouble(propvarIn, pdblRet);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x103,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v16,
          pullRet);
      v12 = a6;
      v13 = -1LL;
      BYTE4(v20) = 2;
      v17 = *(_QWORD *)(a6 + 8);
      v22.m128i_i64[0] = a4;
      v14 = *(__int64 (__fastcall **)(__int64, __int64))(v17 + 24);
      *(float *)&v20 = pdblRet[0];
      do
        ++v13;
      while ( *(_WORD *)(a4 + 2 * v13) );
      break;
    case 0xB:
      LODWORD(propvarIn) = 0;
      v15 = PropVariantToBoolean(v8, (BOOL *)&propvarIn);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFE,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v15,
          pullRet);
      v12 = a6;
      LOBYTE(v20) = (_DWORD)propvarIn != 0;
      BYTE4(v20) = 1;
      v22.m128i_i64[0] = a4;
      v13 = -1LL;
      v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      do
        ++v13;
      while ( *(_WORD *)(a4 + 2 * v13) );
      break;
    case 0x15:
      pullRet = 0LL;
      v11 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xFA,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v11,
          pullRet);
      v12 = a6;
      v13 = -1LL;
      BYTE4(v20) = 0;
      v22.m128i_i64[0] = a4;
      v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      LODWORD(v20) = pullRet;
      do
        ++v13;
      while ( *(_WORD *)(a4 + 2 * v13) );
      break;
    default:
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL))(a6 + 8, 2147942487LL);
  }
  v22.m128i_i64[1] = v13;
  v18 = (unsigned int)MPCConstantManager::ChangeConstant(a1, a3, &v22, v20);
  return v14(v12 + 8, v18);
}
