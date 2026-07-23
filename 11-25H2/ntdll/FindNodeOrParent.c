/*
 * XREFs of FindNodeOrParent @ 0x180072A50
 * Callers:
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800F7760 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x180145BE0 (RtlEnumerateGenericTableLikeADirectory.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall FindNodeOrParent(unsigned __int16 *a1, PCWCH *a2, _QWORD *a3)
{
  __int64 i; // rbx
  LONG (__cdecl *v7)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN); // rax
  __int64 CaseInSensitive; // r8
  int v9; // eax
  __int64 result; // rax

  if ( !*((_DWORD *)a1 + 11) )
    return 0LL;
  for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v7 = (LONG (__cdecl *)(PUNICODE_STRING, PUNICODE_STRING, BOOLEAN))*((_QWORD *)a1 + 9);
      CaseInSensitive = i + 32;
      v9 = v7 == RtlCompareUnicodeString
         ? RtlCompareUnicodeStrings(
             *((PCWCH *)a1 + 1),
             (unsigned __int64)*a1 >> 1,
             a2[1],
             (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
             CaseInSensitive)
         : ((__int64 (__fastcall *)(unsigned __int16 *, PCWCH *, __int64))v7)(a1, a2, CaseInSensitive);
      if ( v9 )
        break;
      if ( !*(_QWORD *)(i + 8) )
      {
        result = 2LL;
        goto LABEL_12;
      }
      i = *(_QWORD *)(i + 8);
    }
    if ( v9 != 1 )
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
