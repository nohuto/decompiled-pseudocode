/*
 * XREFs of SkipWindowOnMonitor @ 0x1400F6EBC
 * Callers:
 *     _lambda_8e519a2256dcdf5e4b624ad02749eac7_::operator() @ 0x1400F6718 (_lambda_8e519a2256dcdf5e4b624ad02749eac7_--operator().c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400F697C (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1400F7A10 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SkipWindowOnMonitor(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v4; // rsi
  struct tagMONITOR *v5; // rbp
  __int64 *i; // rdi

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  if ( v1 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) == 1 && *(_QWORD *)(v1 + 288) )
  {
    v4 = (__int64 *)(v1 + 312);
    v5 = _MonitorFromWindowInternal(a1, 0, 0);
    for ( i = *(__int64 **)(v1 + 312); i != v4; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && _MonitorFromWindowInternal((struct tagWND *)i[2], 0, 0) == v5 )
        return 1;
    }
  }
  return v2;
}
