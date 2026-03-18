/*
 * XREFs of ?ReleaseSessionModeChangeLock@DXGSESSIONDATA@@QEAAXXZ @ 0x140036894
 * Callers:
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x140284668 (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGSESSIONDATA::ReleaseSessionModeChangeLock(DXGSESSIONDATA *this)
{
  char *v2; // rbx
  bool v3; // al

  if ( (unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = *((_QWORD *)this + 2320) == (_QWORD)KeGetCurrentThread();
    v2 = (char *)this + 18552;
    if ( v3 )
      goto LABEL_8;
  }
  else
  {
    if ( *((struct _KTHREAD **)this + 2320) == KeGetCurrentThread() )
    {
      v2 = (char *)this + 18552;
LABEL_8:
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *((_QWORD *)v2 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v2, 0LL);
      goto LABEL_6;
    }
    v2 = (char *)this + 18552;
  }
  _InterlockedDecrement((volatile signed __int32 *)v2 + 4);
  ExReleasePushLockSharedEx(v2, 0LL);
LABEL_6:
  KeLeaveCriticalRegion();
}
