/*
 * XREFs of RtlLookupElementGenericTableFullAvl @ 0x180071F40
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlLookupElementGenericTableFullAvl(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  __int64 i; // rbx
  __int64 (__fastcall *v9)(); // rax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]

  if ( *((_DWORD *)a1 + 11) )
  {
    for ( i = *((_QWORD *)a1 + 2); ; i = *(_QWORD *)(i + 16) )
    {
      while ( 1 )
      {
        v9 = (__int64 (__fastcall *)())*((_QWORD *)a1 + 9);
        if ( v9 == RtlCompareUnicodeString )
        {
          LOBYTE(v12) = i + 32;
          v10 = RtlCompareUnicodeStrings(
                  *((_QWORD *)a1 + 1),
                  (unsigned __int64)*a1 >> 1,
                  *((_QWORD *)a2 + 1),
                  (unsigned __int64)*a2 >> 1,
                  v12);
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(unsigned __int16 *, unsigned __int16 *, __int64))v9)(a1, a2, i + 32);
        }
        if ( v10 )
          break;
        if ( !*(_QWORD *)(i + 8) )
        {
          *a3 = i;
          *a4 = 2;
          return 0LL;
        }
        i = *(_QWORD *)(i + 8);
      }
      if ( v10 != 1 )
      {
        *a3 = i;
        *a4 = 1;
        return *a3 + 32LL;
      }
      if ( !*(_QWORD *)(i + 16) )
        break;
    }
    *a3 = i;
    *a4 = 3;
    return 0LL;
  }
  else
  {
    *a4 = 0;
    return 0LL;
  }
}
