/*
 * XREFs of ?CleanResourceConsumptionMap@CConstraintModel@@AEAAXPEAV?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@@Z @ 0x180157A64
 * Callers:
 *     ??1CConstraintModel@@UEAA@XZ @ 0x1801572A8 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18015876C (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ??_G?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAXI@Z @ 0x180157424 (--_G-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAXI@Z.c)
 *     ?GetNext@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x18015855C (-GetNext@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@AT.c)
 *     ?GetStartPosition@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180158698 (-GetStartPosition@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_Res.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConstraintModel::CleanResourceConsumptionMap(_QWORD *a1, __int64 a2)
{
  _QWORD *StartPosition; // rax
  void *v4; // rdi
  _QWORD *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  StartPosition = (_QWORD *)ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetStartPosition(a2);
  v6 = StartPosition;
  while ( StartPosition )
  {
    v4 = (void *)StartPosition[1];
    if ( *StartPosition )
      (**(void (__fastcall ***)(_QWORD, __int64))*StartPosition)(*StartPosition, 1LL);
    if ( v4 )
      ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::`scalar deleting destructor'(v4);
    ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::GetNext(
      a2,
      &v6);
    StartPosition = v6;
  }
  return ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::RemoveAll(a2);
}
