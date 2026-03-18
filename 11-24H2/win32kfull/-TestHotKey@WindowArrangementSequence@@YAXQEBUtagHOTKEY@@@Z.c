/*
 * XREFs of ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1401BBE58
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401BBD94 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 * Callees:
 *     ?WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x140288B64 (-WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUA.c)
 */

void __fastcall WindowArrangementSequence::TestHotKey(WindowArrangementSequence *this, const struct tagHOTKEY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 18704);
  v5 = *(_QWORD *)this == v3 && (unsigned int)(*((_DWORD *)this + 10) - 16) <= 8;
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 63472) != v5 )
  {
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 63472) = v5;
    if ( !*(_DWORD *)(W32GetUserSessionState(v9, v8) + 63472) )
      WindowArrangementSequence::WindowArrangementSequenceFinished(1LL);
  }
}
