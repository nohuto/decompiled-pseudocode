/*
 * XREFs of ?AnimationStarted@BamoResizeControllerClientProxy@@UEAAJI_K0@Z @ 0x180113090
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z @ 0x1801130FC (-AnimationStarted@BamoResizeControllerClientProxyImpl@BamoImpl@@QEAAJI_K0@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoResizeControllerClientProxy::AnimationStarted(
        BamoResizeControllerClientProxy *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  BamoResizeControllerClientProxy *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v7) = BamoImpl::BamoResizeControllerClientProxyImpl::AnimationStarted(
                  (BamoResizeControllerClientProxy *)((char *)v7 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v11, v8, v9);
  return (unsigned int)v7;
}
