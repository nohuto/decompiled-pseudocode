/*
 * XREFs of ??_GResourceGroupInstance@@UEAAPEAXI@Z @ 0x1800E6E30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x1800E676C (--1ResourceGroupInstance@@UEAA@XZ.c)
 */

ResourceGroupInstance *__fastcall ResourceGroupInstance::`scalar deleting destructor'(
        ResourceGroupInstance *this,
        char a2)
{
  ResourceGroupInstance::~ResourceGroupInstance(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2A0);
  return this;
}
