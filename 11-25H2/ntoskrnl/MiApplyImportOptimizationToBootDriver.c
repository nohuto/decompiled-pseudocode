/*
 * XREFs of MiApplyImportOptimizationToBootDriver @ 0x140C441C8
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlUpdateImportRelocationsInImage @ 0x140697EC8 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiApplyImportOptimizationToBootDriver(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  char *v4; // rt1
  __int64 v6; // rcx
  int updated; // eax
  _BYTE v9[8]; // [rsp+40h] [rbp-88h] BYREF
  char *v10; // [rsp+48h] [rbp-80h]

  v2 = *(char **)(a1 + 48);
  v4 = *(char **)&KeNumberProcessorsGroup0[9];
  if ( v2 != v4
    && v2 != PsHalImageBase
    && !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v2)
    && !_bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    v6 = 0LL;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v6 = *(_QWORD *)(a1 + 48)
         + *(_DWORD *)(a1 + 64)
         + ((dword_140E3726C + dword_140E37270) & 0xFFFFF000)
         + ((((_WORD)dword_140E3726C + (_WORD)dword_140E37270) & 0xFFF) != 0 ? 0x1000 : 0);
    if ( (MiFlags & 0x8000) != 0 )
    {
      memset_0(v9, 0, 0x68uLL);
      v10 = v2;
      updated = VslpEnterIumSecureMode(2u, 0xE1u, 0, (__int64)v9);
    }
    else
    {
      updated = RtlUpdateImportRelocationsInImage(
                  v2,
                  (__int64)v2,
                  *(_DWORD *)(a1 + 64),
                  a2,
                  v6,
                  (__int64)Base + 4,
                  0,
                  (KiSpeculationFeatures & 0x20000000000LL) == 0);
    }
    if ( updated >= 0 )
      *(_DWORD *)(a1 + 104) |= 0x80u;
  }
  return 1LL;
}
