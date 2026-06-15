/*
 * XREFs of ?CreateCpuMemoryBufferFactory@@YAJ_K00PEAPEAUIDeviceGraphBufferFactory@@@Z @ 0x1400347F8
 * Callers:
 *     ?InitializeCpuMemoryConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z @ 0x140033BC0 (-InitializeCpuMemoryConnectionHeap@CDeviceGraphObjectCache@@IEAAJ_JMI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphBufferFactory@@AEB_K11@Z @ 0x140034858 (--$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Detai.c)
 */

__int64 __fastcall CreateCpuMemoryBufferFactory(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct IDeviceGraphBufferFactory **a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  v9 = a1;
  v7[0] = 4LL;
  v4 = ((__int64 (__fastcall *)(struct IDeviceGraphBufferFactory **, __int64 *, __int64 *, __int64 *))Microsoft::WRL::Details::MakeAndInitialize<CCpuMemoryBufferFactory,IDeviceGraphBufferFactory,unsigned __int64 const &,unsigned __int64 const &,unsigned __int64 const &>)(
         a4,
         &v9,
         v7,
         &v10);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6B,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\cpumemorymanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
