/*
 * XREFs of ??_GCCpuMemoryBufferFactory@@UEAAPEAXI@Z @ 0x14001D910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCpuMemoryBufferFactory@@UEAA@XZ @ 0x14001D950 (--1CCpuMemoryBufferFactory@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCpuMemoryBufferFactory *__fastcall CCpuMemoryBufferFactory::`scalar deleting destructor'(
        CCpuMemoryBufferFactory *this,
        char a2)
{
  CCpuMemoryBufferFactory::~CCpuMemoryBufferFactory(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
