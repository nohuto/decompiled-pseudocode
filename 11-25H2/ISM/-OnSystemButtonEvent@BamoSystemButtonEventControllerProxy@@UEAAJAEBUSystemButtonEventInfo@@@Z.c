/*
 * XREFs of ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxy@@UEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015B750
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180045270 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@QEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015B7A0 (-OnSystemButtonEvent@BamoSystemButtonEventControllerProxyImpl@BamoImpl@@QEAAJAEBUSystemButtonEve.c)
 */

__int64 __fastcall BamoSystemButtonEventControllerProxy::OnSystemButtonEvent(
        BamoSystemButtonEventControllerProxy *this,
        const struct SystemButtonEventInfo *a2)
{
  BamoSystemButtonEventControllerProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoSystemButtonEventControllerProxyImpl::OnSystemButtonEvent(
                  (BamoSystemButtonEventControllerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
