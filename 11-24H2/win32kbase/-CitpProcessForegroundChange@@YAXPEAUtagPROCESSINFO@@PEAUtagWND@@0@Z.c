/*
 * XREFs of ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x14012BCCC
 * Callers:
 *     CitProcessForegroundChange @ 0x14012BC80 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x14023CE08 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     IsRemoteConnection @ 0x1400C88B4 (IsRemoteConnection.c)
 */

void __fastcall CitpProcessForegroundChange(struct tagPROCESSINFO *a1, struct tagWND *a2, struct tagPROCESSINFO *a3)
{
  struct tagPROCESSINFO *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx

  v4 = a1;
  if ( a3 )
    PsUpdateComponentPower(*(_QWORD *)a3, 4LL);
  if ( v4 )
  {
    if ( (*((_DWORD *)v4 + 3) & 0x1000) != 0 )
    {
      v4 = 0LL;
      a2 = 0LL;
    }
    else
    {
      PsUpdateComponentPower(*(_QWORD *)v4, 4LL);
    }
  }
  if ( CitIsEnabled((__int64)a1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5) + 18968) + 32LL);
    v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)IsRemoteConnection(0xFFFFF78000000004uLL, v8) && !*(_WORD *)(v6 + 114) )
    {
      if ( (unsigned int)dword_14029B104 < MEMORY[0xFFFFF7800000037C] )
        EtwTelemetryCoverageReport(&off_14029B0F8);
      *(_BYTE *)(v6 + 112) |= 4u;
      ++*(_WORD *)(v6 + 114);
    }
    *(_QWORD *)(v6 + 128) = v4;
    CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v6, v7, v4, a2);
  }
}
