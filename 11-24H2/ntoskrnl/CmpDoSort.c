/*
 * XREFs of CmpDoSort @ 0x140C4D530
 * Callers:
 *     CmpSortDriverList @ 0x140C4EA7C (CmpSortDriverList.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     CmpSortByTag @ 0x140C4E9E0 (CmpSortByTag.c)
 */

char __fastcall CmpDoSort(__int64 **a1, unsigned __int16 *a2)
{
  char result; // al
  __int16 v5; // r15
  wchar_t *v6; // rcx
  __int64 *v7; // rbp
  wchar_t *i; // rbx
  __int64 **v9; // rdi
  __int64 *v10; // r14
  __int64 ***v11; // r12
  __int64 *v12; // rcx
  __int64 **v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF

  String1 = 0LL;
  result = CmpSortByTag(a1, a2);
  if ( result )
  {
    v5 = 0;
    v6 = (wchar_t *)*((_QWORD *)a2 + 1);
    v7 = (__int64 *)a1;
    for ( i = &v6[((unsigned __int64)*a2 >> 1) - 1]; i > v6; --i )
    {
      do
      {
        if ( !*i )
          v5 = (__int16)i;
        --i;
      }
      while ( i != v6 && *(i - 1) );
      v9 = (__int64 **)a1[1];
      String1.Buffer = i;
      String1.Length = v5 - (_WORD)i;
      String1.MaximumLength = v5 - (_WORD)i;
      while ( v9 != (__int64 **)v7 && v9 != a1 )
      {
        v10 = (__int64 *)v9;
        v11 = (__int64 ***)(v9 + 1);
        v9 = (__int64 **)v9[1];
        if ( v10[14] && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v10 + 13), 1u) )
        {
          v12 = (__int64 *)*v10;
          if ( *(__int64 **)(*v10 + 8) != v10
            || (v13 = *v11, **v11 != v10)
            || (*v13 = v12, v12[1] = (__int64)v13, v14 = *a1, (__int64 **)(*a1)[1] != a1) )
          {
            __fastfail(3u);
          }
          *v10 = (__int64)v14;
          *v11 = a1;
          v14[1] = (__int64)v10;
          v15 = v10;
          if ( v7 != (__int64 *)a1 )
            v15 = v7;
          *a1 = v10;
          v7 = v15;
        }
      }
      v6 = (wchar_t *)*((_QWORD *)a2 + 1);
    }
    return 1;
  }
  return result;
}
