/*
 * XREFs of ?AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z @ 0x1400197C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CDC0 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x14000D040 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ??0CCpuMemoryBuffer@@QEAA@PEAVCCpuMemoryBufferFactory@@_K@Z @ 0x1400198C4 (--0CCpuMemoryBuffer@@QEAA@PEAVCCpuMemoryBufferFactory@@_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140074588 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CCpuMemoryBufferFactory::AllocateBuffer(
        void **this,
        unsigned __int64 a2,
        struct IDeviceGraphBuffer **a3)
{
  void *v6; // rdi
  CCpuMemoryBuffer *v7; // rax
  struct IDeviceGraphBuffer *v8; // rax
  int v10; // r8d
  int v11; // r8d
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v6 = AERTAllocate(a2, this[2], (int)a3);
  if ( !v6 )
  {
    AERTAddMemoryToHeap(this[2], 20 * a2);
    v6 = AERTAllocate(a2, this[2], v11);
  }
  if ( v6 )
  {
    v7 = (CCpuMemoryBuffer *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      v8 = CCpuMemoryBuffer::CCpuMemoryBuffer(v7, (struct CCpuMemoryBufferFactory *)this, (unsigned __int64)v6);
      *a3 = v8;
      if ( v8 )
        return 0LL;
    }
    else
    {
      *a3 = 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp",
      (const char *)0x8007000ELL);
    AERTFree(v6, this[2], v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp",
      (const char *)0x8007000ELL);
  }
  return 2147942414LL;
}
