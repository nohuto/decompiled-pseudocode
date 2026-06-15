/*
 * XREFs of ??_ECCpuMemoryBuffer@@UEAAPEAXI@Z @ 0x140022310
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCpuMemoryBuffer@@UEAA@XZ @ 0x14002234C (--1CCpuMemoryBuffer@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCpuMemoryBuffer *__fastcall CCpuMemoryBuffer::`vector deleting destructor'(CCpuMemoryBuffer *this, char a2)
{
  CCpuMemoryBuffer::~CCpuMemoryBuffer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
