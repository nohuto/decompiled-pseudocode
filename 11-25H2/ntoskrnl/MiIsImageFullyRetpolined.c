/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140A942C4
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140A839D8 (MiMarkKernelImageRetpolineBits.c)
 *     MiUnloadSystemImage @ 0x140A862D4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C35C4 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(_DWORD *)(*(_QWORD *)((*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) & 0xFFFFFFFFFFFFFFF8uLL)
                                  + 32)
                      + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
}
