/*
 * XREFs of ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x18019A6DC
 * Callers:
 *     wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x18019A464 (wil--init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x1800909F4 (--0SystemContextProvider@@IEAA@XZ.c)
 *     ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180096F14 (--1-$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DisplayOcclusionContextProvider::Create(struct DisplayOcclusionContextProvider **a1)
{
  SystemContextProvider *v2; // rax
  SystemContextProvider *v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  SystemContextProvider *v6; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v5 = 0LL;
  v2 = (SystemContextProvider *)RefCountedObject::operator new(0x70uLL);
  v3 = v2;
  v6 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    SystemContextProvider::SystemContextProvider(v3);
    *(_QWORD *)v3 = &DisplayOcclusionContextProvider::`vftable'{for `ISystemContextProvider'};
    *((_QWORD *)v3 + 1) = &DisplayOcclusionContextProvider::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v5 = 0LL;
  *a1 = v3;
  wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>(&v5);
  return 0LL;
}
