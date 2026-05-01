/*
 * XREFs of ??$_Guess_median_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x180200668
 * Callers:
 *     ??$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YA?AU?$pair@PEAVString@Internal@Windows@@PEAV123@@0@PEAVString@Internal@Windows@@0U?$less@X@0@@Z @ 0x1800A7D38 (--$_Partition_by_median_guess_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YA-AU-.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAVString@Internal@Windows@@U?$less@X@std@@@std@@YAXPEAVString@Internal@Windows@@00U?$less@X@0@@Z @ 0x1800A98F4 (--$_Med3_unchecked@PEAVString@Internal@Windows@@U-$less@X@std@@@std@@YAXPEAVString@Internal@Wind.c)
 */

void __fastcall std::_Guess_median_unchecked<Windows::Internal::String *,std::less<void>>(
        HSTRING *a1,
        HSTRING *a2,
        HSTRING *a3)
{
  HSTRING *v3; // r14
  HSTRING *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  HSTRING *v9; // rbp

  v3 = a3;
  v4 = a2;
  v5 = a3 - a1;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 16 * v6;
    v8 = 8 * v6;
    v9 = &a1[v6];
    std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(a1, v9, &a1[2 * v6]);
    std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(
      &v4[v8 / 0xFFFFFFFFFFFFFFF8uLL],
      v4,
      &v4[(unsigned __int64)v8 / 8]);
    std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(
      &v3[v7 / 0xFFFFFFFFFFFFFFF8uLL],
      &v3[v8 / 0xFFFFFFFFFFFFFFF8uLL],
      v3);
    a3 = &v3[v8 / 0xFFFFFFFFFFFFFFF8uLL];
    a2 = v4;
    a1 = v9;
  }
  std::_Med3_unchecked<Windows::Internal::String *,std::less<void>>(a1, a2, a3);
}
