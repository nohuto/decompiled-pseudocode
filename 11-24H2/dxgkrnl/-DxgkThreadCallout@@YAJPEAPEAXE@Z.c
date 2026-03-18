/*
 * XREFs of ?DxgkThreadCallout@@YAJPEAPEAXE@Z @ 0x1402AC070
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402AC210 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
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
      --dword_140160B7C;
      *a1 = 0LL;
    }
    return 0LL;
  }
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v6) >= 0 && (DxgThread = v6) != 0LL
    || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v6 = DxgThread) != 0LL) )
  {
    ++dword_140160B80;
    ++dword_140160B7C;
    _InterlockedIncrement((volatile signed __int32 *)DxgThread + 2);
    *a1 = v6;
    return 0LL;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 456;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Failed to create DXGTHREAD for current thread.",
    456LL,
    0LL,
    0LL,
    0LL,
    0LL);
  *a1 = 0LL;
  return 3221225495LL;
}
