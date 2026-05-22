/*
 * XREFs of ?ResizeStarted@BamoResizeControllerClientProxy@@UEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@3456@AEBUtagPOINT@@2@Z @ 0x180122A90
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?ResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@W4InputType@4567@AEBUtagPOINT@@2@Z @ 0x180122B10 (-ResizeStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJIW4InputResizeRegion@Input@Int.c)
 */

__int64 __fastcall BamoResizeControllerClientProxy::ResizeStarted(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  Microsoft::BamoImpl::BamoImplObject *v13; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v13,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v9) = BamoImpl::BamoResizeControllerClientProxyImpl::ResizeStarted(v9 + 8, a2, a3, a4, a5, a6);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v13, v10, v11);
  return (unsigned int)v9;
}
