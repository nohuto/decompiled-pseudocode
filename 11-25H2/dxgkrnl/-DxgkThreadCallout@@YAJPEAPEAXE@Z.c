/*
 * XREFs of ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x1402A5C20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402A5DC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DxgkThreadCallout(ReferenceCounted **a1, char a2)
{
  struct DXGTHREAD *DxgThread; // rax
  ReferenceCounted *v5; // rcx
  ReferenceCounted *v6; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( a2 != 1 )
  {
    v5 = *a1;
    if ( v5 )
    {
      ReferenceCounted::Release(v5);
      --dword_14015DB8C;
      *a1 = 0LL;
    }
    return 0LL;
  }
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v6) >= 0 && (DxgThread = v6) != 0LL
    || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v6 = DxgThread) != 0LL) )
  {
    ++dword_14015DB94;
    ++dword_14015DB8C;
    _InterlockedIncrement((volatile signed __int32 *)DxgThread + 2);
    *a1 = v6;
    return 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 455;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to create DXGTHREAD for current thread.",
    455LL,
    0LL,
    0LL,
    0LL,
    0LL);
  *a1 = 0LL;
  return 3221225495LL;
}
