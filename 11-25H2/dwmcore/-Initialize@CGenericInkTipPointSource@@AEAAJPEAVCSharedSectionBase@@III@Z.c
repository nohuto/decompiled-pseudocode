/*
 * XREFs of ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSectionBase@@III@Z @ 0x1802B509C
 * Callers:
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z @ 0x180256578 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSectionBase@@IIIPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x18006CF00 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z @ 0x180139730 (--4-$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAAEAV012@PEAVCVisual@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCSharedCircularQueue@@U?$default_delete@VCSharedCircularQueue@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18029AF74 (--1-$out_param_t@V-$unique_ptr@VCSharedCircularQueue@@U-$default_delete@VCSharedCircularQueue@@@.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@$$CBE$0?0@gsl@@IPEAPEAV1@@Z @ 0x18029AFAC (-Create@CSharedCircularQueue@@SAJV-$span@$$CBE$0-0@gsl@@IPEAPEAV1@@Z.c)
 *     ?ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z @ 0x1802AFDFC (-ResolveAllocation@CSharedSectionBase@@QEAAPEBX_K0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Initialize(
        CGenericInkTipPointSource *this,
        struct CSharedSectionBase *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 result; // rax
  int v12; // edi
  int v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  char *v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  char v17; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = CSharedSectionBase::ResolveAllocation(a2, a3, a4);
  if ( v9 )
  {
    v16 = 0LL;
    v15 = (char *)this + 24;
    v17 = 1;
    gsl::details::extent_type<-1>::extent_type<-1>(v13, v10);
    if ( *(_QWORD *)v13 == -1LL )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v14 = v9;
    v12 = CSharedCircularQueue::Create((unsigned int *)v13, a5, &v16);
    wil::details::out_param_t<std::unique_ptr<CSharedCircularQueue>>::~out_param_t<std::unique_ptr<CSharedCircularQueue>>((__int64)&v15);
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<CVisual>::operator=((__int64 *)this + 2, (__int64)a2);
      result = 0LL;
      *((_DWORD *)this + 8) = a3;
      *((_DWORD *)this + 9) = a4;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
        (const char *)(unsigned int)v12);
      return (unsigned int)v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericinktippointsource.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
