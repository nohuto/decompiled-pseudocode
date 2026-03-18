/*
 * XREFs of ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x140050838
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14000AD24 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x14004A4A4 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x14005E100 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009C18C (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     ??1FlipManagerTokenIFlipInfo@@QEAA@XZ @ 0x14005086C (--1FlipManagerTokenIFlipInfo@@QEAA@XZ.c)
 */

FlipManagerTokenIFlipInfo *__fastcall FlipManagerTokenIFlipInfo::`scalar deleting destructor'(
        FlipManagerTokenIFlipInfo *P)
{
  FlipManagerTokenIFlipInfo::~FlipManagerTokenIFlipInfo(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
