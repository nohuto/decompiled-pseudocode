/*
 * XREFs of ?GetContainerId@BamoContainerInfoInputObjectProxy@@UEAAAEBUCONTAINER_ID@@XZ @ 0x180058D60
 * Callers:
 *     ?OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x180156C90 (-OnGestureDirectionChanged@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A83EC (-RegisterControllerClient@EdgyConnection@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x1800593F0 (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 */

const struct CONTAINER_ID *__fastcall BamoContainerInfoInputObjectProxy::GetContainerId(
        BamoContainerInfoInputObjectProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL));
  return (BamoContainerInfoInputObjectProxy *)((char *)this + 56);
}
