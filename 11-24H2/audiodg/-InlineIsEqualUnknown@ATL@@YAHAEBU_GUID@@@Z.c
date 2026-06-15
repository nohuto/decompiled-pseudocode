/*
 * XREFs of ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14002D3DC
 * Callers:
 *     ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002CE00 (-QueryInterface@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CSystemAudioDeviceShared@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002CF2C (-_InternalQueryInterface@CSystemAudioDeviceShared@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CProcessSubmix@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D058 (-_InternalQueryInterface@CProcessSubmix@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CStreamGroup@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D184 (-_InternalQueryInterface@CStreamGroup@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CStreamInstance@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D2B0 (-_InternalQueryInterface@CStreamInstance@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x14003A330 (-CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D6F0 (-QueryInterface@-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D750 (-QueryInterface@-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D7C0 (-QueryInterface@-$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400657D0 (-QueryInterface@-$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006CBD0 (-QueryInterface@-$CComAggObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006FEA0 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140070D30 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071570 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073E00 (-QueryInterface@-$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008AD40 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008ADB0 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::InlineIsEqualUnknown(const struct _GUID *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1->Data1 && !*(_DWORD *)&a1->Data2 && *(_DWORD *)a1->Data4 == 192 && *(_DWORD *)&a1->Data4[4] == 1174405120 )
    return 1LL;
  return result;
}
