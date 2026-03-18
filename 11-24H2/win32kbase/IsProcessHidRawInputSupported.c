/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1400C9610
 * Callers:
 *     RIMIDECreateHIDDesc @ 0x1400C8E60 (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x14013ACB0 (ApiSetProcessHidRawInput.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsProcessHidRawInputSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 4544LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
