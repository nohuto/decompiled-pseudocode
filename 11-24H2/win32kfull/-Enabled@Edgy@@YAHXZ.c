/*
 * XREFs of ?Enabled@Edgy@@YAHXZ @ 0x1401C4818
 * Callers:
 *     EditionEdgyEnabled @ 0x1401C4800 (EditionEdgyEnabled.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Edgy::Enabled(Edgy *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = 0;
  v4 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19200);
  if ( !*(_QWORD *)(v4 + 248) )
    return 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19200);
  v6 = *(_QWORD *)(v5 + 248);
  if ( *(_DWORD *)(v6 + 16) == 1 )
  {
    v7 = *(_QWORD *)(W32GetUserSessionState(v5, v6) + 19200);
    LOBYTE(v2) = *(_QWORD *)(*(_QWORD *)(v7 + 248) + 288LL) == (_QWORD)PtiCurrent(v9, v8);
  }
  else
  {
    LOBYTE(v2) = **(_DWORD **)(*(_QWORD *)(W32GetUserSessionState(v5, v6) + 19200) + 248LL) != 0;
  }
  return v2;
}
