/*
 * XREFs of ??A?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x1800450A0
 * Callers:
 *     ?DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z @ 0x180045688 (-DoesStringRepresentAPositiveNumber@ApplicationSpecificEndpointInfo@@CA_NPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::operator[](__int64 *a1, int a2)
{
  __int64 v2; // rcx

  if ( a2 < 0 || (v2 = *a1, a2 > *(_DWORD *)(v2 - 16)) )
    ATL::AtlThrowImpl(-2147024809);
  return *(unsigned __int16 *)(v2 + 2LL * a2);
}
