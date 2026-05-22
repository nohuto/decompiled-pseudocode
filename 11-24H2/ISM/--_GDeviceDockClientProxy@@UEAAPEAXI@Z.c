/*
 * XREFs of ??_GDeviceDockClientProxy@@UEAAPEAXI@Z @ 0x1801828B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DeviceDockClientProxy@@UEAA@XZ @ 0x18018287C (--1DeviceDockClientProxy@@UEAA@XZ.c)
 */

DeviceDockClientProxy *__fastcall DeviceDockClientProxy::`scalar deleting destructor'(
        DeviceDockClientProxy *this,
        char a2)
{
  DeviceDockClientProxy::~DeviceDockClientProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
