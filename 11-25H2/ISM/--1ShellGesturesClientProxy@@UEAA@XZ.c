/*
 * XREFs of ??1ShellGesturesClientProxy@@UEAA@XZ @ 0x1800585CC
 * Callers:
 *     ??_GShellGesturesClientProxy@@UEAAPEAXI@Z @ 0x180058590 (--_GShellGesturesClientProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ @ 0x1800583E4 (--1-$shared_ptr@VSharedTargetWithHandle@SystemCursors@@@std@@QEAA@XZ.c)
 */

void __fastcall ShellGesturesClientProxy::~ShellGesturesClientProxy(ShellGesturesClientProxy *this)
{
  std::shared_ptr<SystemCursors::SharedTargetWithHandle>::~shared_ptr<SystemCursors::SharedTargetWithHandle>((__int64)this + 144);
  BamoImpl::BamoShellGesturesClientProxyImpl::~BamoShellGesturesClientProxyImpl((ShellGesturesClientProxy *)((char *)this + 16));
}
