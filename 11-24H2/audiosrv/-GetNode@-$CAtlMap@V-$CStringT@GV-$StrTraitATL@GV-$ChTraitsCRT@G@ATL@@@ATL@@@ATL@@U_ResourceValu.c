/*
 * XREFs of ?GetNode@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@AEBAPEAVCNode@12@PEBGAEAI1AEAPEAV312@@Z @ 0x18016139C
 * Callers:
 *     ?Lookup@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEBA_NPEBGAEAU_ResourceValue@@@Z @ 0x180161ECC (-Lookup@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue.c)
 *     ?SetAt@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEAAPEAU__POSITION@@PEBGAEBU_ResourceValue@@@Z @ 0x1801627E4 (-SetAt@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@.c)
 * Callees:
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18003D990 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 */

unsigned __int16 *__fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetNode(
        __int64 a1,
        unsigned __int16 *a2,
        int *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  unsigned int v9; // eax
  unsigned __int16 *v10; // r10
  unsigned __int16 *i; // rdx
  unsigned __int16 *v12; // rax
  int v13; // r9d
  int v14; // ecx

  v9 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(a2);
  *a4 = v9;
  *a3 = v9 % *(_DWORD *)(a1 + 16);
  if ( *(_QWORD *)a1 )
  {
    v10 = 0LL;
    *a5 = 0LL;
    for ( i = *(unsigned __int16 **)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3); i; i = (unsigned __int16 *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 8) == *a4 )
      {
        v12 = *(unsigned __int16 **)i;
        do
        {
          v13 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v12 - *(_QWORD *)i);
          v14 = *v12 - v13;
          if ( v14 )
            break;
          ++v12;
        }
        while ( v13 );
        if ( !v14 )
        {
          *a5 = v10;
          return i;
        }
      }
      v10 = i;
    }
  }
  return 0LL;
}
