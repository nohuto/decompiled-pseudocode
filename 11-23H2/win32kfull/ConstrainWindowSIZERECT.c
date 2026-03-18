/*
 * XREFs of ConstrainWindowSIZERECT @ 0x1C0138A7C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     xxxSBWndProc @ 0x1C022A1A0 (xxxSBWndProc.c)
 * Callees:
 *     ConstrainWindowSize @ 0x1C008E4E8 (ConstrainWindowSize.c)
 *     ConstrainWindowPos @ 0x1C0138A40 (ConstrainWindowPos.c)
 */

__int64 __fastcall ConstrainWindowSIZERECT(int *a1)
{
  __int64 v1; // r10

  ConstrainWindowPos(a1, a1 + 1);
  return ConstrainWindowSize((int *)(v1 + 8), (int *)(v1 + 12));
}
