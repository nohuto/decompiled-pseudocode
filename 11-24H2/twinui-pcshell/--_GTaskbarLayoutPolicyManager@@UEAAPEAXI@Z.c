/*
 * XREFs of ??_GTaskbarLayoutPolicyManager@@UEAAPEAXI@Z @ 0x18031E270
 * Callers:
 *     <none>
 * Callees:
 *     ??1TaskbarLayoutPolicyManager@@UEAA@XZ @ 0x1801CCFA8 (--1TaskbarLayoutPolicyManager@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TaskbarLayoutPolicyManager *__fastcall TaskbarLayoutPolicyManager::`scalar deleting destructor'(
        TaskbarLayoutPolicyManager *this,
        char a2)
{
  TaskbarLayoutPolicyManager::~TaskbarLayoutPolicyManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA0);
  return this;
}
