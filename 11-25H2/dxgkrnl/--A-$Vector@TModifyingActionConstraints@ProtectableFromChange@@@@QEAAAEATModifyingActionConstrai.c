/*
 * XREFs of ??A?$Vector@TModifyingActionConstraints@ProtectableFromChange@@@@QEAAAEATModifyingActionConstraints@ProtectableFromChange@@_K@Z @ 0x14004782C
 * Callers:
 *     ?ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@@Z @ 0x14008EE08 (-ImposeModifyingActionConstraints@ProtectableFromChange@@QEAAXEAEBTModifyingActionConstraints@1@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Vector<ProtectableFromChange::ModifyingActionConstraints>::operator[](
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)(a1 + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 82;
  }
  return a2 + *(_QWORD *)(a1 + 24);
}
