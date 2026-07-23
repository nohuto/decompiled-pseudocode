/*
 * XREFs of XmAccumRegister @ 0x140572240
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDestinationValue @ 0x140461A3C (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x140461CF8 (XmSetSourceValue.c)
 */

__int64 __fastcall XmAccumRegister(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rcx

  v1 = *(_DWORD *)(a1 + 112) & 7;
  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  XmSetSourceValue(a1, (unsigned __int16 *)(a1 + 4 * (v1 + 6LL)));
  XmSetDestinationValue(v2, (unsigned __int16 *)(v2 + 24));
  return 1LL;
}
