/*
 * XREFs of MiApplyRetpolineToBootDriver @ 0x140C44324
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140C4A6A8 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C35C4 (RtlIsImageFullyRetpolined.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140697B80 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140A7F04C (MiLogRetpolineImageLoadEvents.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 */

__int64 __fastcall MiApplyRetpolineToBootDriver(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rt1
  int v4; // eax
  unsigned int v6; // [rsp+28h] [rbp-C0h]
  __int64 v7; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v8[8]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-80h]
  char v10; // [rsp+70h] [rbp-78h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  v7 = 0LL;
  RtlImageNtHeaderEx(1, v1, 0LL, &v7);
  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
    MiLogRetpolineImageLoadEvents(BugCheckParameter2);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    v3 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    if ( v1 != v3
      && v1 != PsHalImageBase
      && (*(_BYTE *)(v7 + 22) & 1) == 0
      && *(_DWORD *)(v7 + 132) > 5u
      && !_bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
    {
      if ( (MiFlags & 0x8000) != 0 )
      {
        memset_0(v8, 0, 0x68uLL);
        v9 = v1;
        v10 = 1;
        v4 = VslpEnterIumSecureMode(2u, 0xE0u, 0, (__int64)v8);
      }
      else
      {
        v4 = RtlPerformRetpolineRelocationsOnImageEx(
               v1,
               v1,
               *(_DWORD *)(BugCheckParameter2 + 64),
               *(_DWORD *)(BugCheckParameter2 + 48)
             + *(_DWORD *)(BugCheckParameter2 + 64)
             + dword_140E37270
             + dword_140E3726C,
               (__int64)Base + 4,
               v6,
               0LL,
               0LL,
               0);
      }
      if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073741637 )
        KeBugCheckEx(0x1Au, 0x1080uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48), v4);
      if ( (unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(BugCheckParameter2 + 48)) )
        MiMarkRetpolineBits(*(_QWORD *)(BugCheckParameter2 + 48), *(unsigned int *)(BugCheckParameter2 + 64), 1);
    }
  }
  return 1LL;
}
