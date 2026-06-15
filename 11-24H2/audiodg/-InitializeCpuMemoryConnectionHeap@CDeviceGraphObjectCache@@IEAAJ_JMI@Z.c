/*
 * XREFs of ?InitializeCpuMemoryConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x1400338C0
 * Callers:
 *     ?RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z @ 0x140033834 (-RuntimeClassInitialize@CDeviceGraphObjectCache@@QEAAJ_JMIPEBU_tlgProvider_t@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateCpuMemoryBufferFactory@@YAJ_K00PEAPEAUIDeviceGraphBufferFactory@@@Z @ 0x1400344F8 (-CreateCpuMemoryBufferFactory@@YAJ_K00PEAPEAUIDeviceGraphBufferFactory@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectCache::InitializeCpuMemoryConnectionHeap(
        CDeviceGraphObjectCache *this,
        signed __int64 a2,
        float a3,
        unsigned int a4)
{
  struct IDeviceGraphBufferFactory **v4; // rbx
  __int64 v5; // rdx
  int CpuMemoryBufferFactory; // ebx
  unsigned __int64 v8; // rdi
  double v9; // xmm3_8
  struct IDeviceGraphBufferFactory *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct IDeviceGraphBufferFactory **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    CpuMemoryBufferFactory = -2005139382;
    v5 = 174LL;
    goto LABEL_9;
  }
  if ( !a2 || a2 > 25000000 )
  {
    v5 = 177LL;
    goto LABEL_8;
  }
  if ( a3 > 384000.0 || a3 < 10.0 )
  {
    v5 = 178LL;
    goto LABEL_8;
  }
  if ( a4 - 1 > 0x1F )
  {
    v5 = 179LL;
LABEL_8:
    CpuMemoryBufferFactory = -2147024809;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)(unsigned int)CpuMemoryBufferFactory);
    return (unsigned int)CpuMemoryBufferFactory;
  }
  v8 = a4 * (unsigned __int64)(unsigned int)(int)(a3 * (double)(int)a2 / 10000000.0 + 0.5);
  v9 = (double)(int)a2 * 192000.0 / 10000000.0 + 0.5;
  v10 = *v4;
  *v4 = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(struct IDeviceGraphBufferFactory *))(*(_QWORD *)v10 + 16LL))(v10);
  CpuMemoryBufferFactory = CreateCpuMemoryBufferFactory(80 * v8, a2, (unsigned __int64)(unsigned int)(int)v9 << 7, v4);
  if ( CpuMemoryBufferFactory < 0 )
  {
    v5 = 202LL;
    goto LABEL_9;
  }
  return 0LL;
}
