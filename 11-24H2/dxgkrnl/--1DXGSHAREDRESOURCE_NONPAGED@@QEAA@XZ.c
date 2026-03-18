/*
 * XREFs of ??1DXGSHAREDRESOURCE_NONPAGED@@QEAA@XZ @ 0x140020564
 * Callers:
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x140020458 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140021DDC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall DXGSHAREDRESOURCE_NONPAGED::~DXGSHAREDRESOURCE_NONPAGED(DXGSHAREDRESOURCE_NONPAGED *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    CRefCountedBuffer::RefCountedBufferRelease(v1);
}
