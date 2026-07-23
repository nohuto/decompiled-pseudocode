/*
 * XREFs of MiInitializeRetpoline @ 0x140C57A7C
 * Callers:
 *     MiInitializeKernelScp @ 0x140C579F0 (MiInitializeKernelScp.c)
 * Callees:
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x1404BD5B4 (RtlIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140A84A10 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140C57950 (MiCreateRetpolineBitmap.c)
 */

__int64 __fastcall MiInitializeRetpoline(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  qword_140E2D8B0 = (__int64)&qword_140E2D8A8;
  qword_140E2D8A8 = &qword_140E2D8A8;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    qword_140E2D890 = MiReservePtes((__int64)&qword_140E376A8, 1u);
    if ( !qword_140E2D890 )
    {
      *a1 = 163;
      return 3221225626LL;
    }
    result = MiCreateRetpolineBitmap(&v3);
    if ( (int)result < 0 )
    {
      *a1 = 164;
      return result;
    }
    result = MiMarkRetpolineBits((__int64)PsNtosImageBase, PsNtosImageEnd - (_QWORD)PsNtosImageBase, 1);
    if ( (int)result < 0 )
    {
      *a1 = 165;
      return result;
    }
    if ( (unsigned int)RtlIsImageFullyRetpolined((__int64)PsHalImageBase) )
    {
      result = MiMarkRetpolineBits((__int64)PsHalImageBase, PsHalImageEnd - (_QWORD)PsHalImageBase, 1);
      if ( (int)result < 0 )
      {
        *a1 = 166;
        return result;
      }
    }
    retpoline_image_bitmap = v3 - 0x1FFFF0000000LL;
    dword_140E013B8 = dword_140E2D87C << 12;
    dword_140E013B4 = dword_140E375F0 + dword_140E375EC;
  }
  return 0LL;
}
