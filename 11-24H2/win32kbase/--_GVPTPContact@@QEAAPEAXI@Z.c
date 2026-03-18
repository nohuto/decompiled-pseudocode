/*
 * XREFs of ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1402194D0
 * Callers:
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1402193C0 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 *     ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x140219F4C (-ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1VPTPContact@@QEAA@XZ @ 0x140219364 (--1VPTPContact@@QEAA@XZ.c)
 */

VPTPContact ***__fastcall VPTPContact::`scalar deleting destructor'(VPTPContact ***Buffer)
{
  VPTPContact::~VPTPContact(Buffer);
  GreDeleteFastMutex((char *)Buffer);
  return Buffer;
}
