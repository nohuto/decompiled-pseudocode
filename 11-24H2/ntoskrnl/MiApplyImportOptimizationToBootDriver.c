/*
 * XREFs of MiApplyImportOptimizationToBootDriver @ 0x140C554B0
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C5BA34 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1406A30A8 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiApplyImportOptimizationToBootDriver(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rcx
  int updated; // eax
  _BYTE v8[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-80h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 != PsNtosImageBase
    && v2 != PsHalImageBase
    && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v2)
    && !_bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    v5 = 0LL;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v5 = *(_QWORD *)(a1 + 48)
         + *(_DWORD *)(a1 + 64)
         + ((dword_140E374AC + dword_140E374B0) & 0xFFFFF000)
         + ((((_WORD)dword_140E374AC + (_WORD)dword_140E374B0) & 0xFFF) != 0 ? 0x1000 : 0);
    if ( (MiFlags & 0x8000) != 0 )
    {
      memset_0(v8, 0, 0x68uLL);
      v9 = v2;
      updated = VslpEnterIumSecureMode(2u, 225LL, 0, (__int64)v8);
    }
    else
    {
      updated = RtlUpdateImportRelocationsInImage(
                  v2,
                  v2,
                  *(_DWORD *)(a1 + 64),
                  a2,
                  v5,
                  (__int64)qword_140E2D730 + 4,
                  0,
                  (KiSpeculationFeatures & 0x20000000000LL) == 0);
    }
    if ( updated >= 0 )
      *(_DWORD *)(a1 + 104) |= 0x80u;
  }
  return 1LL;
}
