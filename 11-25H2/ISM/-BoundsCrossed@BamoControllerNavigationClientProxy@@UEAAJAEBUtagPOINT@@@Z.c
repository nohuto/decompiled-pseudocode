/*
 * XREFs of ?BoundsCrossed@BamoControllerNavigationClientProxy@@UEAAJAEBUtagPOINT@@@Z @ 0x180175EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?BoundsCrossed@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z @ 0x180175F00 (-BoundsCrossed@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall BamoControllerNavigationClientProxy::BoundsCrossed(
        BamoControllerNavigationClientProxy *this,
        const struct tagPOINT *a2)
{
  BamoControllerNavigationClientProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoControllerNavigationClientProxyImpl::BoundsCrossed(
                  (BamoControllerNavigationClientProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
