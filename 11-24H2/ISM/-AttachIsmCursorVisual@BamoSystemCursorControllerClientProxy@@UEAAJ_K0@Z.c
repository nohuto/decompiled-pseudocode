/*
 * XREFs of ?AttachIsmCursorVisual@BamoSystemCursorControllerClientProxy@@UEAAJ_K0@Z @ 0x180115330
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?AttachIsmCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K0@Z @ 0x180115390 (-AttachIsmCursorVisual@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJ_K0@Z.c)
 */

__int64 __fastcall BamoSystemCursorControllerClientProxy::AttachIsmCursorVisual(
        BamoSystemCursorControllerClientProxy *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  BamoSystemCursorControllerClientProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoSystemCursorControllerClientProxyImpl::AttachIsmCursorVisual(
                  (BamoSystemCursorControllerClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
