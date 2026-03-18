/*
 * XREFs of _lambda_c536c12f7ba0511efb3a861cb960a4e0_::operator() @ 0x140285F64
 * Callers:
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140067F70 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_c536c12f7ba0511efb3a861cb960a4e0_::operator()(__int64 a1, const struct tagWND *a2)
{
  char *v2; // rcx
  bool result; // al

  result = a2
        && (v2 = (char *)*((_QWORD *)a2 + 5), (v2[31] & 0x18) == 0x10)
        && (v2[27] & 8) == 0
        && (v2[24] >= 0 || (v2[26] & 4) != 0)
        && !IsWindowCloaked(a2);
  return result;
}
