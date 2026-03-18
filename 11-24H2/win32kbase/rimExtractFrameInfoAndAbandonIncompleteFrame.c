/*
 * XREFs of rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1400F0548
 * Callers:
 *     rimDoProcessAnyPointerDeviceInput @ 0x1400D6DC8 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1400F0610 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 */

__int64 __fastcall rimExtractFrameInfoAndAbandonIncompleteFrame(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        PULONG a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _WORD *a10)
{
  unsigned int v10; // r11d

  v10 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 456) + 368LL) & 2) != 0 )
  {
    return (unsigned int)rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
                           a1,
                           a2,
                           a3,
                           a4,
                           a5,
                           (__int64)a6,
                           (__int64)a7,
                           (__int64)a8,
                           (__int64)a9,
                           (__int64)a10);
  }
  else
  {
    *a5 = 1;
    *a6 = 1;
    *a7 = 1;
    *a8 = 1;
    *a9 = 0;
    *a10 = 0;
  }
  return v10;
}
