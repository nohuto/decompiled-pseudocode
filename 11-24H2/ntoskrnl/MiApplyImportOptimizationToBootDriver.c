/*
 * XREFs of MiApplyImportOptimizationToBootDriver @ 0x140C57640
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1406A40F8 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiApplyImportOptimizationToBootDriver(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v5; // rcx
  int updated; // eax
  _BYTE v8[8]; // [rsp+40h] [rbp-88h] BYREF
  char *v9; // [rsp+48h] [rbp-80h]

  v2 = *(char **)(a1 + 48);
  if ( v2 != PsNtosImageBase
    && v2 != PsHalImageBase
    && !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v2)
    && !_bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    v5 = 0LL;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v5 = *(_QWORD *)(a1 + 48)
         + *(_DWORD *)(a1 + 64)
         + ((dword_140E375EC + dword_140E375F0) & 0xFFFFF000)
         + ((((_WORD)dword_140E375EC + (_WORD)dword_140E375F0) & 0xFFF) != 0 ? 0x1000 : 0);
    if ( (MiFlags & 0x8000) != 0 )
    {
      memset_0(v8, 0, 0x68uLL);
      v9 = v2;
      updated = VslpEnterIumSecureMode(2u, 0xE1u, 0, (__int64)v8);
    }
    else
    {
      updated = RtlUpdateImportRelocationsInImage(
                  v2,
                  (__int64)v2,
                  *(_DWORD *)(a1 + 64),
                  a2,
                  v5,
                  (__int64)Base + 4,
                  0,
                  (KiSpeculationFeatures & 0x20000000000LL) == 0);
    }
    if ( updated >= 0 )
      *(_DWORD *)(a1 + 104) |= 0x80u;
  }
  return 1LL;
}
