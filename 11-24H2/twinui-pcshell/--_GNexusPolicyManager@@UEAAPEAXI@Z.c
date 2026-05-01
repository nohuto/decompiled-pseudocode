/*
 * XREFs of ??_GNexusPolicyManager@@UEAAPEAXI@Z @ 0x18034B530
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1NexusPolicyManager@@UEAA@XZ @ 0x180368F54 (--1NexusPolicyManager@@UEAA@XZ.c)
 */

NexusPolicyManager *__fastcall NexusPolicyManager::`scalar deleting destructor'(NexusPolicyManager *this, char a2)
{
  NexusPolicyManager::~NexusPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
