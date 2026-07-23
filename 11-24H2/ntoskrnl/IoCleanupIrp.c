/*
 * XREFs of IoCleanupIrp @ 0x1402C3060
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x1402C3EF0 (IopFreeIrpExtension.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall IoCleanupIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // zf

  result = 0LL;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x27C1uLL, 0LL, 0LL);
  v4 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v4 )
  {
    LOBYTE(a3) = 1;
    return IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, a3);
  }
  return result;
}
