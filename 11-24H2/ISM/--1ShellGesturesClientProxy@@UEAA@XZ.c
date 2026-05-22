/*
 * XREFs of ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x1800583DC
 * Callers:
 *     ??_GShellGesturesClientProxy@@UEAAPEAXI@Z @ 0x1800583A0 (--_GShellGesturesClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800581F4 (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 */

void __fastcall ShellGesturesClientProxy::~ShellGesturesClientProxy(ShellGesturesClientProxy *this)
{
  std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)this + 144);
  BamoImpl::BamoShellGesturesClientProxyImpl::~BamoShellGesturesClientProxyImpl((ShellGesturesClientProxy *)((char *)this + 16));
}
