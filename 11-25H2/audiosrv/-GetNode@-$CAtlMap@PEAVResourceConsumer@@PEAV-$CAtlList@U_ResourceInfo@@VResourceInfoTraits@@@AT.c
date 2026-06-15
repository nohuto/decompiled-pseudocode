/*
 * XREFs of ?GetNode@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAVResourceConsumer@@AEAI1AEAPEAV312@@Z @ 0x1800777EC
 * Callers:
 *     ?SetAt@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAVResourceConsumer@@AEBQEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@2@@Z @ 0x180159984 (-SetAt@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@.c)
 * Callees:
 *     ?Hash@ResourceConsumerTraits@@SAKAEBQEAVResourceConsumer@@@Z @ 0x1800779B8 (-Hash@ResourceConsumerTraits@@SAKAEBQEAVResourceConsumer@@@Z.c)
 *     ??8StreamResourceConsumer@@QEAA_NAEBV0@@Z @ 0x180157388 (--8StreamResourceConsumer@@QEAA_NAEBV0@@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNode(
        __int64 a1,
        struct ResourceConsumer *const *a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5)
{
  unsigned int v7; // eax
  unsigned int *v8; // r8
  __int64 v9; // r10
  unsigned int *v10; // r9
  __int64 v11; // rdi
  __int64 i; // rbx
  int v13; // r8d

  v7 = ResourceConsumerTraits::Hash(a2);
  *v10 = v7;
  *v8 = v7 % *(_DWORD *)(v9 + 16);
  if ( *(_QWORD *)v9 )
  {
    v11 = 0LL;
    *a5 = 0LL;
    for ( i = *(_QWORD *)(*(_QWORD *)v9 + 8LL * *v8); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 24) == *a4 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)i + 8LL);
        if ( v13 || *((_DWORD *)*a2 + 2) )
        {
          if ( v13 == *((_DWORD *)*a2 + 2) )
          {
LABEL_8:
            *a5 = v11;
            return i;
          }
        }
        else if ( (unsigned __int8)StreamResourceConsumer::operator==() )
        {
          goto LABEL_8;
        }
      }
      v11 = i;
    }
  }
  return 0LL;
}
