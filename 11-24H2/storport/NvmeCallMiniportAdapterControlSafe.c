/*
 * XREFs of NvmeCallMiniportAdapterControlSafe @ 0x1400716E8
 * Callers:
 *     NvmeAdapterSendControlAddSubsystemPort @ 0x1400D6D98 (NvmeAdapterSendControlAddSubsystemPort.c)
 *     NvmeAdapterSendControlRemoveSubsystemPort @ 0x1400D6FA0 (NvmeAdapterSendControlRemoveSubsystemPort.c)
 *     NvmeAdapterStartMiniport @ 0x1400D8B80 (NvmeAdapterStartMiniport.c)
 *     NvmeAdapterSendControlRemoveNvmeController @ 0x1400E7230 (NvmeAdapterSendControlRemoveNvmeController.c)
 *     NvmeAdapterSendControlAddNvmeController @ 0x14019E704 (NvmeAdapterSendControlAddNvmeController.c)
 *     NvmeAdapterSendControlUpdateNvmeController @ 0x14019E964 (NvmeAdapterSendControlUpdateNvmeController.c)
 * Callees:
 *     NvmeCallMiniportAdapterControl @ 0x140071694 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x140071734 (NvmeIsAdapterControlSupported.c)
 */

__int64 __fastcall NvmeCallMiniportAdapterControlSafe(__int64 a1)
{
  if ( (unsigned __int8)NvmeIsAdapterControlSupported() )
    return NvmeCallMiniportAdapterControl(a1);
  else
    return 3221225659LL;
}
