/*
 * XREFs of ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x180224EA0
 * Callers:
 *     ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x1805B4D98 (--1-$unique_ptr@VDefaultSnapLayout@@U-$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

SnapLayoutBase *__fastcall SnapLayoutBase::`vector deleting destructor'(SnapLayoutBase *this, char a2)
{
  *(_QWORD *)this = &CCrashDetector::CHandler::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)8);
  return this;
}
