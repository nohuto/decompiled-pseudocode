/*
 * XREFs of ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x1400502B8
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x14001A264 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ??1FlipManagerTokenInitInfo@@QEAA@XZ @ 0x140049C24 (--1FlipManagerTokenInitInfo@@QEAA@XZ.c)
 *     ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x14005E8D0 (-Discard@CFlipManagerToken@@UEAAXXZ.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009E4EC (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     ??1FlipManagerTokenIFlipInfo@@QEAA@XZ @ 0x1400502EC (--1FlipManagerTokenIFlipInfo@@QEAA@XZ.c)
 */

FlipManagerTokenIFlipInfo *__fastcall FlipManagerTokenIFlipInfo::`scalar deleting destructor'(
        FlipManagerTokenIFlipInfo *P)
{
  FlipManagerTokenIFlipInfo::~FlipManagerTokenIFlipInfo(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
