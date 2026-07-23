/*
 * XREFs of MiApplyRetpolineToBootDriver @ 0x140C5779C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C5DBC4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeaderEx @ 0x140414520 (RtlImageNtHeaderEx.c)
 *     RtlIsImageFullyRetpolined @ 0x1404BD5B4 (RtlIsImageFullyRetpolined.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1406A3DB0 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140A7D73C (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiApplyRetpolineToBootDriver(ULONG_PTR BugCheckParameter2)
{
  PVOID v1; // rdi
  int v3; // eax
  unsigned int v5; // [rsp+28h] [rbp-C0h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v7[8]; // [rsp+60h] [rbp-88h] BYREF
  PVOID v8; // [rsp+68h] [rbp-80h]
  char v9; // [rsp+70h] [rbp-78h]

  v1 = *(PVOID *)(BugCheckParameter2 + 48);
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, v1, 0LL, &OutHeaders);
  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
    MiLogRetpolineImageLoadEvents(BugCheckParameter2);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
    && v1 != PsNtosImageBase
    && v1 != PsHalImageBase
    && (OutHeaders->FileHeader.Characteristics & 1) == 0
    && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 5
    && !_bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
  {
    if ( (MiFlags & 0x8000) != 0 )
    {
      memset_0(v7, 0, 0x68uLL);
      v8 = v1;
      v9 = 1;
      v3 = VslpEnterIumSecureMode(2u, 0xE0u, 0, (__int64)v7);
    }
    else
    {
      v3 = RtlPerformRetpolineRelocationsOnImageEx(
             (char *)v1,
             (__int64)v1,
             *(_DWORD *)(BugCheckParameter2 + 64),
             *(_QWORD *)(BugCheckParameter2 + 48)
           + *(unsigned int *)(BugCheckParameter2 + 64)
           + (unsigned __int64)(unsigned int)(dword_140E375F0 + dword_140E375EC),
             (__int64)Base + 4,
             v5,
             0LL,
             0LL,
             0);
    }
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -1073741637 )
      KeBugCheckEx(0x1Au, 0x1080uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48), v3);
    if ( (unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiMarkRetpolineBits(*(_QWORD *)(BugCheckParameter2 + 48), *(unsigned int *)(BugCheckParameter2 + 64), 1);
  }
  return 1LL;
}
