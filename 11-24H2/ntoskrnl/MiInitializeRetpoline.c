/*
 * XREFs of MiInitializeRetpoline @ 0x140C558EC
 * Callers:
 *     MiInitializeKernelScp @ 0x140C55860 (MiInitializeKernelScp.c)
 * Callees:
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C1FC4 (RtlIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140A88520 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140C557C0 (MiCreateRetpolineBitmap.c)
 */

__int64 __fastcall MiInitializeRetpoline(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  qword_140E2D770 = (__int64)&qword_140E2D768;
  qword_140E2D768 = &qword_140E2D768;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    qword_140E2D750 = MiReservePtes((__int64)&qword_140E37568, 1u);
    if ( !qword_140E2D750 )
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
    result = MiMarkRetpolineBits(PsNtosImageBase, PsNtosImageEnd - PsNtosImageBase, 1);
    if ( (int)result < 0 )
    {
      *a1 = 165;
      return result;
    }
    if ( (unsigned int)RtlIsImageFullyRetpolined(PsHalImageBase) )
    {
      result = MiMarkRetpolineBits(PsHalImageBase, PsHalImageEnd - PsHalImageBase, 1);
      if ( (int)result < 0 )
      {
        *a1 = 166;
        return result;
      }
    }
    retpoline_image_bitmap = v3 - 0x1FFFF0000000LL;
    dword_140E013B8 = dword_140E2D73C << 12;
    dword_140E013B4 = dword_140E374B0 + dword_140E374AC;
  }
  return 0LL;
}
