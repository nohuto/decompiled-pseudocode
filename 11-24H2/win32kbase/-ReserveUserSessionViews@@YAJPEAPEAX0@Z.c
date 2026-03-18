/*
 * XREFs of ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1401987B8
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x14019884C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 */

int __fastcall ReserveUserSessionViews(void **a1, void **a2)
{
  int result; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_DWORD *)(W32GetUserSessionState(a1) + 62976) = 0;
  result = ReserveUserSessionViewsWorker(a1, a2);
  if ( result < 0 )
  {
    *(_DWORD *)(W32GetUserSessionState(v5) + 62972) = 128;
    *(_DWORD *)(W32GetUserSessionState(v6) + 62968) = 512;
    *(_DWORD *)(W32GetUserSessionState(v7) + 62976) = 1;
    return ReserveUserSessionViewsWorker(a1, a2);
  }
  return result;
}
