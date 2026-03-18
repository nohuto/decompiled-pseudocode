/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140A984B4
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140A884D4 (MiMarkKernelImageRetpolineBits.c)
 *     MiUnloadSystemImage @ 0x140A8AD84 (MiUnloadSystemImage.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C1FC4 (RtlIsImageFullyRetpolined.c)
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
