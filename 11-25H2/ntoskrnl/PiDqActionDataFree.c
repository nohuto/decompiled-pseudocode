/*
 * XREFs of PiDqActionDataFree @ 0x140838F48
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140837DE4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqActionDataCreate @ 0x140838C90 (PiDqActionDataCreate.c)
 *     PiDqQueryFreeActiveData @ 0x140839030 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1408392C0 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqActionDataFree(_QWORD *P)
{
  void *v2; // rcx
  __int64 v3; // rdx

  if ( *(_DWORD *)P )
  {
    v2 = (void *)P[2];
    if ( v2 )
      ExFreePoolWithTag(v2, 0x58706E50u);
    v3 = P[4];
    if ( v3 )
      PnpFreeDevPropertyArray(*((unsigned int *)P + 6), v3, 1483763280LL);
  }
  ExFreePoolWithTag(P, 0x58706E50u);
}
