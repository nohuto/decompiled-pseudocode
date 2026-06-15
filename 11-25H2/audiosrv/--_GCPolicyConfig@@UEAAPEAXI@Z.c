/*
 * XREFs of ??_GCPolicyConfig@@UEAAPEAXI@Z @ 0x1800CC800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x1800CC3E4 (--1CPolicyConfig@@UEAA@XZ.c)
 */

CPolicyConfig *__fastcall CPolicyConfig::`scalar deleting destructor'(CPolicyConfig *this, char a2)
{
  CPolicyConfig::~CPolicyConfig(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
