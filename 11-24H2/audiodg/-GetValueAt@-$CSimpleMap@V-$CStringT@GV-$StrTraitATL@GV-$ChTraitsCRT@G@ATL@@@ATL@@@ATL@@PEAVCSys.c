/*
 * XREFs of ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEBAAEAPEAVCSystemAudioDeviceBase@@H@Z @ 0x14002B450
 * Callers:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400295F4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z @ 0x14002B358 (-GetAggregatedGfxSettings@CSystemAudioDeviceCollection@@SAHPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z @ 0x14006ED80 (-AudioDGUnhandledExceptionFilter@@YAJPEAU_EXCEPTION_POINTERS@@@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14006598C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

char *__fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::GetValueAt(
        __int64 a1,
        signed int a2)
{
  if ( a2 < 0 || a2 >= dword_1400C4758 )
  {
    ATL::_AtlRaiseException(0xC000008C, a2);
    JUMPOUT(0x14002B47ELL);
  }
  return (char *)Block + 8 * a2;
}
