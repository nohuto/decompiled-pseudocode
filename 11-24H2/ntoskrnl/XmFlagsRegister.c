/*
 * XREFs of XmFlagsRegister @ 0x140468420
 * Callers:
 *     <none>
 * Callees:
 *     XmSetDestinationValue @ 0x14046908C (XmSetDestinationValue.c)
 *     XmSetSourceValue @ 0x140469348 (XmSetSourceValue.c)
 */

__int64 __fastcall XmFlagsRegister(__int64 a1)
{
  __int64 v1; // rdx

  *(_DWORD *)(a1 + 120) = *(_BYTE *)(a1 + 138) != 0 ? 3 : 1;
  v1 = a1 + 16;
  if ( *(_DWORD *)(a1 + 124) == 36 )
    XmSetSourceValue(a1, v1);
  else
    XmSetDestinationValue(a1, v1);
  return 1LL;
}
