/*
 * XREFs of ?CopyExclusiveEndpointCollection@CConstraintModel@@AEAAJPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x180160968
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18016151C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18016288C (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL.c)
 */

__int64 __fastcall CConstraintModel::CopyExclusiveEndpointCollection(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r8

  v3 = a3[1];
  if ( !(unsigned __int8)ATL::CAtlArray<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *>>::SetCount(
                           a3,
                           v3 + a2[1]) )
    ATL::AtlThrowImpl(-2147024882);
  v6 = a2[1];
  v7 = (_QWORD *)(*a3 + 8 * v3);
  if ( v6 )
  {
    v8 = *a2 - (_QWORD)v7;
    do
    {
      *v7 = *(_QWORD *)((char *)v7 + v8);
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  return 0LL;
}
