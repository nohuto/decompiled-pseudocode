/*
 * XREFs of ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x14003EF8C
 * Callers:
 *     ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x14003EF00 (-_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1402CE380 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1402CE928 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1402D1ADC (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

void __fastcall ProtectableFromChange::OnModifyingActionCompletion(ProtectableFromChange *this, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi

  v2 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 82;
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) != 255LL )
  {
    if ( v2 >= *((_QWORD *)this + 10) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 82;
    }
    --*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2);
  }
  if ( v2 >= *((_QWORD *)this + 10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 82;
  }
  if ( !*(_QWORD *)(*((_QWORD *)this + 11) + 8 * v2) )
    ProtectableFromChange::DisallowModifyingAction(this, v2);
}
