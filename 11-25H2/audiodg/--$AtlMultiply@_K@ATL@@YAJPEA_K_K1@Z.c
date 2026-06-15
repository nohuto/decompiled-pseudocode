/*
 * XREFs of ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x140037314
 * Callers:
 *     ??$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z @ 0x140076A10 (--$AtlMultiplyThrow@_K@ATL@@YA_K_K0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::AtlMultiply<unsigned __int64>(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a2 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / a2 >= a3 )
  {
    *a1 = a3 * a2;
    return 0LL;
  }
  return 2147942487LL;
}
