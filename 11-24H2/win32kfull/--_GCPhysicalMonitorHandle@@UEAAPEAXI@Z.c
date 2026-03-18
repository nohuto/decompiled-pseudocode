/*
 * XREFs of ??_GCPhysicalMonitorHandle@@UEAAPEAXI@Z @ 0x1402050B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CPhysicalMonitorHandle@@UEAA@XZ @ 0x1402050E8 (--1CPhysicalMonitorHandle@@UEAA@XZ.c)
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140205248 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 */

CPhysicalMonitorHandle *__fastcall CPhysicalMonitorHandle::`scalar deleting destructor'(
        CPhysicalMonitorHandle *this,
        char a2)
{
  CPhysicalMonitorHandle::~CPhysicalMonitorHandle(this);
  if ( (a2 & 1) != 0 )
    DDCCIFreeMemory(this);
  return this;
}
