/*
 * XREFs of ??_GDeviceDockServer@@UEAAPEAXI@Z @ 0x18017F2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DeviceDockServer@@UEAA@XZ @ 0x18017F1C8 (--1DeviceDockServer@@UEAA@XZ.c)
 */

DeviceDockServer *__fastcall DeviceDockServer::`scalar deleting destructor'(DeviceDockServer *this, char a2)
{
  DeviceDockServer::~DeviceDockServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x98);
  return this;
}
