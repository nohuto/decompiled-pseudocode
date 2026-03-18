/*
 * XREFs of ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180139528
 * Callers:
 *     ??1?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1801394E8 (--1-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@de.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x1801369CC (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 */

void __fastcall detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rbx
  CDrawListBitmap *v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rsi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  CDrawListBitmap *i; // rbx

  v6 = *a1;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 4);
  if ( a3 > v8 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  else
  {
    v5 = 112 * a3;
    v4 = (CDrawListBitmap *)(v6 + 16 * ((a1[1] - *a1) >> 4));
    if ( a3 == v8 )
      goto LABEL_7;
    v3 = v5 + v6;
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((16 * ((a1[1] - *a1) >> 4) - v5) >> 4);
    if ( v9 >= 0 )
    {
      if ( v9 > 0 && v8 < v9 )
LABEL_17:
        _invalid_parameter_noinfo_noreturn();
      goto LABEL_5;
    }
  }
  if ( v9 )
    goto LABEL_17;
LABEL_5:
  v10 = v6 - v3;
  while ( (CDrawListBitmap *)v3 != v4 )
  {
    EffectInput::operator=(v10 + v3, v3, a3);
    v3 += 112LL;
  }
LABEL_7:
  for ( i = (CDrawListBitmap *)((char *)v4 - v5); i != v4; i = (CDrawListBitmap *)((char *)i + 112) )
    CDrawListBitmap::~CDrawListBitmap(i);
  a1[1] -= v5;
}
