/*
 * XREFs of MiInitializeRetpoline @ 0x140C44604
 * Callers:
 *     MiInitializeKernelScp @ 0x140C44578 (MiInitializeKernelScp.c)
 * Callees:
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C35C4 (RtlIsImageFullyRetpolined.c)
 *     MiMarkRetpolineBits @ 0x140A83A24 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140C444D8 (MiCreateRetpolineBitmap.c)
 */

__int64 __fastcall MiInitializeRetpoline(_DWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  qword_140E2D530 = (__int64)&qword_140E2D528;
  qword_140E2D528 = &qword_140E2D528;
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
  {
    qword_140E2D510 = MiReservePtes((__int64)&qword_140E37328, 1u);
    if ( !qword_140E2D510 )
    {
      *a1 = 163;
      return 3221225626LL;
    }
    result = MiCreateRetpolineBitmap(&v4);
    if ( (int)result < 0 )
    {
      *a1 = 164;
      return result;
    }
    v3 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
    result = MiMarkRetpolineBits(v3, PsNtosImageEnd - v3, 1);
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
    retpoline_image_bitmap = v4 - 0x1FFFF0000000LL;
    dword_140E013B8 = dword_140E2D4FC << 12;
    dword_140E013B4 = dword_140E37270 + dword_140E3726C;
  }
  return 0LL;
}
