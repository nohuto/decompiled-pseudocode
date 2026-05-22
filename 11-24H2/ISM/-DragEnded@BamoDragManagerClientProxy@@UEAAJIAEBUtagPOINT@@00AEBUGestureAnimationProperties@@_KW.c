/*
 * XREFs of ?DragEnded@BamoDragManagerClientProxy@@UEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x1801448C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180041D00 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180043030 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?DragEnded@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationProperties@@_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18014496C (-DragEnded@BamoDragManagerClientProxyImpl@BamoImpl@@QEAAJIAEBUtagPOINT@@00AEBUGestureAnimationPr.c)
 */

__int64 __fastcall BamoDragManagerClientProxy::DragEnded(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  Microsoft::BamoImpl::BamoImplObject *v16; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v16,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v12) = BamoImpl::BamoDragManagerClientProxyImpl::DragEnded(v12 + 8, a2, a3, a4, a5, a6, a7, a8, a9);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v16, v13, v14);
  return (unsigned int)v12;
}
