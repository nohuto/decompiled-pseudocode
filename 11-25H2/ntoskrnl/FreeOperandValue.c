/*
 * XREFs of FreeOperandValue @ 0x1409E97C0
 * Callers:
 *     LocalGetConditionForString @ 0x1409E97F8 (LocalGetConditionForString.c)
 *     GetOperandValue @ 0x1409EA0A4 (GetOperandValue.c)
 * Callees:
 *     SddlpFree @ 0x140907834 (SddlpFree.c)
 */

void __fastcall FreeOperandValue(_QWORD *a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = (void *)a1[1];
    if ( v2 )
    {
      if ( !*(_BYTE *)a1 )
        SddlpFree(v2);
    }
    SddlpFree(a1);
  }
}
