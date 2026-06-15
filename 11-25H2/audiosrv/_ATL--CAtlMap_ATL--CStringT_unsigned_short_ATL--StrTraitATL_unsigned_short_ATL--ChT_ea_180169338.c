/*
 * XREFs of _ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_______ResourceValue_ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits__ResourceValue___::SetAt_::_1_::catch$2 @ 0x180169338
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180157F04 (-FreeNode@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceVal.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_______ResourceValue_ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits__ResourceValue___::SetAt_::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = *(_QWORD *)(a2 + 104);
  v3 = *(_QWORD *)(a2 + 80);
  v4 = (unsigned int)(*(_DWORD *)(v2 + 32) % *(_DWORD *)(v3 + 16));
  if ( v2 == *(_QWORD *)(*(_QWORD *)v3 + 8 * v4) )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v4);
    if ( *(_QWORD *)(v5 + 24) != v2 )
    {
      v6 = *(_QWORD *)(v5 + 24);
      do
      {
        v5 = v6;
        v6 = *(_QWORD *)(v6 + 24);
      }
      while ( v6 != v2 );
    }
  }
  v7 = *(_QWORD *)(v2 + 24);
  if ( v5 )
    *(_QWORD *)(v5 + 24) = v7;
  else
    *(_QWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)(*(_DWORD *)(v2 + 32) % *(_DWORD *)(v3 + 16))) = v7;
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::FreeNode(
    v3,
    (_QWORD *)v2);
  throw;
}
