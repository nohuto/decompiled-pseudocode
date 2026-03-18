/*
 * XREFs of CitSessionConnectChange @ 0x140150F90
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400B5EF4 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitSessionConnectChange(__int64 a1, char a2)
{
  char v3; // si
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  char **v7; // rcx
  char v8; // cl
  int v9; // eax
  struct _CIT_IMPACT_CONTEXT *v10; // rcx
  struct tagPROCESSINFO *v11; // r8

  v3 = a1;
  if ( !CitIsEnabled(a1) )
    return;
  v5 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v4) + 18968) + 32LL);
  if ( ((*(_BYTE *)(v5 + 112) & 2) != 0) == v3 )
    return;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( v3 )
    ++*(_WORD *)(v5 + 114);
  else
    CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v5, v6, 0LL, 0LL);
  if ( !a2 )
  {
    if ( v3 )
    {
      if ( (unsigned int)dword_14029B134 < MEMORY[0xFFFFF7800000037C] )
      {
        v7 = &off_14029B128;
LABEL_12:
        EtwTelemetryCoverageReport(v7);
      }
    }
    else if ( (unsigned int)dword_14029B0EC < MEMORY[0xFFFFF7800000037C] )
    {
      v7 = &off_14029B0E0;
      goto LABEL_12;
    }
  }
  v8 = *(_BYTE *)(v5 + 112) & 0xFB | (a2 == 0 ? 4 : 0);
  *(_BYTE *)(v5 + 112) = v8 ^ (v8 ^ (2 * v3)) & 2;
  if ( v3 )
  {
    LOBYTE(v9) = CitpAllowForegroundProcess((const struct _CIT_IMPACT_CONTEXT *)v5);
    if ( v9 )
    {
      v11 = *(struct tagPROCESSINFO **)(v5 + 128);
      if ( v11 )
        CitpSetForegroundProcess(v10, v6, v11, 0LL);
    }
  }
}
