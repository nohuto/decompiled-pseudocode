/*
 * XREFs of MiCanStealKernelStack @ 0x140422408
 * Callers:
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 * Callees:
 *     MiGetPfnKernelStack @ 0x14043FBD8 (MiGetPfnKernelStack.c)
 */

_BOOL8 __fastcall MiCanStealKernelStack(__int64 a1, __int16 a2)
{
  __int16 v2; // r10
  __int64 v3; // r9

  v2 = a2;
  v3 = a1;
  return 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4) <= qword_140E2DD20
      && ((*(_QWORD *)(16 * ((a1 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 2
      && ((byte_140E2DC09 & 1) != 0 || ((MiGetPfnKernelStack(a1, 1LL) + 32) & 0xFFFFFFFFFFFFFFDFuLL) != 0)
      && (*(_BYTE *)(v3 + 34) & 7) == 6
      && (unsigned __int16)*(_DWORD *)(v3 + 32) == v2
      && *(_BYTE *)(v3 + 35) >= 0;
}
