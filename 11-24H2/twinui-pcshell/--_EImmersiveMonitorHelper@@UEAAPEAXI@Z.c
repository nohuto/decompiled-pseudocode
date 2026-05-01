/*
 * XREFs of ??_EImmersiveMonitorHelper@@UEAAPEAXI@Z @ 0x180219680
 * Callers:
 *     <none>
 * Callees:
 *     ??1ImmersiveMonitorHelper@@UEAA@XZ @ 0x1802C831C (--1ImmersiveMonitorHelper@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

ImmersiveMonitorHelper *__fastcall ImmersiveMonitorHelper::`vector deleting destructor'(
        ImmersiveMonitorHelper *this,
        char a2)
{
  ImmersiveMonitorHelper::~ImmersiveMonitorHelper(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x60);
  return this;
}
