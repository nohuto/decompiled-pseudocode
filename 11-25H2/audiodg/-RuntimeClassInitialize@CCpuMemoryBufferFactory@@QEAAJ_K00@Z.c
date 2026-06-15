/*
 * XREFs of ?RuntimeClassInitialize@CCpuMemoryBufferFactory@@QEAAJ_K00@Z @ 0x14003491C
 * Callers:
 *     ??$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphBufferFactory@@AEB_K11@Z @ 0x140034858 (--$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14001E948 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTLockHeap@@YAJPEAX@Z @ 0x140022910 (-AERTLockHeap@@YAJPEAX@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x14002CD90 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x14002DEC8 (--0last_error_context@wil@@QEAA@XZ.c)
 *     ?AERTCreateHeap@@YAPEAX_K00@Z @ 0x1400349CC (-AERTCreateHeap@@YAPEAX_K00@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CCpuMemoryBufferFactory::RuntimeClassInitialize(
        CCpuMemoryBufferFactory *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rdx
  void *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v15; // [rsp+30h] [rbp+8h] BYREF

  v6 = AERTCreateHeap(a2, a3, a4);
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v15);
    AERTDestroyHeap(v8, v12, v13);
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v15);
  }
  *((_QWORD *)this + 2) = v6;
  if ( v6 )
  {
    v9 = AERTLockHeap((__int64)v6, v5, v7);
    if ( v9 >= 0 )
    {
      *((_BYTE *)this + 24) = 1;
      return 0LL;
    }
    v11 = 46LL;
  }
  else
  {
    v9 = -2147024882;
    v11 = 43LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
