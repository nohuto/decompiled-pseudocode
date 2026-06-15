/*
 * XREFs of ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800EB280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800EABB8 (--1ResourceGroupInstance@@UEAA@XZ.c)
 */

ResourceGroupInstance *__fastcall ResourceGroupInstance::`scalar deleting destructor'(
        ResourceGroupInstance *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  ResourceGroupInstance::~ResourceGroupInstance(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
