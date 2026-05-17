/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x180072040
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupElementGenericTableAvl(unsigned __int16 *a1, unsigned __int16 *a2)
{
  __int64 v2; // rbp
  __int64 i; // rbx
  __int64 (__fastcall *v6)(); // rax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rbx
  int v11; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  i = 0LL;
  if ( *((_DWORD *)a1 + 11) )
  {
    for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v6 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 9);
        if ( v6 == RtlCompareUnicodeString )
        {
          LOBYTE(v11) = i + 32;
          v7 = RtlCompareUnicodeStrings(
                 *((_QWORD *)a1 + 1),
                 (unsigned __int64)*a1 >> 1,
                 *((_QWORD *)a2 + 1),
                 (unsigned __int64)*a2 >> 1,
                 v11);
        }
        else
        {
          v7 = ((__int64 (__fastcall *)(unsigned __int16 *, unsigned __int16 *, __int64))v6)(a1, a2, i + 32);
        }
        if ( v7 )
          break;
        if ( !*(_QWORD *)(i + 8) )
        {
          v8 = 2;
          goto LABEL_12;
        }
        i = *(_QWORD *)(i + 8);
      }
      if ( v7 != 1 )
      {
        v8 = 1;
        goto LABEL_12;
      }
      if ( !*(_QWORD *)(i + 16) )
        break;
    }
    v8 = 3;
  }
  else
  {
    v8 = 0;
  }
LABEL_12:
  v9 = i + 32;
  if ( v8 == 1 )
    return v9;
  return v2;
}
