/*
 * XREFs of InitOnceGetStringTableOffset @ 0x140A80F70
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall InitOnceGetStringTableOffset(PRTL_RUN_ONCE RunOnce, char *Parameter, PVOID *Context)
{
  unsigned int v3; // ebx
  int FirstTag; // eax
  _DWORD *v7; // rsi
  const char *v9; // r9
  __int64 v10; // r8

  v3 = 0;
  if ( !Parameter )
  {
    v9 = "PDB was not supplied for InitOnceGetStringTableOffset";
    v10 = 777LL;
LABEL_7:
    AslLogCallPrintf(1LL, (__int64)"InitOnceGetStringTableOffset", v10, (__int64)v9);
    return 0LL;
  }
  if ( !Context )
  {
    v9 = "No return context was supplied for InitOnceGetStringTableOffset";
    v10 = 783LL;
    goto LABEL_7;
  }
  FirstTag = SdbFindFirstTag((__int64)Parameter, 0, 30721);
  v7 = Parameter + 2632;
  *v7 = FirstTag;
  if ( FirstTag )
  {
    *Context = v7;
    return 1;
  }
  else
  {
    AslLogCallPrintf(1LL, (__int64)"InitOnceGetStringTableOffset", 793LL, (__int64)"No stringtable in DB");
  }
  return v3;
}
