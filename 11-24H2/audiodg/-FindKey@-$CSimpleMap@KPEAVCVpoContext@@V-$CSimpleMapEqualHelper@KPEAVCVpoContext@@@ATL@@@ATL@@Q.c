/*
 * XREFs of ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140073C68
 * Callers:
 *     ??1CVpoContext@@IEAA@XZ @ 0x140073824 (--1CVpoContext@@IEAA@XZ.c)
 *     AudioDGGetVpoFromVpoContext @ 0x1400740C0 (AudioDGGetVpoFromVpoContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // ecx
  __int64 i; // r8

  v2 = 0;
  for ( i = 0LL; i < dword_1400C47C0; ++i )
  {
    if ( *((_DWORD *)CVpoContext::s_mapVpoContext + i) == *a2 )
      return v2;
    ++v2;
  }
  return 0xFFFFFFFFLL;
}
