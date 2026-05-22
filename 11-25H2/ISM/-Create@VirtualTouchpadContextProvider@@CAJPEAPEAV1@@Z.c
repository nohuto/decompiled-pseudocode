/*
 * XREFs of ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x180199BB0
 * Callers:
 *     wil::init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___ @ 0x18019992C (wil--init_once_nothrow__lambda_ca82685424ac054990721f288eeb0943___.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x1800909F4 (--0SystemContextProvider@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180096F14 (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualTouchpadContextProvider::Create(struct VirtualTouchpadContextProvider **a1)
{
  char *v2; // rax
  char *v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  char *v6; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v5 = 0LL;
  v2 = (char *)RefCountedObject::operator new(0x98uLL);
  v3 = v2;
  v6 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x98uLL);
    SystemContextProvider::SystemContextProvider((SystemContextProvider *)v3);
    *(_QWORD *)v3 = &VirtualTouchpadContextProvider::`vftable'{for `ISystemContextProvider'};
    *((_QWORD *)v3 + 1) = &VirtualTouchpadContextProvider::`vftable'{for `RefCountedObject'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 88), 0, 0);
    *((_QWORD *)v3 + 16) = 0LL;
    *((_QWORD *)v3 + 17) = 0LL;
    *((_QWORD *)v3 + 18) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v5 = 0LL;
  *a1 = (struct VirtualTouchpadContextProvider *)v3;
  wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>(&v5);
  return 0LL;
}
