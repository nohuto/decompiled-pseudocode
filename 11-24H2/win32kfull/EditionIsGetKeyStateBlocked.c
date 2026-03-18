/*
 * XREFs of EditionIsGetKeyStateBlocked @ 0x140195D50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall EditionIsGetKeyStateBlocked(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v5 = 0;
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  LOBYTE(v5) = *(_QWORD *)(v6 + 496) != *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19200);
  return v5;
}
