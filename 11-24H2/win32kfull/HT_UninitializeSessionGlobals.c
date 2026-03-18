/*
 * XREFs of HT_UninitializeSessionGlobals @ 0x14026C388
 * Callers:
 *     EnableHalftone @ 0x140203A70 (EnableHalftone.c)
 * Callees:
 *     <none>
 */

void __fastcall HT_UninitializeSessionGlobals(int a1, __int64 a2)
{
  __int64 SessionState; // rbx
  void *v3; // rcx

  SessionState = W32GetSessionState(a1, a2);
  v3 = *(void **)(SessionState + 112);
  if ( v3 )
  {
    EngFreeMem(v3);
    *(_QWORD *)(SessionState + 112) = 0LL;
  }
}
