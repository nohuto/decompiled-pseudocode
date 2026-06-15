/*
 * XREFs of ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x180160890
 * Callers:
 *     ??1CConstraintModel@@UEAA@XZ @ 0x180160058 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18016151C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800A035C (--1-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EndpointInfo@@QEAA@XZ @ 0x1800EAB54 (--1EndpointInfo@@QEAA@XZ.c)
 *     ?SetCount@?$CAtlArray@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVEndpointInfo@@V?$CElementTraits@PEAVEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x18016288C (-SetCount@-$CAtlArray@PEAV-$CAtlArray@PEAVEndpointInfo@@V-$CElementTraits@PEAVEndpointInfo@@@ATL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModel::CleanResourceExclusiveEndpoint(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // rcx
  void *v8; // rsi

  v3 = 0;
  if ( a2[1] )
  {
    v4 = 0LL;
    do
    {
      v5 = *(_QWORD *)(*a2 + 8 * v4);
      v6 = 0;
      if ( *(_QWORD *)(v5 + 8) )
      {
        v7 = 0LL;
        do
        {
          v8 = *(void **)(*(_QWORD *)v5 + 8 * v7);
          if ( v8 )
          {
            EndpointInfo::~EndpointInfo(*(EndpointInfo **)(*(_QWORD *)v5 + 8 * v7), (__int64)a2);
            operator delete(v8, (const struct std::nothrow_t *)0x80);
          }
          v7 = ++v6;
        }
        while ( (unsigned __int64)v6 < *(_QWORD *)(v5 + 8) );
      }
      ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>::~CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>>((void **)v5);
      operator delete((void *)v5, (const struct std::nothrow_t *)0x20);
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < a2[1] );
  }
  return ATL::CAtlArray<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *,ATL::CElementTraits<ATL::CAtlArray<EndpointInfo *,ATL::CElementTraits<EndpointInfo *>> *>>::SetCount(
           a2,
           0LL);
}
