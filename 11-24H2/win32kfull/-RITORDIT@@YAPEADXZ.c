/*
 * XREFs of ?RITORDIT@@YAPEADXZ @ 0x140279064
 * Callers:
 *     MasterInputThreadPrepareForRitTakeover @ 0x140220B98 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

char *__fastcall RITORDIT(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  char v9; // al
  void *v10; // rcx

  v2 = PtiCurrent(a1, a2);
  if ( v2 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v4, v3) + 18704) )
    return "Rit";
  v9 = IsInputThread(v6, v5, v7);
  v10 = &unk_14034ED21;
  if ( v9 )
    return "Mit";
  return (char *)v10;
}
