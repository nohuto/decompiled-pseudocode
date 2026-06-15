/*
 * XREFs of ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x14002B750
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400298F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x14002B658 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14006EDF0 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1400659FC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

char *__fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= dword_1400C47D8 )
  {
    ATL::_AtlRaiseException(0xC000008C, a2);
    JUMPOUT(0x14002B77ELL);
  }
  return (char *)Block + 8 * a2;
}
