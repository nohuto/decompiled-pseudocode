/*
 * XREFs of sub_140001B60 @ 0x140001B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140001B60(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  unsigned int v5; // edi

  for ( i = qword_140019A98; (__int64 *)i != &qword_140019A98; i = *(_QWORD *)i )
  {
    if ( (*(_DWORD *)(i + 24) & 2) != 0 )
    {
      if ( *(_QWORD *)(i + 32) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2528))(qword_140019128, *(_QWORD *)(i + 16));
        v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(i + 32))(a1, a2, i);
        (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2536))(qword_140019128, *(_QWORD *)(i + 16));
        return v5;
      }
      return 0LL;
    }
  }
  return 0LL;
}
