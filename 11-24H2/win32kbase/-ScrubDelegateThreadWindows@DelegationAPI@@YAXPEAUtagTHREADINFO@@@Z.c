/*
 * XREFs of ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400EF0B8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401B3064 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B3104 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 */

void __fastcall DelegationAPI::ScrubDelegateThreadWindows(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 *v6; // rdi
  __int64 v7; // rcx
  _BYTE *v8; // rbx
  __int64 v9; // rcx
  char v10; // al

  v3 = *(_QWORD *)(W32GetUserSessionState(this) + 19944);
  v5 = 0;
  v6 = *(__int64 **)(W32GetUserSessionState(v4) + 19888);
  W32GetUserSessionState(v7);
  v8 = (_BYTE *)(v3 + 24);
  do
  {
    v9 = *v6;
    if ( *v8 == 1 )
    {
      if ( !*(_DWORD *)(v9 + 260) || *(DelegationAPI **)(v9 + 264) != this )
        goto LABEL_4;
      v10 = anonymous_namespace_::ScrubDelegatedWindow_tagWND___();
    }
    else
    {
      if ( *v8 != 23 || !*(_DWORD *)(v9 + 72) || *(DelegationAPI **)(v9 + 64) != this )
        goto LABEL_4;
      v10 = anonymous_namespace_::ScrubDelegatedWindow_tagBWND___();
    }
    if ( v10 )
      break;
LABEL_4:
    ++v5;
    v8 += 32;
    v6 += 5;
  }
  while ( v5 <= *(_DWORD *)(W32GetUserSessionState(v9) + 19872) );
}
