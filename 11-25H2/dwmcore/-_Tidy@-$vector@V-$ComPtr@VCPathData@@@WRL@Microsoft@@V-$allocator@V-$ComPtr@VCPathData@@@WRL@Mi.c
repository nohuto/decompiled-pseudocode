/*
 * XREFs of ?_Tidy@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18005D270
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180068960 (--1CKeyframeAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D310 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Tidy(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rsi
  _QWORD *v4; // rcx
  unsigned __int64 v5; // rdx

  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v3 = (_QWORD *)a1[1];
    while ( v1 != v3 )
      Microsoft::WRL::ComPtr<CPathData>::InternalRelease(v1++);
    v4 = (_QWORD *)*a1;
    v5 = (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v5 >= 0x1000 )
    {
      v5 += 39LL;
      if ( (unsigned __int64)v4 - *(v4 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v4 = (_QWORD *)*(v4 - 1);
    }
    operator delete(v4, v5);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
