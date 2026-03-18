/*
 * XREFs of DxgkEngBltViaGDI @ 0x14011C300
 * Callers:
 *     ?DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@2II@ZP6AH4422@Z@Z @ 0x14011C210 (-DxgkEngBltViaGDIApiExt@@YAHPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEBUtagRECT@@2QEAXIIIEEIP6AX22PEAU3@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgkEngBltViaGDI(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        int a11,
        __int64 a12,
        __int64 a13)
{
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64, __int64, int, int, int, char, char, int, __int64, __int64); // r11

  v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, int, int, int, char, char, int, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 24) + 248LL);
  if ( v17 )
    return v17(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  else
    return 0LL;
}
