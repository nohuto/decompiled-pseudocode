/*
 * XREFs of ??$_Med3_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x1800A98F4
 * Callers:
 *     ??$_Guess_median_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x180200668 (--$_Guess_median_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Inter.c)
 * Callees:
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x1800A95C0 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ??MInternal@Windows@@YA_NAEBVString@01@0@Z @ 0x1800A9740 (--MInternal@Windows@@YA_NAEBVString@01@0@Z.c)
 */

void __fastcall std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(
        HSTRING *this,
        HSTRING *a2,
        HSTRING *a3)
{
  HSTRING v6; // rdx
  HSTRING v7; // rcx
  HSTRING v8; // rbx
  HSTRING v9; // rbx
  HSTRING v10; // rbx
  INT32 result; // [rsp+48h] [rbp+20h] BYREF

  result = 0;
  WindowsCompareStringOrdinal(*a2, *this, &result);
  if ( result == -1 )
  {
    v10 = *a2;
    *a2 = 0LL;
    Windows::Internal::String::Release(a2);
    *a2 = *this;
    *this = 0LL;
    Windows::Internal::String::Release(this);
    *this = v10;
  }
  v6 = *a2;
  v7 = *a3;
  result = 0;
  WindowsCompareStringOrdinal(v7, v6, &result);
  if ( result == -1 )
  {
    v8 = *a3;
    *a3 = 0LL;
    Windows::Internal::String::Release(a3);
    *a3 = *a2;
    *a2 = 0LL;
    Windows::Internal::String::Release(a2);
    *a2 = v8;
    if ( Windows::Internal::operator<(a2, this) )
    {
      v9 = *a2;
      *a2 = 0LL;
      Windows::Internal::String::Release(a2);
      *a2 = *this;
      *this = 0LL;
      Windows::Internal::String::Release(this);
      *this = v9;
    }
  }
}
