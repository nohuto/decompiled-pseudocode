/*
 * XREFs of ??_GCShellSnapComponent@@UEAAPEAXI@Z @ 0x18059D938
 * Callers:
 *     ??_ECShellSnapComponent@@WDA@EAAPEAXI@Z @ 0x18059D790 (--_ECShellSnapComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CShellSnapComponent@@UEAA@XZ @ 0x18059CE04 (--1CShellSnapComponent@@UEAA@XZ.c)
 */

CShellSnapComponent *__fastcall CShellSnapComponent::`scalar deleting destructor'(CShellSnapComponent *this, char a2)
{
  CShellSnapComponent::~CShellSnapComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x768);
  return this;
}
