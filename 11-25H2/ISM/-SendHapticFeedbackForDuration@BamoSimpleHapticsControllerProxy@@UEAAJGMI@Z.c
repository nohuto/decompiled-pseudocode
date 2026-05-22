/*
 * XREFs of ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxy@@UEAAJGMI@Z @ 0x180122EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z @ 0x180122F20 (-SendHapticFeedbackForDuration@BamoSimpleHapticsControllerProxyImpl@BamoImpl@@QEAAJGMI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoSimpleHapticsControllerProxy::SendHapticFeedbackForDuration(
        BamoSimpleHapticsControllerProxy *this,
        unsigned __int16 a2,
        float a3,
        unsigned int a4)
{
  BamoSimpleHapticsControllerProxy *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v6) = BamoImpl::BamoSimpleHapticsControllerProxyImpl::SendHapticFeedbackForDuration(
                  (BamoSimpleHapticsControllerProxy *)((char *)v6 + 8),
                  a2,
                  a3,
                  a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10, v7, v8);
  return (unsigned int)v6;
}
