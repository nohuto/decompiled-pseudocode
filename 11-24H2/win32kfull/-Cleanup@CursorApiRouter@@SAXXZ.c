/*
 * XREFs of ?Cleanup@CursorApiRouter@@SAXXZ @ 0x14026C9C4
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F2C60 (EditionDriverUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall CursorApiRouter::Cleanup(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36360) )
  {
    v6 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 36360);
    if ( v6 )
    {
      Win32FreePool(*(void **)(v6 + 56));
      *(_QWORD *)(v6 + 56) = 0LL;
      *(_DWORD *)(v6 + 64) = 0;
      Win32FreePool((void *)v6);
    }
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 36360) = 0LL;
  }
}
