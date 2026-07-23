/*
 * XREFs of XmPushImmediate @ 0x140572B80
 * Callers:
 *     <none>
 * Callees:
 *     XmGetImmediateSourceValue @ 0x14046195C (XmGetImmediateSourceValue.c)
 */

__int64 __fastcall XmPushImmediate(__int64 a1)
{
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  *(_DWORD *)(a1 + 108) = XmGetImmediateSourceValue(a1, *(_DWORD *)(a1 + 112) & 2);
  return 1LL;
}
