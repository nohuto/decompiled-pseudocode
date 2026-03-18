/*
 * XREFs of SetGlobalKeyboardTableInfo @ 0x1400F43C4
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1400F3F20 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x14011AEC8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x14020F7D8 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGlobalKeyboardTableInfo(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  *(_QWORD *)(W32GetUserSessionState(a1) + 14064) = v2;
  if ( *(_QWORD *)(W32GetUserSessionState(v3) + 14224) != a1 )
    *(_QWORD *)(W32GetUserSessionState(v4) + 14224) = a1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  *(_QWORD *)(W32GetUserSessionState(v4) + 14208) = v5;
  LODWORD(v5) = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  *(_DWORD *)(W32GetUserSessionState(v6) + 14216) = v5;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 48LL);
  result = W32GetUserSessionState(v8);
  *(_QWORD *)(result + 14072) = v7;
  return result;
}
