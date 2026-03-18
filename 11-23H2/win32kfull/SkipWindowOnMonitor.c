/*
 * XREFs of SkipWindowOnMonitor @ 0x1C00A3E08
 * Callers:
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C0008AF0 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     _lambda_dc07bf9eeab06415d9a9c521953e95b1_::_lambda_invoker_cdecl_ @ 0x1C00A4050 (_lambda_dc07bf9eeab06415d9a9c521953e95b1_--_lambda_invoker_cdecl_.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C00E849C (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00AE83C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall SkipWindowOnMonitor(struct tagWND *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 *v3; // rsi
  struct tagMONITOR *v4; // rbp
  __int64 *i; // rdi

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  if ( v1 && *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) == 1 && *(_QWORD *)(v1 + 288) )
  {
    v3 = (__int64 *)(v1 + 312);
    v4 = _MonitorFromWindowInternal(a1, 0, 0);
    for ( i = *(__int64 **)(v1 + 312); i != v3; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) && _MonitorFromWindowInternal((struct tagWND *)i[2], 0, 0) == v4 )
        return 1;
    }
  }
  return v2;
}
