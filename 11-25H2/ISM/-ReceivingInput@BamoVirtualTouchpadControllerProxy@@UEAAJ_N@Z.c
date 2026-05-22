/*
 * XREFs of ?ReceivingInput@BamoVirtualTouchpadControllerProxy@@UEAAJ_N@Z @ 0x180133F60
 * Callers:
 *     _lambda_ee4fb4173948ca8af83f1cabbba8acb3_::operator() @ 0x1800EE8A8 (_lambda_ee4fb4173948ca8af83f1cabbba8acb3_--operator().c)
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?ReceivingInput@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N@Z @ 0x180133FB0 (-ReceivingInput@BamoVirtualTouchpadControllerProxyImpl@BamoImpl@@QEAAJ_N@Z.c)
 */

__int64 __fastcall BamoVirtualTouchpadControllerProxy::ReceivingInput(
        BamoVirtualTouchpadControllerProxy *this,
        bool a2)
{
  BamoVirtualTouchpadControllerProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoVirtualTouchpadControllerProxyImpl::ReceivingInput(
                  (BamoVirtualTouchpadControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
