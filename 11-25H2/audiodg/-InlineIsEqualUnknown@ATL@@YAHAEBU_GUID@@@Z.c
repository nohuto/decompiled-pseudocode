/*
 * XREFs of ?InlineIsEqualUnknown@ATL@@YAHAEBU_GUID@@@Z @ 0x14002D6DC
 * Callers:
 *     ?QueryInterface@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D100 (-QueryInterface@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CSystemAudioDeviceShared@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D22C (-_InternalQueryInterface@CSystemAudioDeviceShared@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CProcessSubmix@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D358 (-_InternalQueryInterface@CProcessSubmix@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CStreamGroup@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D484 (-_InternalQueryInterface@CStreamGroup@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_InternalQueryInterface@CStreamInstance@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002D5B0 (-_InternalQueryInterface@CStreamInstance@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x14003A630 (-CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D7E0 (-QueryInterface@-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D840 (-QueryInterface@-$CComAggObject@VCAudioDeviceGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14005D8B0 (-QueryInterface@-$CComAggObject@VCStreamInstance@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140065840 (-QueryInterface@-$CComAggObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14006CC40 (-QueryInterface@-$CComAggObject@VCProcessSubmix@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140071430 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400732A0 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140073AE0 (-QueryInterface@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400762F0 (-QueryInterface@-$CComAggObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B2C0 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@.c)
 *     ?QueryInterface@?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14008B330 (-QueryInterface@-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@.c)
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
