/*
 * XREFs of _o_wmemcpy_s_0 @ 0x1800211BC
 * Callers:
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x18004576C (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl o_wmemcpy_s_0(wchar_t *S1, rsize_t N1, const wchar_t *S2, rsize_t N)
{
  return wmemcpy_s(S1, N1, S2, N);
}
