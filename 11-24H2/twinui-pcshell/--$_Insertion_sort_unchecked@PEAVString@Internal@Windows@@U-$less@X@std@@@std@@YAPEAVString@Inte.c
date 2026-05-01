/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAPEAVString@Internal@Windows@@QEAV123@0U?$less@X@0@@Z @ 0x1800AA91C
 * Callers:
 *     ??$_Sort_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@0_JU?$less@X@0@@Z @ 0x1800A7C34 (--$_Sort_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x1800A95C0 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 */

Windows::Internal::String *__fastcall std::_Insertion_sort_unchecked<Windows::Internal::String *,std::less<void>>(
        Windows::Internal::String *this,
        Windows::Internal::String *a2,
        char a3)
{
  Windows::Internal::String *i; // rsi
  HSTRING v7; // rbx
  HSTRING v8; // rdx
  Windows::Internal::String *v9; // r15
  HSTRING *j; // rdi
  HSTRING v11; // rcx
  HSTRING *v12; // rdi
  INT32 result; // [rsp+50h] [rbp+18h] BYREF

  LOBYTE(result) = a3;
  if ( this != a2 )
  {
    for ( i = (Windows::Internal::String *)((char *)this + 8); i != a2; i = (Windows::Internal::String *)((char *)i + 8) )
    {
      v7 = *(HSTRING *)i;
      *(_QWORD *)i = 0LL;
      v8 = *(HSTRING *)this;
      v9 = i;
      result = 0;
      WindowsCompareStringOrdinal(v7, v8, &result);
      if ( result == -1 )
      {
        if ( i != this )
        {
          do
          {
            v12 = (HSTRING *)v9;
            v9 = (Windows::Internal::String *)((char *)v9 - 8);
            Windows::Internal::String::Release(v12);
            *v12 = *(HSTRING *)v9;
            *(_QWORD *)v9 = 0LL;
          }
          while ( v9 != this );
        }
        Windows::Internal::String::Release((HSTRING *)this);
        *(_QWORD *)this = v7;
      }
      else
      {
        for ( j = (HSTRING *)i; ; *j = 0LL )
        {
          result = 0;
          WindowsCompareStringOrdinal(v7, *--j, &result);
          v11 = *(HSTRING *)v9;
          if ( result != -1 )
            break;
          if ( v11 )
          {
            WindowsDeleteString(v11);
            *(_QWORD *)v9 = 0LL;
          }
          *(_QWORD *)v9 = *j;
          v9 = (Windows::Internal::String *)j;
        }
        if ( v11 )
          WindowsDeleteString(v11);
        *(_QWORD *)v9 = v7;
      }
    }
  }
  return a2;
}
