/*
 * XREFs of ?IsSessionModeChangeLockExclusiveOwner@DXGSESSIONDATA@@QEBAEXZ @ 0x140057C70
 * Callers:
 *     DxgkCreateSessionViewForCurrentSession @ 0x14031AA80 (DxgkCreateSessionViewForCurrentSession.c)
 *     DxgkRemoveAllSessionViewForCurrentSession @ 0x14031AF5C (DxgkRemoveAllSessionViewForCurrentSession.c)
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1403F3070 (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DXGSESSIONDATA::IsSessionModeChangeLockExclusiveOwner(DXGSESSIONDATA *this)
{
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  return *((_QWORD *)this + 2320) == (_QWORD)KeGetCurrentThread();
}
