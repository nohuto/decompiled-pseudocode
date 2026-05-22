/*
 * XREFs of ??1KernelContextProvider@@UEAA@XZ @ 0x18010A700
 * Callers:
 *     ??_EKernelContextProvider@@UEAAPEAXI@Z @ 0x18010A740 (--_EKernelContextProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KernelContextProvider::~KernelContextProvider(KernelContextProvider *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  SystemContextProvider::~SystemContextProvider(this);
}
