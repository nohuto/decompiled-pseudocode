/*
 * XREFs of ??1CCpuMemoryBuffer@@UEAA@XZ @ 0x14002264C
 * Callers:
 *     ??_ECCpuMemoryBuffer@@UEAAPEAXI@Z @ 0x140022610 (--_ECCpuMemoryBuffer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??1?$com_ptr_t@VCCpuMemoryBufferFactory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14002269C (--1-$com_ptr_t@VCCpuMemoryBufferFactory@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CCpuMemoryBuffer::~CCpuMemoryBuffer(CCpuMemoryBuffer *this, __int64 a2, int a3)
{
  void *v4; // rcx

  *(_QWORD *)this = &CCpuMemoryBuffer::`vftable';
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    AERTFree(v4, *(void **)(*((_QWORD *)this + 2) + 16LL), a3);
  wil::com_ptr_t<CCpuMemoryBufferFactory,wil::err_returncode_policy>::~com_ptr_t<CCpuMemoryBufferFactory,wil::err_returncode_policy>((char *)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
