/*
 * XREFs of ??_GJointDivider@@UEAAPEAXI@Z @ 0x180235B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1JointDivider@@UEAA@XZ @ 0x1802C9EA0 (--1JointDivider@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

JointDivider *__fastcall JointDivider::`scalar deleting destructor'(JointDivider *this, char a2)
{
  JointDivider::~JointDivider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
