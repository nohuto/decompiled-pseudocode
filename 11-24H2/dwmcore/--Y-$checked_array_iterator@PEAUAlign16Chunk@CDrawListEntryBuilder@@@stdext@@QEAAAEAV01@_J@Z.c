/*
 * XREFs of ??Y?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@QEAAAEAV01@_J@Z @ 0x1801BD060
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180177F20 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>::operator+=(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  if ( !a2 )
    goto LABEL_4;
  if ( !*a1 )
    goto LABEL_6;
  if ( a2 < 0 )
  {
    v2 = a1 + 2;
    if ( a1[2] < (unsigned __int64)-a2 )
      goto LABEL_6;
  }
  else
  {
LABEL_4:
    v2 = a1 + 2;
    if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
LABEL_6:
      _invalid_parameter_noinfo_noreturn();
  }
  *v2 += a2;
  return a1;
}
