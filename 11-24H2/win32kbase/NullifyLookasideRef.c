/*
 * XREFs of NullifyLookasideRef @ 0x1401A34E8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z @ 0x1400280F8 (-Win32FreeToPagedLookasideListImpl@@YAXPEAX0@Z.c)
 */

void __fastcall NullifyLookasideRef(_DWORD *a1)
{
  bool v2; // zf
  __int64 UserSessionState; // rax

  *(_QWORD *)a1 = 0LL;
  v2 = a1[2] == 0;
  *((_BYTE *)a1 + 12) = 1;
  if ( v2 )
  {
    UserSessionState = W32GetUserSessionState(a1);
    Win32FreeToPagedLookasideListImpl(*(char **)(UserSessionState + 42624), (char *)a1);
  }
}
