/*
 * XREFs of ??$unique@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@std@@U?$equal_to@X@2@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VString@Internal@Windows@@@std@@@std@@@0@V10@0U?$equal_to@X@0@@Z @ 0x1800A74F8
 * Callers:
 *     ?GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@AEAV?$vector@VString@Internal@Windows@@V?$allocator@VString@Internal@Windows@@@std@@@3@@Z @ 0x1800A75D8 (-GetSortedUniqueProcessList@BroadcastDVRComponent@@AEAAXAEBV-$vector@U-$pair@KVString@Internal@W.c)
 * Callees:
 *     <none>
 */

HSTRING **__fastcall std::unique<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Windows::Internal::String>>>,std::equal_to<void>>(
        HSTRING **a1,
        HSTRING *a2,
        HSTRING *a3,
        char a4)
{
  HSTRING *v5; // rdi
  HSTRING *v7; // rsi
  HSTRING v8; // rdx
  HSTRING v9; // rcx
  HSTRING v10; // rdx
  HSTRING v11; // rcx
  INT32 result; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(result) = a4;
  v5 = a2;
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      v7 = v5++;
      if ( v5 == a3 )
        break;
      v8 = *v5;
      v9 = *v7;
      result = 0;
      WindowsCompareStringOrdinal(v9, v8, &result);
      if ( !result )
      {
        while ( ++v5 != a3 )
        {
          v10 = *v5;
          v11 = *v7;
          result = 0;
          WindowsCompareStringOrdinal(v11, v10, &result);
          if ( result )
          {
            if ( *++v7 )
            {
              WindowsDeleteString(*v7);
              *v7 = 0LL;
            }
            *v7 = *v5;
            *v5 = 0LL;
          }
        }
        *a1 = v7 + 1;
        return a1;
      }
    }
  }
  *a1 = a3;
  return a1;
}
