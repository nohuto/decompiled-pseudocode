/*
 * XREFs of IsPointerInputRedirected @ 0x14019FCC4
 * Callers:
 *     IsPointerInputTypeRedirected @ 0x14028C7C0 (IsPointerInputTypeRedirected.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x14019FE7C (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall IsPointerInputRedirected(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v10; // rax

  v5 = 0;
  v6 = 0LL;
  UpdatePointerRedirIsAlive(a2);
  if ( (unsigned int)(a3 - 2) <= 1 )
  {
    v10 = 208LL;
    if ( a3 != 2 )
      v10 = 216LL;
    v6 = *(_QWORD *)(v10 + a2);
    if ( v6 && a1 == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) )
      v6 = 0LL;
  }
  if ( a4 )
    *a4 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
