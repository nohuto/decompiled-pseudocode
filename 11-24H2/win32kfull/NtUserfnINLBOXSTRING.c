/*
 * XREFs of NtUserfnINLBOXSTRING @ 0x1400F4670
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1400F56B4 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 */

__int64 __fastcall NtUserfnINLBOXSTRING(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7)
{
  unsigned int v9; // esi

  v9 = a2;
  PtiCurrent((__int64)a1, a2);
  return _InBoxString(678, a1, v9, a3, a4, a5, a6, a7);
}
