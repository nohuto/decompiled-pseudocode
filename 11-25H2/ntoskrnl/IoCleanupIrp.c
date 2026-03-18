/*
 * XREFs of IoCleanupIrp @ 0x140252A50
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x140252920 (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 (__fastcall *__fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  bool v2; // zf

  result = 0LL;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x27A2uLL, 0LL, 0LL);
  v2 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v2 )
    return IopFreeIrpExtension(BugCheckParameter1, -1, 1);
  return result;
}
