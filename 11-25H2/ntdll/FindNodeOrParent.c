/*
 * XREFs of FindNodeOrParent @ 0x180072A50
 * Callers:
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800F7760 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x180145BE0 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FindNodeOrParent(unsigned __int16 *a1, unsigned __int16 *a2, _QWORD *a3)
{
  __int64 i; // rbx
  __int64 (__fastcall *v7)(); // rax
  int v8; // eax
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-18h]

  if ( !*((_DWORD *)a1 + 11) )
    return 0LL;
  for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v7 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 9);
      if ( v7 == RtlCompareUnicodeString )
      {
        LOBYTE(v10) = i + 32;
        v8 = RtlCompareUnicodeStrings(
               *((_QWORD *)a1 + 1),
               (unsigned __int64)*a1 >> 1,
               *((_QWORD *)a2 + 1),
               (unsigned __int64)*a2 >> 1,
               v10);
      }
      else
      {
        v8 = ((__int64 (__fastcall *)(unsigned __int16 *, unsigned __int16 *, __int64))v7)(a1, a2, i + 32);
      }
      if ( v8 )
        break;
      if ( !*(_QWORD *)(i + 8) )
      {
        result = 2LL;
        goto LABEL_12;
      }
      i = *(_QWORD *)(i + 8);
    }
    if ( v8 != 1 )
    {
      result = 1LL;
      goto LABEL_12;
    }
    if ( !*(_QWORD *)(i + 16) )
      break;
  }
  result = 3LL;
LABEL_12:
  *a3 = i;
  return result;
}
