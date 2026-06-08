/*
 * XREFs of sub_140009190 @ 0x140009190
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008ECC @ 0x140008ECC (sub_140008ECC.c)
 *     sub_140009304 @ 0x140009304 (sub_140009304.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_140009190(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = a1[18];
  if ( *((_BYTE *)a1 + 124) )
    result = sub_140008ECC(*a1, (char *)(v2 + 344), 1LL);
  if ( *(_QWORD *)(v2 + 536) )
    result = sub_140009304(*a1);
  if ( *((_BYTE *)a1 + 136) )
  {
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 80) )
    {
      ((void (*)(void))qword_1400193B0)();
      return ((__int64 (*)(void))qword_1400193C0)();
    }
  }
  return result;
}
