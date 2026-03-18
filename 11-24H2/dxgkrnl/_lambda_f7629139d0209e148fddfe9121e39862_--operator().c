/*
 * XREFs of _lambda_f7629139d0209e148fddfe9121e39862_::operator() @ 0x140269354
 * Callers:
 *     _BmlBuildVirtualRefreshRateListFromTargetModeSet @ 0x14026999C (_BmlBuildVirtualRefreshRateListFromTargetModeSet.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x1400390E0 (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

char __fastcall lambda_f7629139d0209e148fddfe9121e39862_::operator()(
        unsigned __int64 **a1,
        const struct _D3DDDI_RATIONAL *a2)
{
  _QWORD **v3; // rbx
  unsigned __int64 i; // rdi
  unsigned __int64 *v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  const struct _D3DDDI_RATIONAL *v9; // rdx
  struct _D3DDDI_RATIONAL v10; // rax
  _QWORD *v11; // rbx

  v3 = a1 + 1;
  for ( i = 0LL; ; ++i )
  {
    v6 = *a1;
    v7 = 8 * i;
    v8 = **a1;
    if ( i >= v8 )
      break;
    v3 = a1 + 1;
    v9 = (const struct _D3DDDI_RATIONAL *)(v7 + *a1[1]);
    if ( v9->Numerator * (unsigned __int64)a2->Denominator < a2->Numerator * (unsigned __int64)v9->Denominator )
      break;
    LOBYTE(v10.Numerator) = DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(a2, v9, 0);
    if ( LOBYTE(v10.Numerator) )
      return v10.Numerator;
  }
  v11 = *v3;
  memmove((void *)(v7 + *v11 + 8), (const void *)(v7 + *v11), 8 * (v8 - i));
  v10 = *a2;
  *(struct _D3DDDI_RATIONAL *)(v7 + *v11) = *a2;
  ++*v6;
  return v10.Numerator;
}
