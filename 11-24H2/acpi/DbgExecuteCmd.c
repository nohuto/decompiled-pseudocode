/*
 * XREFs of DbgExecuteCmd @ 0x14006E740
 * Callers:
 *     Debugger @ 0x14006E888 (Debugger.c)
 * Callees:
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     DbgParseOneArg @ 0x14006FFCC (DbgParseOneArg.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgExecuteCmd(__int64 a1, const char *a2, char **a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  const char **v6; // r9
  int v7; // esi
  __int64 v10; // rdi
  char *v11; // rbp
  char *v12; // rax
  char *v13; // rax
  unsigned int v15; // [rsp+60h] [rbp+8h] BYREF
  int v16; // [rsp+64h] [rbp+Ch]

  v16 = HIDWORD(a1);
  v3 = 0;
  v4 = 0;
  v15 = 0;
  v5 = 0;
  v6 = (const char **)&DbgCmds;
  v7 = 0;
  while ( *v6 )
  {
    if ( !strcmp(a2, *v6) )
    {
      v10 = 4LL * v7;
      if ( ((__int64)(&DbgCmds)[v10 + 1] & 1) != 0 )
      {
        v4 = -1;
        break;
      }
      v11 = (&DbgCmds)[v10 + 2];
      if ( v11 )
      {
        do
        {
          v12 = strtok_s(0LL, " \t\n", a3);
          if ( !v12 )
            break;
          v4 = DbgParseOneArg(v11, v12, ++v5, &v15);
        }
        while ( !v4 );
        if ( v4 )
        {
          v4 = -3;
          break;
        }
        v3 = v15;
      }
      v13 = (&DbgCmds)[v10 + 3];
      if ( v13 )
        v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v13)(0LL, 0LL, v5, v3);
      break;
    }
    ++v7;
    v6 += 4;
  }
  if ( !(&DbgCmds)[4 * v7] )
  {
    PrintDebugMessage(0xE6u, a2, 0LL, 0LL, 0LL);
    return (unsigned int)-2;
  }
  return v4;
}
