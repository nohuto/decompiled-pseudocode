/*
 * XREFs of CmRmIsKCBVisible @ 0x1409909A0
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x140881510 (CmpFindSubKeyByNumberEx.c)
 * Callees:
 *     CmpTransUowIsEqual @ 0x1406F90AC (CmpTransUowIsEqual.c)
 */

char __fastcall CmRmIsKCBVisible(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool IsEqual; // al
  __int64 v6; // r8

  v3 = *(_QWORD *)(a1 + 240);
  if ( !v3 )
    goto LABEL_2;
  if ( !a2 )
    return a2;
  if ( a2 == v3 )
  {
LABEL_2:
    LOBYTE(a2) = 1;
  }
  else
  {
    v4 = *(_QWORD *)(a2 + 56);
    if ( v4 && (v6 = *(_QWORD *)(v3 + 56)) != 0 )
      IsEqual = v4 == v6;
    else
      IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v3 + 88));
    LOBYTE(a2) = IsEqual;
  }
  return a2;
}
