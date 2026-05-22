/*
 * XREFs of ?Create@KernelContextProvider@@CAJPEAPEAV1@@Z @ 0x180082968
 * Callers:
 *     wil::init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___ @ 0x18000D5DC (wil--init_once_nothrow__lambda_dcfa4c4accc7a4c0ffedb44f9f29ee27___.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C640 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x180090B94 (--0SystemContextProvider@@IEAA@XZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall KernelContextProvider::Create(struct KernelContextProvider **a1)
{
  char *v2; // rax
  char *v3; // rbx

  *a1 = 0LL;
  v2 = (char *)RefCountedObject::operator new(0x90uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x90uLL);
    SystemContextProvider::SystemContextProvider((SystemContextProvider *)v3);
    *(_QWORD *)v3 = &KernelContextProvider::`vftable'{for `ISystemContextProvider'};
    *((_QWORD *)v3 + 1) = &KernelContextProvider::`vftable'{for `RefCountedObject'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 88), 0, 0);
    *((_OWORD *)v3 + 8) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = (struct KernelContextProvider *)v3;
  return 0LL;
}
